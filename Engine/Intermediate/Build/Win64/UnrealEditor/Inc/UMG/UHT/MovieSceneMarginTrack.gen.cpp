// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieSceneMarginTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginTrack();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneMarginTrack::StaticRegisterNativesUMovieSceneMarginTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMarginTrack);
	UClass* Z_Construct_UClass_UMovieSceneMarginTrack_NoRegister()
	{
		return UMovieSceneMarginTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMarginTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMarginTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of FMargins in a movie scene\n */" },
		{ "IncludePath", "Animation/MovieSceneMarginTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of FMargins in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMarginTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginTrack_Statics::ClassParams = {
		&UMovieSceneMarginTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMarginTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMarginTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMarginTrack.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieSceneMarginTrack>()
	{
		return UMovieSceneMarginTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginTrack);
	UMovieSceneMarginTrack::~UMovieSceneMarginTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMarginTrack, UMovieSceneMarginTrack::StaticClass, TEXT("UMovieSceneMarginTrack"), &Z_Registration_Info_UClass_UMovieSceneMarginTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMarginTrack), 929789385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_2873975583(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
