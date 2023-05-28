// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieScene2DTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformTrack();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieScene2DTransformTrack::StaticRegisterNativesUMovieScene2DTransformTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene2DTransformTrack);
	UClass* Z_Construct_UClass_UMovieScene2DTransformTrack_NoRegister()
	{
		return UMovieScene2DTransformTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene2DTransformTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of 2D transforms in a movie scene\n */" },
		{ "IncludePath", "Animation/MovieScene2DTransformTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of 2D transforms in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::ClassParams = {
		&UMovieScene2DTransformTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene2DTransformTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieScene2DTransformTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene2DTransformTrack.OuterSingleton, Z_Construct_UClass_UMovieScene2DTransformTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene2DTransformTrack.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieScene2DTransformTrack>()
	{
		return UMovieScene2DTransformTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformTrack);
	UMovieScene2DTransformTrack::~UMovieScene2DTransformTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene2DTransformTrack, UMovieScene2DTransformTrack::StaticClass, TEXT("UMovieScene2DTransformTrack"), &Z_Registration_Info_UClass_UMovieScene2DTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene2DTransformTrack), 915372125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h_55466128(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
