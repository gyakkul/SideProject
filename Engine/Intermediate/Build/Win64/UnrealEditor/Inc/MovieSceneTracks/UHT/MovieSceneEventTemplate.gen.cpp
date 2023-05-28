// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneEventTemplate.h"
#include "Sections/MovieSceneEventSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneEventSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneEventSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate;
class UScriptStruct* FMovieSceneEventSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventSectionTemplate>()
{
	return FMovieSceneEventSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData)) }; // 2061854937
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneEventSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((FMovieSceneEventSectionTemplate*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneEventSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_bFireEventsWhenBackwards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneEventSectionTemplate",
		sizeof(FMovieSceneEventSectionTemplate),
		alignof(FMovieSceneEventSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEventSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneEventSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneEventSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventSectionTemplate), 182362171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_3287354968(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneEventTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
