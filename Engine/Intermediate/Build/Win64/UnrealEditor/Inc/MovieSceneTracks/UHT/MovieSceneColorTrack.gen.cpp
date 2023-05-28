// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneColorTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneColorTrack::StaticRegisterNativesUMovieSceneColorTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneColorTrack);
	UClass* Z_Construct_UClass_UMovieSceneColorTrack_NoRegister()
	{
		return UMovieSceneColorTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneColorTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlateColor_MetaData[];
#endif
		static void NewProp_bIsSlateColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlateColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneColorTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneColorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneColorTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit(void* Obj)
	{
		((UMovieSceneColorTrack*)Obj)->bIsSlateColor_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor = { "bIsSlateColor", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneColorTrack), &Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorTrack_Statics::NewProp_bIsSlateColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneColorTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneColorTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams = {
		&UMovieSceneColorTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneColorTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneColorTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneColorTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneColorTrack>()
	{
		return UMovieSceneColorTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorTrack);
	UMovieSceneColorTrack::~UMovieSceneColorTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneColorTrack, UMovieSceneColorTrack::StaticClass, TEXT("UMovieSceneColorTrack"), &Z_Registration_Info_UClass_UMovieSceneColorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneColorTrack), 49956978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_1032612803(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneColorTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
