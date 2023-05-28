// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneDMXLibraryTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDMXLibraryTemplate() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneDMXLibraryTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneDMXLibraryTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate;
class UScriptStruct* FMovieSceneDMXLibraryTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("MovieSceneDMXLibraryTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FMovieSceneDMXLibraryTemplate>()
{
	return FMovieSceneDMXLibraryTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Template that performs evaluation of Fixture Patch sections */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibraryTemplate.h" },
		{ "ToolTip", "Template that performs evaluation of Fixture Patch sections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDMXLibraryTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibraryTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneDMXLibraryTemplate, Section), Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneDMXLibraryTemplate",
		sizeof(FMovieSceneDMXLibraryTemplate),
		alignof(FMovieSceneDMXLibraryTemplate),
		Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneDMXLibraryTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDMXLibraryTemplate_Statics::NewStructOps, TEXT("MovieSceneDMXLibraryTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneDMXLibraryTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDMXLibraryTemplate), 3759232191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTemplate_h_1602745545(TEXT("/Script/DMXRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
