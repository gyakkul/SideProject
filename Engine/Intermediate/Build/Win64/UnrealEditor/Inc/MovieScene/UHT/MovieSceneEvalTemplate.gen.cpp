// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplate() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneEvalTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplateBase>(), "USTRUCT FMovieSceneEvalTemplate cannot be polymorphic unless super FMovieSceneEvalTemplateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate;
class UScriptStruct* FMovieSceneEvalTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplate>()
{
	return FMovieSceneEvalTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompletionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompletionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSectionPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceSectionPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used for movie scene evaluation templates contained within a track. Typically these are defined as one per-section.\n * Serialized into a FMovieSceneEvaluationTemplate contained within the sequence itself (for fast initialization at runtime).\n * Templates are executed in a 3-phase algorithm:\n *\x09\x09""1) Initialize: (opt-in) Called at the start of the frame. Able to access mutable state from the playback context. Used to initialize any persistent state required for the evaluation pass.\n *\x09\x09""2) Evaluate: Potentially called on a thread. Should (where possible) perform all costly evaluation logic, accumulating into execution tokens which will be executed at a later time on the game thread.\n *\x09\x09""3) Execute: Called on all previously submitted execution tokens to apply the evaluated state to the movie scene player\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "ToolTip", "Structure used for movie scene evaluation templates contained within a track. Typically these are defined as one per-section.\nSerialized into a FMovieSceneEvaluationTemplate contained within the sequence itself (for fast initialization at runtime).\nTemplates are executed in a 3-phase algorithm:\n            1) Initialize: (opt-in) Called at the start of the frame. Able to access mutable state from the playback context. Used to initialize any persistent state required for the evaluation pass.\n            2) Evaluate: Potentially called on a thread. Should (where possible) perform all costly evaluation logic, accumulating into execution tokens which will be executed at a later time on the game thread.\n            3) Execute: Called on all previously submitted execution tokens to apply the evaluated state to the movie scene player" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplate>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_MetaData[] = {
		{ "Comment", "/** Enumeration value signifying whether we should restore any animated state stored by this entity when this eval tempalte is no longer evaluated */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "ToolTip", "Enumeration value signifying whether we should restore any animated state stored by this entity when this eval tempalte is no longer evaluated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode = { "CompletionMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvalTemplate, CompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_MetaData)) }; // 189609525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr_MetaData[] = {
		{ "Comment", "/** The section from which this template originates */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The section from which this template originates" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr = { "SourceSectionPtr", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvalTemplate, SourceSectionPtr), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,
		&NewStructOps,
		"MovieSceneEvalTemplate",
		sizeof(FMovieSceneEvalTemplate),
		alignof(FMovieSceneEvalTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr;
class UScriptStruct* FMovieSceneEvalTemplatePtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplatePtr"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplatePtr>()
{
	return FMovieSceneEvalTemplatePtr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom serialized type that allows serializing structs derived from FMovieSceneEvalTemplate, and attempts to store an evaluation template in inline memory if possible\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "ToolTip", "Custom serialized type that allows serializing structs derived from FMovieSceneEvalTemplate, and attempts to store an evaluation template in inline memory if possible" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplatePtr>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvalTemplatePtr",
		sizeof(FMovieSceneEvalTemplatePtr),
		alignof(FMovieSceneEvalTemplatePtr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEvalTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewStructOps, TEXT("MovieSceneEvalTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvalTemplate), 1893087920U) },
		{ FMovieSceneEvalTemplatePtr::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::NewStructOps, TEXT("MovieSceneEvalTemplatePtr"), &Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplatePtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvalTemplatePtr), 1425025564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_2495095408(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
