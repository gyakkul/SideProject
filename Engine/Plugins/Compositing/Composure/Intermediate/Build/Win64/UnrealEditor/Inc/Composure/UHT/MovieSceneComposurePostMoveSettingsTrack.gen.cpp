// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/MovieSceneComposurePostMoveSettingsTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComposurePostMoveSettingsTrack() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UMovieSceneComposurePostMoveSettingsTrack::StaticRegisterNativesUMovieSceneComposurePostMoveSettingsTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComposurePostMoveSettingsTrack);
	UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_NoRegister()
	{
		return UMovieSceneComposurePostMoveSettingsTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A track for animating FComposurePostMoveSettings properties.\n*/" },
		{ "IncludePath", "MovieScene/MovieSceneComposurePostMoveSettingsTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposurePostMoveSettingsTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track for animating FComposurePostMoveSettings properties." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComposurePostMoveSettingsTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComposurePostMoveSettingsTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::ClassParams = {
		&UMovieSceneComposurePostMoveSettingsTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsTrack.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMovieSceneComposurePostMoveSettingsTrack>()
	{
		return UMovieSceneComposurePostMoveSettingsTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComposurePostMoveSettingsTrack);
	UMovieSceneComposurePostMoveSettingsTrack::~UMovieSceneComposurePostMoveSettingsTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsTrack, UMovieSceneComposurePostMoveSettingsTrack::StaticClass, TEXT("UMovieSceneComposurePostMoveSettingsTrack"), &Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComposurePostMoveSettingsTrack), 2274309993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsTrack_h_4173529318(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
