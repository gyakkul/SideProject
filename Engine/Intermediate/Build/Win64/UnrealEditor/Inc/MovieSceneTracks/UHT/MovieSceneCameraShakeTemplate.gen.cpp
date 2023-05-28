// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneCameraShakeTemplate.h"
#include "Sections/MovieSceneCameraShakeSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCameraShakeEvaluator::StaticRegisterNativesUMovieSceneCameraShakeEvaluator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeEvaluator);
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_NoRegister()
	{
		return UMovieSceneCameraShakeEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom logic for playing camera shakes inside sequences.\n *\n * Factory methods for these evaluators are registered on the FMovieSceneCameraShakeEvaluatorRegistry. An evaluator is created for\n * each camera shake running in a sequence.\n */" },
		{ "IncludePath", "Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Custom logic for playing camera shakes inside sequences.\n\nFactory methods for these evaluators are registered on the FMovieSceneCameraShakeEvaluatorRegistry. An evaluator is created for\neach camera shake running in a sequence." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeEvaluator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::ClassParams = {
		&UMovieSceneCameraShakeEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluator.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluator.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeEvaluator>()
	{
		return UMovieSceneCameraShakeEvaluator::StaticClass();
	}
	UMovieSceneCameraShakeEvaluator::UMovieSceneCameraShakeEvaluator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeEvaluator);
	UMovieSceneCameraShakeEvaluator::~UMovieSceneCameraShakeEvaluator() {}

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneCameraShakeSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate;
class UScriptStruct* FMovieSceneCameraShakeSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSectionTemplate>()
{
	return FMovieSceneCameraShakeSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Section template for a camera anim */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Section template for a camera anim" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData_MetaData[] = {
		{ "Comment", "/** Source data taken from the section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Source data taken from the section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData_MetaData)) }; // 2923888832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** Cached section start time */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Cached section start time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraShakeSectionTemplate",
		sizeof(FMovieSceneCameraShakeSectionTemplate),
		alignof(FMovieSceneCameraShakeSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCameraShakeSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneCameraShakeSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeSectionTemplate), 3655865990U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraShakeEvaluator, UMovieSceneCameraShakeEvaluator::StaticClass, TEXT("UMovieSceneCameraShakeEvaluator"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeEvaluator), 2766463906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_467194828(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneCameraShakeTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
