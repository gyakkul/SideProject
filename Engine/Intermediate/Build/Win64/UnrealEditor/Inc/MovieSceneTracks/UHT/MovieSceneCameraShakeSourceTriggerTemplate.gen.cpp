// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneCameraShakeSourceTriggerTemplate.h"
#include "Channels/MovieSceneCameraShakeSourceTriggerChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSourceTriggerSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneCameraShakeSourceTriggerSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate;
class UScriptStruct* FMovieSceneCameraShakeSourceTriggerSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceTriggerSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceTriggerSectionTemplate>()
{
	return FMovieSceneCameraShakeSourceTriggerSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerTimes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceTriggerTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTriggerSectionTemplate>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes_Inner = { "TriggerTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceTriggerTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes = { "TriggerTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerSectionTemplate, TriggerTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues_Inner = { "TriggerValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger, METADATA_PARAMS(nullptr, 0) }; // 3727092023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceTriggerTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues = { "TriggerValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerSectionTemplate, TriggerValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues_MetaData)) }; // 3727092023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewProp_TriggerValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraShakeSourceTriggerSectionTemplate",
		sizeof(FMovieSceneCameraShakeSourceTriggerSectionTemplate),
		alignof(FMovieSceneCameraShakeSourceTriggerSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceTriggerTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceTriggerTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCameraShakeSourceTriggerSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneCameraShakeSourceTriggerSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeSourceTriggerSectionTemplate), 103741144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceTriggerTemplate_h_999736591(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceTriggerTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceTriggerTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
