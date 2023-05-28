// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneAudioTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneAudioTrack::StaticRegisterNativesUMovieSceneAudioTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAudioTrack);
	UClass* Z_Construct_UClass_UMovieSceneAudioTrack_NoRegister()
	{
		return UMovieSceneAudioTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAudioTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioSections;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowHeight;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAudioTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of audio.\n */" },
		{ "IncludePath", "Tracks/MovieSceneAudioTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneAudioTrack.h" },
		{ "ToolTip", "Handles manipulation of audio." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections_Inner = { "AudioSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections_MetaData[] = {
		{ "Comment", "/** List of all root audio sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneAudioTrack.h" },
		{ "ToolTip", "List of all root audio sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections = { "AudioSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioTrack, AudioSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_RowHeight_MetaData[] = {
		{ "Comment", "/** The height for each row of this track */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneAudioTrack.h" },
		{ "ToolTip", "The height for each row of this track" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_RowHeight = { "RowHeight", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioTrack, RowHeight), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_RowHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_RowHeight_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAudioTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_AudioSections,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioTrack_Statics::NewProp_RowHeight,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneAudioTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneAudioTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAudioTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioTrack_Statics::ClassParams = {
		&UMovieSceneAudioTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneAudioTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAudioTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAudioTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAudioTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneAudioTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAudioTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneAudioTrack>()
	{
		return UMovieSceneAudioTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioTrack);
	UMovieSceneAudioTrack::~UMovieSceneAudioTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAudioTrack, UMovieSceneAudioTrack::StaticClass, TEXT("UMovieSceneAudioTrack"), &Z_Registration_Info_UClass_UMovieSceneAudioTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAudioTrack), 844201384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_1853128064(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
