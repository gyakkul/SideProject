// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneMediaTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTrack() {}
// Cross Module References
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References
	void UMovieSceneMediaTrack::StaticRegisterNativesUMovieSceneMediaTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMediaTrack);
	UClass* Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister()
	{
		return UMovieSceneMediaTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMediaTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMediaTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track for media playback.\n */" },
		{ "IncludePath", "MovieSceneMediaTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene track for media playback." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_Inner = { "MediaSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_MetaData[] = {
		{ "Comment", "/** List of all media sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaTrack.h" },
		{ "ToolTip", "List of all media sections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections = { "MediaSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMediaTrack, MediaSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_MediaSections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMediaTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMediaTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams = {
		&UMovieSceneMediaTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMediaTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton;
	}
	template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaTrack>()
	{
		return UMovieSceneMediaTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaTrack);
	UMovieSceneMediaTrack::~UMovieSceneMediaTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMediaTrack, UMovieSceneMediaTrack::StaticClass, TEXT("UMovieSceneMediaTrack"), &Z_Registration_Info_UClass_UMovieSceneMediaTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMediaTrack), 4021914477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_638097211(TEXT("/Script/MediaCompositing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
