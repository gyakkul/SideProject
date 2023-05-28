// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneVectorTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneFloatVectorTrack::StaticRegisterNativesUMovieSceneFloatVectorTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatVectorTrack);
	UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister()
	{
		return UMovieSceneFloatVectorTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of float vectors in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneVectorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "Handles manipulation of float vectors in a movie scene" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed_MetaData[] = {
		{ "Comment", "/** The number of channels used by the vector (2,3, or 4) */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "The number of channels used by the vector (2,3, or 4)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed = { "NumChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFloatVectorTrack, NumChannelsUsed), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::NewProp_NumChannelsUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatVectorTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::ClassParams = {
		&UMovieSceneFloatVectorTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatVectorTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatVectorTrack>()
	{
		return UMovieSceneFloatVectorTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatVectorTrack);
	UMovieSceneFloatVectorTrack::~UMovieSceneFloatVectorTrack() {}
	void UMovieSceneDoubleVectorTrack::StaticRegisterNativesUMovieSceneDoubleVectorTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleVectorTrack);
	UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister()
	{
		return UMovieSceneDoubleVectorTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of double vectors in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneVectorTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "Handles manipulation of double vectors in a movie scene" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed_MetaData[] = {
		{ "Comment", "/** The number of channels used by the vector (2,3, or 4) */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneVectorTrack.h" },
		{ "ToolTip", "The number of channels used by the vector (2,3, or 4)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed = { "NumChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDoubleVectorTrack, NumChannelsUsed), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::NewProp_NumChannelsUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleVectorTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::ClassParams = {
		&UMovieSceneDoubleVectorTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleVectorTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleVectorTrack>()
	{
		return UMovieSceneDoubleVectorTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleVectorTrack);
	UMovieSceneDoubleVectorTrack::~UMovieSceneDoubleVectorTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatVectorTrack, UMovieSceneFloatVectorTrack::StaticClass, TEXT("UMovieSceneFloatVectorTrack"), &Z_Registration_Info_UClass_UMovieSceneFloatVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatVectorTrack), 1452961508U) },
		{ Z_Construct_UClass_UMovieSceneDoubleVectorTrack, UMovieSceneDoubleVectorTrack::StaticClass, TEXT("UMovieSceneDoubleVectorTrack"), &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleVectorTrack), 4351169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_3617768479(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneVectorTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
