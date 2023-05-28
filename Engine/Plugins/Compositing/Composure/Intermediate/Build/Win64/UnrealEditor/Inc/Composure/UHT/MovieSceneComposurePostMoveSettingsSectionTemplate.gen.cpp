// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComposurePostMoveSettingsSectionTemplate() {}
// Cross Module References
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneComposurePostMoveSettingsSectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneComposurePostMoveSettingsSectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate;
class UScriptStruct* FMovieSceneComposurePostMoveSettingsSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("MovieSceneComposurePostMoveSettingsSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FMovieSceneComposurePostMoveSettingsSectionTemplate>()
{
	return FMovieSceneComposurePostMoveSettingsSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A movie scene evaluation template for post move settings sections. */" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h" },
		{ "ToolTip", "A movie scene evaluation template for post move settings sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComposurePostMoveSettingsSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Pivot_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Pivot, FMovieSceneComposurePostMoveSettingsSectionTemplate), nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposurePostMoveSettingsSectionTemplate, Pivot), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Pivot_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, FMovieSceneComposurePostMoveSettingsSectionTemplate), nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposurePostMoveSettingsSectionTemplate, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Translation_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_RotationAngle_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposurePostMoveSettingsSectionTemplate, RotationAngle), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_RotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_RotationAngle_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposurePostMoveSettingsSectionTemplate, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Scale_MetaData)) }; // 3942748414
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposurePostMoveSettingsSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposurePostMoveSettingsSectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType_MetaData)) }; // 498637471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_RotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewProp_BlendType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneComposurePostMoveSettingsSectionTemplate",
		sizeof(FMovieSceneComposurePostMoveSettingsSectionTemplate),
		alignof(FMovieSceneComposurePostMoveSettingsSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposurePostMoveSettingsSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposurePostMoveSettingsSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneComposurePostMoveSettingsSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneComposurePostMoveSettingsSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneComposurePostMoveSettingsSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneComposurePostMoveSettingsSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneComposurePostMoveSettingsSectionTemplate), 1811902938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposurePostMoveSettingsSectionTemplate_h_562521391(TEXT("/Script/Composure"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposurePostMoveSettingsSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposurePostMoveSettingsSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
