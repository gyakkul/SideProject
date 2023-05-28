// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneByteTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneByteTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneByteTrack::StaticRegisterNativesUMovieSceneByteTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneByteTrack);
	UClass* Z_Construct_UClass_UMovieSceneByteTrack_NoRegister()
	{
		return UMovieSceneByteTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneByteTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneByteTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneByteTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of byte properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneByteTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneByteTrack.h" },
		{ "ToolTip", "Handles manipulation of byte properties in a movie scene" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneByteTrack_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneByteTrack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneByteTrack_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneByteTrack, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneByteTrack_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteTrack_Statics::NewProp_Enum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneByteTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneByteTrack_Statics::NewProp_Enum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneByteTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneByteTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneByteTrack_Statics::ClassParams = {
		&UMovieSceneByteTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneByteTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneByteTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneByteTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneByteTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneByteTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneByteTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneByteTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneByteTrack>()
	{
		return UMovieSceneByteTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneByteTrack);
	UMovieSceneByteTrack::~UMovieSceneByteTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneByteTrack, UMovieSceneByteTrack::StaticClass, TEXT("UMovieSceneByteTrack"), &Z_Registration_Info_UClass_UMovieSceneByteTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneByteTrack), 3675777311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_1227818411(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneByteTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
