// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLiveLinkCameraControllerSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkCameraControllerSection() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	LIVELINKCAMERARECORDING_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection();
	LIVELINKCAMERARECORDING_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
	UPackage* Z_Construct_UPackage__Script_LiveLinkCameraRecording();
// End Cross Module References
	void UMovieSceneLiveLinkCameraControllerSection::StaticRegisterNativesUMovieSceneLiveLinkCameraControllerSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkCameraControllerSection);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_NoRegister()
	{
		return UMovieSceneLiveLinkCameraControllerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNodalOffsetFromCachedLensFile_MetaData[];
#endif
		static void NewProp_bApplyNodalOffsetFromCachedLensFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNodalOffsetFromCachedLensFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLensFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedLensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkCameraRecording,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Movie Scene section for LiveLink Camera Controller properties */" },
		{ "IncludePath", "MovieSceneLiveLinkCameraControllerSection.h" },
		{ "ModuleRelativePath", "Private/MovieSceneLiveLinkCameraControllerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie Scene section for LiveLink Camera Controller properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/** If true, the Cached Lens File will be evaluated for nodal offset, and that offset will be applied to the transform of the CameraComponent */" },
		{ "ModuleRelativePath", "Private/MovieSceneLiveLinkCameraControllerSection.h" },
		{ "ToolTip", "If true, the Cached Lens File will be evaluated for nodal offset, and that offset will be applied to the transform of the CameraComponent" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile_SetBit(void* Obj)
	{
		((UMovieSceneLiveLinkCameraControllerSection*)Obj)->bApplyNodalOffsetFromCachedLensFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile = { "bApplyNodalOffsetFromCachedLensFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneLiveLinkCameraControllerSection), &Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_CachedLensFile_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/** Saved duplicate of the LensFile asset used by the recorded LiveLink Camera Controller at the time of recording */" },
		{ "ModuleRelativePath", "Private/MovieSceneLiveLinkCameraControllerSection.h" },
		{ "ToolTip", "Saved duplicate of the LensFile asset used by the recorded LiveLink Camera Controller at the time of recording" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_CachedLensFile = { "CachedLensFile", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkCameraControllerSection, CachedLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_CachedLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_CachedLensFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_bApplyNodalOffsetFromCachedLensFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::NewProp_CachedLensFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkCameraControllerSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::ClassParams = {
		&UMovieSceneLiveLinkCameraControllerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerSection.OuterSingleton;
	}
	template<> LIVELINKCAMERARECORDING_API UClass* StaticClass<UMovieSceneLiveLinkCameraControllerSection>()
	{
		return UMovieSceneLiveLinkCameraControllerSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkCameraControllerSection);
	UMovieSceneLiveLinkCameraControllerSection::~UMovieSceneLiveLinkCameraControllerSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerSection, UMovieSceneLiveLinkCameraControllerSection::StaticClass, TEXT("UMovieSceneLiveLinkCameraControllerSection"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkCameraControllerSection), 3253776849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerSection_h_2479295042(TEXT("/Script/LiveLinkCameraRecording"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
