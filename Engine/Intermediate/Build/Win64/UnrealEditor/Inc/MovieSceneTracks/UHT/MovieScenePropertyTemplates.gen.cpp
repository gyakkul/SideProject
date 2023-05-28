// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieScenePropertyTemplates.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneStringChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplates() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneBoolPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneBoolPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate;
class UScriptStruct* FMovieSceneBoolPropertySectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBoolPropertySectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBoolPropertySectionTemplate>()
{
	return FMovieSceneBoolPropertySectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBoolPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve = { "BoolCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBoolPropertySectionTemplate, BoolCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData)) }; // 2252890828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneBoolPropertySectionTemplate",
		sizeof(FMovieSceneBoolPropertySectionTemplate),
		alignof(FMovieSceneBoolPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneStringPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneStringPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate;
class UScriptStruct* FMovieSceneStringPropertySectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneStringPropertySectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneStringPropertySectionTemplate>()
{
	return FMovieSceneStringPropertySectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneStringPropertySectionTemplate, StringCurve), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData)) }; // 2536368632
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneStringPropertySectionTemplate",
		sizeof(FMovieSceneStringPropertySectionTemplate),
		alignof(FMovieSceneStringPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePropertyTemplates_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePropertyTemplates_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneBoolPropertySectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewStructOps, TEXT("MovieSceneBoolPropertySectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneBoolPropertySectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBoolPropertySectionTemplate), 617425991U) },
		{ FMovieSceneStringPropertySectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewStructOps, TEXT("MovieSceneStringPropertySectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneStringPropertySectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneStringPropertySectionTemplate), 2795272505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePropertyTemplates_h_1157693829(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePropertyTemplates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePropertyTemplates_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
