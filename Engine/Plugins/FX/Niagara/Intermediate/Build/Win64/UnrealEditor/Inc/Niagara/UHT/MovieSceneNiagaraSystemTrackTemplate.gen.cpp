// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/MovieSceneNiagaraSystemTrackTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemTrackTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneNiagaraSystemTrackTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneNiagaraSystemTrackTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate;
class UScriptStruct* FMovieSceneNiagaraSystemTrackTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraSystemTrackTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSystemTrackTemplate>()
{
	return FMovieSceneNiagaraSystemTrackTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackTemplate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneNiagaraSystemTrackTemplate",
		sizeof(FMovieSceneNiagaraSystemTrackTemplate),
		alignof(FMovieSceneNiagaraSystemTrackTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneNiagaraSystemTrackImplementation>() == std::is_polymorphic<FMovieSceneTrackImplementation>(), "USTRUCT FMovieSceneNiagaraSystemTrackImplementation cannot be polymorphic unless super FMovieSceneTrackImplementation is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation;
class UScriptStruct* FMovieSceneNiagaraSystemTrackImplementation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraSystemTrackImplementation"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraSystemTrackImplementation>()
{
	return FMovieSceneNiagaraSystemTrackImplementation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnSectionStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnSectionEndFrame;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnSectionStartBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionStartBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionStartBehavior;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnSectionEvaluateBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEvaluateBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionEvaluateBehavior;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnSectionEndBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSectionEndBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSectionEndBehavior;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AgeUpdateMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgeUpdateMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AgeUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowScalability_MetaData[];
#endif
		static void NewProp_bAllowScalability_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowScalability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraSystemTrackImplementation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame = { "SpawnSectionStartFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame = { "SpawnSectionEndFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior = { "SpawnSectionStartBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_MetaData)) }; // 1911655987
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior = { "SpawnSectionEvaluateBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_MetaData)) }; // 2396129806
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior = { "SpawnSectionEndBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_MetaData)) }; // 1546558255
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode = { "AgeUpdateMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_MetaData)) }; // 1189200022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_SetBit(void* Obj)
	{
		((FMovieSceneNiagaraSystemTrackImplementation*)Obj)->bAllowScalability = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability = { "bAllowScalability", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneNiagaraSystemTrackImplementation), &Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionStartBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEvaluateBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_SpawnSectionEndBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_AgeUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewProp_bAllowScalability,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneTrackImplementation,
		&NewStructOps,
		"MovieSceneNiagaraSystemTrackImplementation",
		sizeof(FMovieSceneNiagaraSystemTrackImplementation),
		alignof(FMovieSceneNiagaraSystemTrackImplementation),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraSystemTrackTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraSystemTrackTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraSystemTrackTemplate), 270961328U) },
		{ FMovieSceneNiagaraSystemTrackImplementation::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraSystemTrackImplementation_Statics::NewStructOps, TEXT("MovieSceneNiagaraSystemTrackImplementation"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraSystemTrackImplementation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraSystemTrackImplementation), 3512785244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_1428270232(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_MovieSceneNiagaraSystemTrackTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
