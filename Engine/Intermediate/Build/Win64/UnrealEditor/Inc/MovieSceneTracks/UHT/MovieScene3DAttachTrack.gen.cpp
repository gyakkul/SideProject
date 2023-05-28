// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieScene3DAttachTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DAttachTrack::StaticRegisterNativesUMovieScene3DAttachTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DAttachTrack);
	UClass* Z_Construct_UClass_UMovieScene3DAttachTrack_NoRegister()
	{
		return UMovieScene3DAttachTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DAttachTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of path tracks in a movie scene.\n */" },
		{ "IncludePath", "Tracks/MovieScene3DAttachTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DAttachTrack.h" },
		{ "ToolTip", "Handles manipulation of path tracks in a movie scene." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DAttachTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::ClassParams = {
		&UMovieScene3DAttachTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DAttachTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton, Z_Construct_UClass_UMovieScene3DAttachTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DAttachTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DAttachTrack>()
	{
		return UMovieScene3DAttachTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachTrack);
	UMovieScene3DAttachTrack::~UMovieScene3DAttachTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DAttachTrack, UMovieScene3DAttachTrack::StaticClass, TEXT("UMovieScene3DAttachTrack"), &Z_Registration_Info_UClass_UMovieScene3DAttachTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DAttachTrack), 2366797005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_3871715972(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DAttachTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
