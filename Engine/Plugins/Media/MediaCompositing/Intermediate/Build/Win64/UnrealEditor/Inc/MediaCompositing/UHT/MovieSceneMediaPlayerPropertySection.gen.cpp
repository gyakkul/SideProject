// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneMediaPlayerPropertySection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertySection() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References
	void UMovieSceneMediaPlayerPropertySection::StaticRegisterNativesUMovieSceneMediaPlayerPropertySection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMediaPlayerPropertySection);
	UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_NoRegister()
	{
		return UMovieSceneMediaPlayerPropertySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene section for media playback on a UMediaPlayer.\n */" },
		{ "IncludePath", "MovieSceneMediaPlayerPropertySection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertySection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene section for media playback on a UMediaPlayer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The source to play with this video track. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertySection.h" },
		{ "ToolTip", "The source to play with this video track." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMediaPlayerPropertySection, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Whether to loop this video. */" },
		{ "ModuleRelativePath", "Public/MovieSceneMediaPlayerPropertySection.h" },
		{ "ToolTip", "Whether to loop this video." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UMovieSceneMediaPlayerPropertySection*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneMediaPlayerPropertySection), &Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMediaPlayerPropertySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::ClassParams = {
		&UMovieSceneMediaPlayerPropertySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.OuterSingleton, Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.OuterSingleton;
	}
	template<> MEDIACOMPOSITING_API UClass* StaticClass<UMovieSceneMediaPlayerPropertySection>()
	{
		return UMovieSceneMediaPlayerPropertySection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMediaPlayerPropertySection);
	UMovieSceneMediaPlayerPropertySection::~UMovieSceneMediaPlayerPropertySection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection, UMovieSceneMediaPlayerPropertySection::StaticClass, TEXT("UMovieSceneMediaPlayerPropertySection"), &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMediaPlayerPropertySection), 2060619586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h_1903323642(TEXT("/Script/MediaCompositing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
