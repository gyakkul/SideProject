// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTrack.h"
#include "MovieSceneTrackEvaluationField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrack() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions;
class UScriptStruct* FMovieSceneTrackEvalOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvalOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackEvalOptions>()
{
	return FMovieSceneTrackEvalOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateNearestSection_MetaData[];
#endif
		static void NewProp_bCanEvaluateNearestSection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateNearestSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalNearestSection_MetaData[];
#endif
		static void NewProp_bEvalNearestSection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalNearestSection;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateNearestSection_MetaData[];
#endif
		static void NewProp_bEvaluateNearestSection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateNearestSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Generic evaluation options for any track */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Generic evaluation options for any track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvalOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_MetaData[] = {
		{ "Comment", "/** true when the value of bEvalNearestSection is to be considered for the track */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "true when the value of bEvalNearestSection is to be considered for the track" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bCanEvaluateNearestSection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection = { "bCanEvaluateNearestSection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When evaluating empty space on a track, will evaluate the last position of the previous section (if possible), or the first position of the next section, in that order of preference. */" },
		{ "DisplayName", "Evaluate Nearest Section" },
		{ "EditCondition", "bCanEvaluateNearestSection" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "When evaluating empty space on a track, will evaluate the last position of the previous section (if possible), or the first position of the next section, in that order of preference." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvalNearestSection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection = { "bEvalNearestSection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Evaluate this track as part of its parent sub-section's pre-roll, if applicable */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Evaluate this track as part of its parent sub-section's pre-roll, if applicable" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateInPreroll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll = { "bEvaluateInPreroll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Evaluate this track as part of its parent sub-section's post-roll, if applicable */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Evaluate this track as part of its parent sub-section's post-roll, if applicable" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateInPostroll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll = { "bEvaluateInPostroll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_SetBit(void* Obj)
	{
		((FMovieSceneTrackEvalOptions*)Obj)->bEvaluateNearestSection_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection = { "bEvaluateNearestSection", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneTrackEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bCanEvaluateNearestSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvalNearestSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPreroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateInPostroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewProp_bEvaluateNearestSection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackEvalOptions",
		sizeof(FMovieSceneTrackEvalOptions),
		alignof(FMovieSceneTrackEvalOptions),
		Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions;
class UScriptStruct* FMovieSceneTrackDisplayOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackDisplayOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackDisplayOptions>()
{
	return FMovieSceneTrackDisplayOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVerticalFrames_MetaData[];
#endif
		static void NewProp_bShowVerticalFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVerticalFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Generic display options for any track */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Generic display options for any track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackDisplayOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Show bounds as vertical frames */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Show bounds as vertical frames" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_SetBit(void* Obj)
	{
		((FMovieSceneTrackDisplayOptions*)Obj)->bShowVerticalFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames = { "bShowVerticalFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneTrackDisplayOptions), &Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewProp_bShowVerticalFrames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackDisplayOptions",
		sizeof(FMovieSceneTrackDisplayOptions),
		alignof(FMovieSceneTrackDisplayOptions),
		Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions.InnerSingleton;
	}
	void UMovieSceneTrack::StaticRegisterNativesUMovieSceneTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrack);
	UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister()
	{
		return UMovieSceneTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvalOptions;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayOptions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEvalDisabled_MetaData[];
#endif
		static void NewProp_bIsEvalDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEvalDisabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowsDisabled_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowsDisabled_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowsDisabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationFieldGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationFieldGuid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationFieldVersion_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_EvaluationFieldVersion;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationField_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationField;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDefaultSections_MetaData[];
#endif
		static void NewProp_bSupportsDefaultSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDefaultSections;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for a track in a Movie Scene\n */" },
		{ "IncludePath", "MovieSceneTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a track in a Movie Scene" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** General evaluation options for a given track */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "General evaluation options for a given track" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions = { "EvalOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, EvalOptions), Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions_MetaData)) }; // 835322976
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** General display options for a given track */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "General display options for a given track" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions = { "DisplayOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, DisplayOptions), Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions_MetaData)) }; // 2542852227
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled_MetaData[] = {
		{ "Comment", "/** Whether evaluation of this track has been disabled via mute/solo */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Whether evaluation of this track has been disabled via mute/solo" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled_SetBit(void* Obj)
	{
		((UMovieSceneTrack*)Obj)->bIsEvalDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled = { "bIsEvalDisabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneTrack), &Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled_Inner = { "RowsDisabled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled_MetaData[] = {
		{ "Comment", "/** Which rows have been disabled via mute/solo */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Which rows have been disabled via mute/solo" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled = { "RowsDisabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, RowsDisabled), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldGuid_MetaData[] = {
		{ "Comment", "/** The guid of the object signature that the EvaluationField member relates to */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "The guid of the object signature that the EvaluationField member relates to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldGuid = { "EvaluationFieldGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, EvaluationFieldGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldGuid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldVersion_MetaData[] = {
		{ "Comment", "/** The version of the logic in PopulateEvaluationTree when the EvaluationField was cached */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "The version of the logic in PopulateEvaluationTree when the EvaluationField was cached" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldVersion = { "EvaluationFieldVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, EvaluationFieldVersion), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldVersion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationField_MetaData[] = {
		{ "Comment", "/** An array of entries that define when specific sections should be evaluated on this track */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "An array of entries that define when specific sections should be evaluated on this track" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationField = { "EvaluationField", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, EvaluationField), Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationField_MetaData)) }; // 3590730812
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "Comment", "/** The object binding that this track resides within */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "The object binding that this track resides within" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_ObjectBindingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** This track's tint color */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "This track's tint color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint = { "TrackTint", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, TrackTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder_MetaData[] = {
		{ "Comment", "/** This folder's desired sorting order */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "This folder's desired sorting order" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrack, SortingOrder), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_MetaData[] = {
		{ "Comment", "/** Does this track support the creation of a default section when created? */" },
		{ "ModuleRelativePath", "Public/MovieSceneTrack.h" },
		{ "ToolTip", "Does this track support the creation of a default section when created?" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_SetBit(void* Obj)
	{
		((UMovieSceneTrack*)Obj)->bSupportsDefaultSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections = { "bSupportsDefaultSections", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneTrack), &Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvalOptions,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_DisplayOptions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bIsEvalDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_RowsDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldGuid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationFieldVersion,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_EvaluationField,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_ObjectBindingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_TrackTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_SortingOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrack_Statics::NewProp_bSupportsDefaultSections,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrack_Statics::ClassParams = {
		&UMovieSceneTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::PropPointers),
		0,
		0x00A800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrack>()
	{
		return UMovieSceneTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrack);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTrackEvalOptions::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics::NewStructOps, TEXT("MovieSceneTrackEvalOptions"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackEvalOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackEvalOptions), 835322976U) },
		{ FMovieSceneTrackDisplayOptions::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics::NewStructOps, TEXT("MovieSceneTrackDisplayOptions"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackDisplayOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackDisplayOptions), 2542852227U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrack, UMovieSceneTrack::StaticClass, TEXT("UMovieSceneTrack"), &Z_Registration_Info_UClass_UMovieSceneTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrack), 3795564437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_2309106892(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
