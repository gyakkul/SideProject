// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneSubTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSubTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneSubTrack::StaticRegisterNativesUMovieSceneSubTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSubTrack);
	UClass* Z_Construct_UClass_UMovieSceneSubTrack_NoRegister()
	{
		return UMovieSceneSubTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSubTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSubTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A track that holds sub-sequences within a larger sequence.\n */" },
		{ "IncludePath", "Tracks/MovieSceneSubTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSubTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track that holds sub-sequences within a larger sequence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** All movie scene sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSubTrack.h" },
		{ "ToolTip", "All movie scene sections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSubTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSubTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSubTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSubTrack_Statics::ClassParams = {
		&UMovieSceneSubTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSubTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSubTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSubTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSubTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneSubTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSubTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSubTrack>()
	{
		return UMovieSceneSubTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSubTrack);
	UMovieSceneSubTrack::~UMovieSceneSubTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSubTrack, UMovieSceneSubTrack::StaticClass, TEXT("UMovieSceneSubTrack"), &Z_Registration_Info_UClass_UMovieSceneSubTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSubTrack), 1754294414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_2071501190(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSubTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
