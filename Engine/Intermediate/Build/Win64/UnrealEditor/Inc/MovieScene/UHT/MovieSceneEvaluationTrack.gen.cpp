// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneTrackImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTrack() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluationMethod;
	static UEnum* EEvaluationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EEvaluationMethod, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EEvaluationMethod"));
		}
		return Z_Registration_Info_UEnum_EEvaluationMethod.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EEvaluationMethod>()
	{
		return EEvaluationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enumerators[] = {
		{ "EEvaluationMethod::Static", (int64)EEvaluationMethod::Static },
		{ "EEvaluationMethod::Swept", (int64)EEvaluationMethod::Swept },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration to determine how a track should be evaluated */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "Static.Comment", "/** Evaluation only ever occurs at a single time. Delta is irrelevant. Example: Basic curve eval, animation */" },
		{ "Static.Name", "EEvaluationMethod::Static" },
		{ "Static.ToolTip", "Evaluation only ever occurs at a single time. Delta is irrelevant. Example: Basic curve eval, animation" },
		{ "Swept.Comment", "/** Evaluation from one frame to the next must consider the entire swept delta range on the track. Example: Events */" },
		{ "Swept.Name", "EEvaluationMethod::Swept" },
		{ "Swept.ToolTip", "Evaluation from one frame to the next must consider the entire swept delta range on the track. Example: Events" },
		{ "ToolTip", "Enumeration to determine how a track should be evaluated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EEvaluationMethod",
		"EEvaluationMethod",
		Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EEvaluationMethod()
	{
		if (!Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton, Z_Construct_UEnum_MovieScene_EEvaluationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvaluationMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack;
class UScriptStruct* FMovieSceneEvaluationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationTrack>()
{
	return FMovieSceneEvaluationTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationPriority_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_EvaluationPriority;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTrack_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceTrack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildTemplates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EvaluationGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPreroll_MetaData[];
#endif
		static void NewProp_bEvaluateInPreroll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPreroll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateInPostroll_MetaData[];
#endif
		static void NewProp_bEvaluateInPostroll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateInPostroll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTearDownPriority_MetaData[];
#endif
		static void NewProp_bTearDownPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTearDownPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluation track that is stored within an evaluation template for a sequence.\n * Contains user-defined evaluation templates, and an optional track implementation\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation track that is stored within an evaluation template for a sequence.\nContains user-defined evaluation templates, and an optional track implementation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "Comment", "/** ID of the possessable or spawnable within the UMovieScene this track belongs to, if any. Zero guid where this relates to a root track. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "ID of the possessable or spawnable within the UMovieScene this track belongs to, if any. Zero guid where this relates to a root track." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority_MetaData[] = {
		{ "Comment", "/** Evaluation priority. Highest is evaluated first */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation priority. Highest is evaluated first" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority = { "EvaluationPriority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_MetaData[] = {
		{ "Comment", "/** Evaluation method - static or swept */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Evaluation method - static or swept" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod = { "EvaluationMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationMethod), Z_Construct_UEnum_MovieScene_EEvaluationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_MetaData)) }; // 3832803671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack_MetaData[] = {
		{ "Comment", "/** The movie scene track that created this evaluation track. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "The movie scene track that created this evaluation track." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack = { "SourceTrack", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, SourceTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_Inner = { "ChildTemplates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, METADATA_PARAMS(nullptr, 0) }; // 1425025564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_MetaData[] = {
		{ "Comment", "/** Domain-specific evaluation templates (normally 1 per section) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Domain-specific evaluation templates (normally 1 per section)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates = { "ChildTemplates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, ChildTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_MetaData)) }; // 1425025564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate_MetaData[] = {
		{ "Comment", "/** Domain-specific track implementation override. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Domain-specific track implementation override." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate = { "TrackTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, TrackTemplate), Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate_MetaData)) }; // 3840691497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup_MetaData[] = {
		{ "Comment", "/** Flush group that determines whether this track belongs to a group of tracks */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Flush group that determines whether this track belongs to a group of tracks" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup = { "EvaluationGroup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTrack, EvaluationGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_MetaData[] = {
		{ "Comment", "/** Whether this track is evaluated in preroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether this track is evaluated in preroll" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPreroll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll = { "bEvaluateInPreroll", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_MetaData[] = {
		{ "Comment", "/** Whether this track is evaluated in postroll */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether this track is evaluated in postroll" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationTrack*)Obj)->bEvaluateInPostroll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll = { "bEvaluateInPostroll", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_MetaData[] = {
		{ "Comment", "/** Whether track should be given priority when being torn down */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTrack.h" },
		{ "ToolTip", "Whether track should be given priority when being torn down" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_SetBit(void* Obj)
	{
		((FMovieSceneEvaluationTrack*)Obj)->bTearDownPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority = { "bTearDownPriority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneEvaluationTrack), &Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ObjectBindingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_SourceTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_ChildTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_TrackTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_EvaluationGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPreroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bEvaluateInPostroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewProp_bTearDownPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTrack",
		sizeof(FMovieSceneEvaluationTrack),
		alignof(FMovieSceneEvaluationTrack),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::EnumInfo[] = {
		{ EEvaluationMethod_StaticEnum, TEXT("EEvaluationMethod"), &Z_Registration_Info_UEnum_EEvaluationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832803671U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEvaluationTrack::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics::NewStructOps, TEXT("MovieSceneEvaluationTrack"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationTrack), 1936579785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_219831181(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
