// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData;
class UScriptStruct* FMovieScenePropertySectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertySectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertySectionData>()
{
	return FMovieScenePropertySectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertySectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionData, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionData, PropertyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewProp_PropertyPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieScenePropertySectionData",
		sizeof(FMovieScenePropertySectionData),
		alignof(FMovieScenePropertySectionData),
		Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieScenePropertySectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieScenePropertySectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate;
class UScriptStruct* FMovieScenePropertySectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertySectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertySectionTemplate>()
{
	return FMovieScenePropertySectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertySectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData = { "PropertyData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionTemplate, PropertyData), Z_Construct_UScriptStruct_FMovieScenePropertySectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData_MetaData)) }; // 493674972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewProp_PropertyData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieScenePropertySectionTemplate",
		sizeof(FMovieScenePropertySectionTemplate),
		alignof(FMovieScenePropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieScenePropertySectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePropertySectionData_Statics::NewStructOps, TEXT("MovieScenePropertySectionData"), &Z_Registration_Info_UScriptStruct_MovieScenePropertySectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePropertySectionData), 493674972U) },
		{ FMovieScenePropertySectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_Statics::NewStructOps, TEXT("MovieScenePropertySectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieScenePropertySectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePropertySectionTemplate), 3767895176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h_1773056828(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieScenePropertyTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
