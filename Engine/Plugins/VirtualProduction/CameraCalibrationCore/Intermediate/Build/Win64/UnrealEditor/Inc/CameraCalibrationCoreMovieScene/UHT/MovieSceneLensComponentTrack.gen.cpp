// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLensComponentTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLensComponentTrack() {}
// Cross Module References
	CAMERACALIBRATIONCOREMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLensComponentTrack();
	CAMERACALIBRATIONCOREMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLensComponentTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCoreMovieScene();
// End Cross Module References
	void UMovieSceneLensComponentTrack::StaticRegisterNativesUMovieSceneLensComponentTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLensComponentTrack);
	UClass* Z_Construct_UClass_UMovieSceneLensComponentTrack_NoRegister()
	{
		return UMovieSceneLensComponentTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCoreMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Movie Scene track for Lens Component */" },
		{ "IncludePath", "MovieSceneLensComponentTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentTrack.h" },
		{ "ToolTip", "Movie Scene track for Lens Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** Array of movie scene sections managed by this track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentTrack.h" },
		{ "ToolTip", "Array of movie scene sections managed by this track" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLensComponentTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::ClassParams = {
		&UMovieSceneLensComponentTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLensComponentTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLensComponentTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLensComponentTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneLensComponentTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLensComponentTrack.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCOREMOVIESCENE_API UClass* StaticClass<UMovieSceneLensComponentTrack>()
	{
		return UMovieSceneLensComponentTrack::StaticClass();
	}
	UMovieSceneLensComponentTrack::UMovieSceneLensComponentTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLensComponentTrack);
	UMovieSceneLensComponentTrack::~UMovieSceneLensComponentTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLensComponentTrack, UMovieSceneLensComponentTrack::StaticClass, TEXT("UMovieSceneLensComponentTrack"), &Z_Registration_Info_UClass_UMovieSceneLensComponentTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLensComponentTrack), 678167477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentTrack_h_1476113707(TEXT("/Script/CameraCalibrationCoreMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
