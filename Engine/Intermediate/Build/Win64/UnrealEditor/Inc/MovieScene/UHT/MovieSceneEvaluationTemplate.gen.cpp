// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvaluationTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "Evaluation/MovieSceneTrackIdentifier.h"
#include "MovieSceneFrameMigration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger;
class UScriptStruct* FMovieSceneTemplateGenerationLedger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTemplateGenerationLedger"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTemplateGenerationLedger>()
{
	return FMovieSceneTemplateGenerationLedger::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTrackIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastTrackIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackSignatureToTrackIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TrackSignatureToTrackIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSectionRanges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubSectionRanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier = { "LastTrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier_MetaData)) }; // 2461206580
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_ValueProp = { "TrackSignatureToTrackIdentifier", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) }; // 2461206580
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp = { "TrackSignatureToTrackIdentifier_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_MetaData[] = {
		{ "Comment", "/** Map of track signature to array of track identifiers that it created */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of track signature to array of track identifiers that it created" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier = { "TrackSignatureToTrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_MetaData)) }; // 2461206580
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_ValueProp = { "SubSectionRanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(nullptr, 0) }; // 199181766
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_Key_KeyProp = { "SubSectionRanges_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_MetaData[] = {
		{ "Comment", "/** Map of sub section ranges that exist in a template */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of sub section ranges that exist in a template" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges = { "SubSectionRanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, SubSectionRanges), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_MetaData)) }; // 199181766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTemplateGenerationLedger",
		sizeof(FMovieSceneTemplateGenerationLedger),
		alignof(FMovieSceneTemplateGenerationLedger),
		Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData;
class UScriptStruct* FMovieSceneSubSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSectionData>()
{
	return FMovieSceneSubSectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data that represents a single sub-section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Data that represents a single sub-section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section_MetaData[] = {
		{ "Comment", "/** The sub section itself */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The sub section itself" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, Section), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId_MetaData[] = {
		{ "Comment", "/** The object binding that the sub section belongs to (usually zero) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The object binding that the sub section belongs to (usually zero)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId = { "ObjectBindingId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, ObjectBindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Evaluation flags for the section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Evaluation flags for the section" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_MetaData)) }; // 2612149518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSectionData",
		sizeof(FMovieSceneSubSectionData),
		alignof(FMovieSceneSubSectionData),
		Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber;
class UScriptStruct* FMovieSceneEvaluationTemplateSerialNumber::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplateSerialNumber"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTemplateSerialNumber>()
{
	return FMovieSceneEvaluationTemplateSerialNumber::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sereal number used to identify evaluation template state that can only ever increase over its lifetime.\n * Only to be stored internally on FMovieSceneEvaluationTemplate.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Sereal number used to identify evaluation template state that can only ever increase over its lifetime.\nOnly to be stored internally on FMovieSceneEvaluationTemplate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplateSerialNumber>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The internal value of the serial number */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The internal value of the serial number" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplateSerialNumber, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTemplateSerialNumber",
		sizeof(FMovieSceneEvaluationTemplateSerialNumber),
		alignof(FMovieSceneEvaluationTemplateSerialNumber),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate;
class UScriptStruct* FMovieSceneEvaluationTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTemplate>()
{
	return FMovieSceneEvaluationTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceSignature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSerialNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateSerialNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateLedger_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateLedger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_ValueProp = { "Tracks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, METADATA_PARAMS(nullptr, 0) }; // 1936579785
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_Key_KeyProp = { "Tracks_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) }; // 2461206580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** Map of evaluation tracks from identifier to track */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of evaluation tracks from identifier to track" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Tracks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_MetaData)) }; // 2461206580 1936579785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature = { "SequenceSignature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, SequenceSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber_MetaData[] = {
		{ "Comment", "/** Serial number that is incremented every time this template is re-generated through FMovieSceneEvaluationTemplateGenerator */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Serial number that is incremented every time this template is re-generated through FMovieSceneEvaluationTemplateGenerator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber = { "TemplateSerialNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateSerialNumber), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber_MetaData)) }; // 2554375800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger = { "TemplateLedger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateLedger), Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger_MetaData)) }; // 1449994407
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTemplate",
		sizeof(FMovieSceneEvaluationTemplate),
		alignof(FMovieSceneEvaluationTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTemplateGenerationLedger::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewStructOps, TEXT("MovieSceneTemplateGenerationLedger"), &Z_Registration_Info_UScriptStruct_MovieSceneTemplateGenerationLedger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTemplateGenerationLedger), 1449994407U) },
		{ FMovieSceneSubSectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewStructOps, TEXT("MovieSceneSubSectionData"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSectionData), 600176185U) },
		{ FMovieSceneEvaluationTemplateSerialNumber::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewStructOps, TEXT("MovieSceneEvaluationTemplateSerialNumber"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplateSerialNumber, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationTemplateSerialNumber), 2554375800U) },
		{ FMovieSceneEvaluationTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewStructOps, TEXT("MovieSceneEvaluationTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationTemplate), 4076333851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_431911926(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
