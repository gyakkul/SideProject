// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLensComponentSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLensComponentSection() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();
	CAMERACALIBRATIONCOREMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLensComponentSection();
	CAMERACALIBRATIONCOREMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLensComponentSection_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCoreMovieScene();
// End Cross Module References
	void UMovieSceneLensComponentSection::StaticRegisterNativesUMovieSceneLensComponentSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLensComponentSection);
	UClass* Z_Construct_UClass_UMovieSceneLensComponentSection_NoRegister()
	{
		return UMovieSceneLensComponentSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLensComponentSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReapplyNodalOffset_MetaData[];
#endif
		static void NewProp_bReapplyNodalOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReapplyNodalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideLensFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideLensFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLensFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedLensFile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionParameterChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionParameterChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DistortionParameterChannels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FxFyChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FxFyChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FxFyChannels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageCenterChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCenterChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageCenterChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensModelClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCoreMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Movie Scene section for Lens Component */" },
		{ "IncludePath", "MovieSceneLensComponentSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie Scene section for Lens Component" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/** If true, then every Update, the nodal offset will be re-evaluated on the lens component */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "If true, then every Update, the nodal offset will be re-evaluated on the lens component" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset_SetBit(void* Obj)
	{
		((UMovieSceneLensComponentSection*)Obj)->bReapplyNodalOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset = { "bReapplyNodalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneLensComponentSection), &Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_OverrideLensFile_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/** LensFile asset that should be used instead of the cached LensFile during playback */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "LensFile asset that should be used instead of the cached LensFile during playback" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_OverrideLensFile = { "OverrideLensFile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentSection, OverrideLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_OverrideLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_OverrideLensFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_CachedLensFile_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/** Saved duplicate of the LensFile asset used by the recorded Lens Component at the time of recording */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "Saved duplicate of the LensFile asset used by the recorded Lens Component at the time of recording" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_CachedLensFile = { "CachedLensFile", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentSection, CachedLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_CachedLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_CachedLensFile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels_Inner = { "DistortionParameterChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels_MetaData[] = {
		{ "Comment", "/** Channels to store Distortion Parameter values (will be sized during initialization based on the LensComponent's LensModel) */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "Channels to store Distortion Parameter values (will be sized during initialization based on the LensComponent's LensModel)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels = { "DistortionParameterChannels", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentSection, DistortionParameterChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels_Inner = { "FxFyChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels_MetaData[] = {
		{ "Comment", "/** Channels to store FxFy values */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "Channels to store FxFy values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels = { "FxFyChannels", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentSection, FxFyChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels_Inner = { "ImageCenterChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels_MetaData[] = {
		{ "Comment", "/** Channels to store Image Center values */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "Channels to store Image Center values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels = { "ImageCenterChannels", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentSection, ImageCenterChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_LensModelClass_MetaData[] = {
		{ "Comment", "/** The Lens Model used by the recorded LensComponent */" },
		{ "ModuleRelativePath", "Public/MovieSceneLensComponentSection.h" },
		{ "ToolTip", "The Lens Model used by the recorded LensComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_LensModelClass = { "LensModelClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLensComponentSection, LensModelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_LensModelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_LensModelClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_bReapplyNodalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_OverrideLensFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_CachedLensFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_DistortionParameterChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_FxFyChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_ImageCenterChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::NewProp_LensModelClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLensComponentSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::ClassParams = {
		&UMovieSceneLensComponentSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLensComponentSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLensComponentSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLensComponentSection.OuterSingleton, Z_Construct_UClass_UMovieSceneLensComponentSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLensComponentSection.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCOREMOVIESCENE_API UClass* StaticClass<UMovieSceneLensComponentSection>()
	{
		return UMovieSceneLensComponentSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLensComponentSection);
	UMovieSceneLensComponentSection::~UMovieSceneLensComponentSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLensComponentSection, UMovieSceneLensComponentSection::StaticClass, TEXT("UMovieSceneLensComponentSection"), &Z_Registration_Info_UClass_UMovieSceneLensComponentSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLensComponentSection), 1571613544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentSection_h_2517299840(TEXT("/Script/CameraCalibrationCoreMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCoreMovieScene_Public_MovieSceneLensComponentSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
