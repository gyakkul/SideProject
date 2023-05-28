// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLensComponentTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLensComponentTrackRecorder() {}
// Cross Module References
	CAMERACALIBRATIONCORESEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder();
	CAMERACALIBRATIONCORESEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCoreSequencer();
// End Cross Module References
	void UMovieSceneLensComponentTrackRecorder::StaticRegisterNativesUMovieSceneLensComponentTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLensComponentTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_NoRegister()
	{
		return UMovieSceneLensComponentTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCoreSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** MovieScene Track Recorder for a Lens Component */" },
		{ "IncludePath", "MovieSceneLensComponentTrackRecorder.h" },
		{ "ModuleRelativePath", "Private/MovieSceneLensComponentTrackRecorder.h" },
		{ "ToolTip", "MovieScene Track Recorder for a Lens Component" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLensComponentTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::ClassParams = {
		&UMovieSceneLensComponentTrackRecorder::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLensComponentTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLensComponentTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLensComponentTrackRecorder.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORESEQUENCER_API UClass* StaticClass<UMovieSceneLensComponentTrackRecorder>()
	{
		return UMovieSceneLensComponentTrackRecorder::StaticClass();
	}
	UMovieSceneLensComponentTrackRecorder::UMovieSceneLensComponentTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLensComponentTrackRecorder);
	UMovieSceneLensComponentTrackRecorder::~UMovieSceneLensComponentTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreSequencer_Private_MovieSceneLensComponentTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreSequencer_Private_MovieSceneLensComponentTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLensComponentTrackRecorder, UMovieSceneLensComponentTrackRecorder::StaticClass, TEXT("UMovieSceneLensComponentTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneLensComponentTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLensComponentTrackRecorder), 2305539867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreSequencer_Private_MovieSceneLensComponentTrackRecorder_h_3707917884(TEXT("/Script/CameraCalibrationCoreSequencer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreSequencer_Private_MovieSceneLensComponentTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreSequencer_Private_MovieSceneLensComponentTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
