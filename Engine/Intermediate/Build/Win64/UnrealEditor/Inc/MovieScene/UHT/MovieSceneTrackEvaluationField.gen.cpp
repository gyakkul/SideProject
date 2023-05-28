// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTrackEvaluationField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackEvaluationField() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumberRange();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry;
class UScriptStruct* FMovieSceneTrackEvaluationFieldEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvaluationFieldEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackEvaluationFieldEntry>()
{
	return FMovieSceneTrackEvaluationFieldEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacySortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_LegacySortOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvaluationFieldEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, Range), Z_Construct_UScriptStruct_FFrameNumberRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_MetaData)) }; // 2612149518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder = { "LegacySortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, LegacySortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackEvaluationFieldEntry",
		sizeof(FMovieSceneTrackEvaluationFieldEntry),
		alignof(FMovieSceneTrackEvaluationFieldEntry),
		Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField;
class UScriptStruct* FMovieSceneTrackEvaluationField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvaluationField"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackEvaluationField>()
{
	return FMovieSceneTrackEvaluationField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvaluationField>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry, METADATA_PARAMS(nullptr, 0) }; // 1532640952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackEvaluationField, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_MetaData)) }; // 1532640952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackEvaluationField",
		sizeof(FMovieSceneTrackEvaluationField),
		alignof(FMovieSceneTrackEvaluationField),
		Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTrackEvaluationFieldEntry::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewStructOps, TEXT("MovieSceneTrackEvaluationFieldEntry"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackEvaluationFieldEntry), 1532640952U) },
		{ FMovieSceneTrackEvaluationField::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewStructOps, TEXT("MovieSceneTrackEvaluationField"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackEvaluationField), 3590730812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_246324339(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
