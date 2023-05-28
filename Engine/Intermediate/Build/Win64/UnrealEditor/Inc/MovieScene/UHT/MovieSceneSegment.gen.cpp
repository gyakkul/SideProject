// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneSegment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSegment() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESectionEvaluationFlags;
	static UEnum* ESectionEvaluationFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESectionEvaluationFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESectionEvaluationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("ESectionEvaluationFlags"));
		}
		return Z_Registration_Info_UEnum_ESectionEvaluationFlags.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<ESectionEvaluationFlags>()
	{
		return ESectionEvaluationFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::Enumerators[] = {
		{ "ESectionEvaluationFlags::None", (int64)ESectionEvaluationFlags::None },
		{ "ESectionEvaluationFlags::PreRoll", (int64)ESectionEvaluationFlags::PreRoll },
		{ "ESectionEvaluationFlags::PostRoll", (int64)ESectionEvaluationFlags::PostRoll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration specifying how to evaluate a particular section when inside a segment */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "None.Comment", "/** No special flags - normal evaluation */" },
		{ "None.Name", "ESectionEvaluationFlags::None" },
		{ "None.ToolTip", "No special flags - normal evaluation" },
		{ "PostRoll.Comment", "/** Segment resides inside the 'post-roll' time for the section */" },
		{ "PostRoll.Name", "ESectionEvaluationFlags::PostRoll" },
		{ "PostRoll.ToolTip", "Segment resides inside the 'post-roll' time for the section" },
		{ "PreRoll.Comment", "/** Segment resides inside the 'pre-roll' time for the section */" },
		{ "PreRoll.Name", "ESectionEvaluationFlags::PreRoll" },
		{ "PreRoll.ToolTip", "Segment resides inside the 'pre-roll' time for the section" },
		{ "ToolTip", "Enumeration specifying how to evaluate a particular section when inside a segment" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"ESectionEvaluationFlags",
		"ESectionEvaluationFlags",
		Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags()
	{
		if (!Z_Registration_Info_UEnum_ESectionEvaluationFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESectionEvaluationFlags.InnerSingleton, Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESectionEvaluationFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier;
class UScriptStruct* FMovieSceneSegmentIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSegmentIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSegmentIdentifier>()
{
	return FMovieSceneSegmentIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdentifierIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IdentifierIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A unique identifier for a segment within a FMovieSceneEvaluationTrackSegments container */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "A unique identifier for a segment within a FMovieSceneEvaluationTrackSegments container" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSegmentIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex = { "IdentifierIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSegmentIdentifier, IdentifierIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewProp_IdentifierIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSegmentIdentifier",
		sizeof(FMovieSceneSegmentIdentifier),
		alignof(FMovieSceneSegmentIdentifier),
		Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SectionEvaluationData;
class UScriptStruct* FSectionEvaluationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SectionEvaluationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SectionEvaluationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectionEvaluationData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("SectionEvaluationData"));
	}
	return Z_Registration_Info_UScriptStruct_SectionEvaluationData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FSectionEvaluationData>()
{
	return FSectionEvaluationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSectionEvaluationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImplIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImplIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluation data that specifies information about what to evaluate for a given template\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "Evaluation data that specifies information about what to evaluate for a given template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectionEvaluationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex_MetaData[] = {
		{ "Comment", "/** The implementation index we should evaluate (index into FMovieSceneEvaluationTrack::ChildTemplates) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "The implementation index we should evaluate (index into FMovieSceneEvaluationTrack::ChildTemplates)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex = { "ImplIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSectionEvaluationData, ImplIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime_MetaData[] = {
		{ "Comment", "/** A forced time to evaluate this section at */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "A forced time to evaluate this section at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSectionEvaluationData, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Additional flags for evaluating this section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "Additional flags for evaluating this section" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSectionEvaluationData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_MetaData)) }; // 2612149518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ImplIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_ForcedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"SectionEvaluationData",
		sizeof(FSectionEvaluationData),
		alignof(FSectionEvaluationData),
		Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSectionEvaluationData()
	{
		if (!Z_Registration_Info_UScriptStruct_SectionEvaluationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SectionEvaluationData.InnerSingleton, Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SectionEvaluationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSegment;
class UScriptStruct* FMovieSceneSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSegment, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSegment"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSegment.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSegment>()
{
	return FMovieSceneSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Information about a single segment of an evaluation track\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSegment.h" },
		{ "ToolTip", "Information about a single segment of an evaluation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSegment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSegment",
		sizeof(FMovieSceneSegment),
		alignof(FMovieSceneSegment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSegment.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSegment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics::EnumInfo[] = {
		{ ESectionEvaluationFlags_StaticEnum, TEXT("ESectionEvaluationFlags"), &Z_Registration_Info_UEnum_ESectionEvaluationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2612149518U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSegmentIdentifier::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics::NewStructOps, TEXT("MovieSceneSegmentIdentifier"), &Z_Registration_Info_UScriptStruct_MovieSceneSegmentIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSegmentIdentifier), 758618244U) },
		{ FSectionEvaluationData::StaticStruct, Z_Construct_UScriptStruct_FSectionEvaluationData_Statics::NewStructOps, TEXT("SectionEvaluationData"), &Z_Registration_Info_UScriptStruct_SectionEvaluationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSectionEvaluationData), 444932628U) },
		{ FMovieSceneSegment::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSegment_Statics::NewStructOps, TEXT("MovieSceneSegment"), &Z_Registration_Info_UScriptStruct_MovieSceneSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSegment), 2490844308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_3450808492(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
