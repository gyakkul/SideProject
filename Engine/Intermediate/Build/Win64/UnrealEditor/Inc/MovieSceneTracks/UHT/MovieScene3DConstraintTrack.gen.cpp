// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieScene3DConstraintTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DConstraintTrack::StaticRegisterNativesUMovieScene3DConstraintTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DConstraintTrack);
	UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack_NoRegister()
	{
		return UMovieScene3DConstraintTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConstraintSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for constraint tracks (tracks that are dependent upon other objects).\n */" },
		{ "IncludePath", "Tracks/MovieScene3DConstraintTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DConstraintTrack.h" },
		{ "ToolTip", "Base class for constraint tracks (tracks that are dependent upon other objects)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections_Inner = { "ConstraintSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections_MetaData[] = {
		{ "Comment", "/** List of all constraint sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DConstraintTrack.h" },
		{ "ToolTip", "List of all constraint sections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections = { "ConstraintSections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DConstraintTrack, ConstraintSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::NewProp_ConstraintSections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DConstraintTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::ClassParams = {
		&UMovieScene3DConstraintTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.OuterSingleton, Z_Construct_UClass_UMovieScene3DConstraintTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DConstraintTrack>()
	{
		return UMovieScene3DConstraintTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintTrack);
	UMovieScene3DConstraintTrack::~UMovieScene3DConstraintTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DConstraintTrack, UMovieScene3DConstraintTrack::StaticClass, TEXT("UMovieScene3DConstraintTrack"), &Z_Registration_Info_UClass_UMovieScene3DConstraintTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DConstraintTrack), 37257961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_3740947651(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DConstraintTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
