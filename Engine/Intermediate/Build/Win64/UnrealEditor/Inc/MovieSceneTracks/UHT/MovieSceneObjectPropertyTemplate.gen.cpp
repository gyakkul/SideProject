// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneObjectPropertyTemplate.h"
#include "Channels/MovieSceneObjectPathChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertyTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneObjectPropertyTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneObjectPropertyTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate;
class UScriptStruct* FMovieSceneObjectPropertyTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneObjectPropertyTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneObjectPropertyTemplate>()
{
	return FMovieSceneObjectPropertyTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneObjectPropertyTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectPropertyTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewProp_ObjectChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneObjectPropertyTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewProp_ObjectChannel = { "ObjectChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPropertyTemplate, ObjectChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewProp_ObjectChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewProp_ObjectChannel_MetaData)) }; // 3165347126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewProp_ObjectChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneObjectPropertyTemplate",
		sizeof(FMovieSceneObjectPropertyTemplate),
		alignof(FMovieSceneObjectPropertyTemplate),
		Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneObjectPropertyTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneObjectPropertyTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneObjectPropertyTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneObjectPropertyTemplate_Statics::NewStructOps, TEXT("MovieSceneObjectPropertyTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneObjectPropertyTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneObjectPropertyTemplate), 2831526242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneObjectPropertyTemplate_h_1366185420(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneObjectPropertyTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneObjectPropertyTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
