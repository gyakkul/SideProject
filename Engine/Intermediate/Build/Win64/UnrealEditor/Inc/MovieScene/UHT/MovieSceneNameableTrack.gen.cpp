// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneNameableTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNameableTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneNameableTrack::StaticRegisterNativesUMovieSceneNameableTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNameableTrack);
	UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister()
	{
		return UMovieSceneNameableTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNameableTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_TrackRowDisplayNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackRowDisplayNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackRowDisplayNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNameableTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for movie scene tracks that can be renamed by the user.\n */" },
		{ "IncludePath", "MovieSceneNameableTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "Base class for movie scene tracks that can be renamed by the user." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Track" },
		{ "Comment", "/** The track's human readable display name. */" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "The track's human readable display name." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNameableTrack, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_Inner = { "TrackRowDisplayNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_MetaData[] = {
		{ "Category", "Track" },
		{ "Comment", "/** The track display name per row. */" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "The track display name per row." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames = { "TrackRowDisplayNames", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNameableTrack, TrackRowDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_TrackRowDisplayNames,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNameableTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNameableTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams = {
		&UMovieSceneNameableTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers), 0),
		0,
		0x00A800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNameableTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNameableTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNameableTrack>()
	{
		return UMovieSceneNameableTrack::StaticClass();
	}
	UMovieSceneNameableTrack::UMovieSceneNameableTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNameableTrack);
	UMovieSceneNameableTrack::~UMovieSceneNameableTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNameableTrack, UMovieSceneNameableTrack::StaticClass, TEXT("UMovieSceneNameableTrack"), &Z_Registration_Info_UClass_UMovieSceneNameableTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNameableTrack), 2236354940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_2253577897(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneNameableTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
