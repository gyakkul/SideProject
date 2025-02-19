// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLiveLinkCameraControllerTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkCameraControllerTrack() {}
// Cross Module References
	LIVELINKCAMERARECORDING_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack();
	LIVELINKCAMERARECORDING_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkCameraRecording();
// End Cross Module References
	void UMovieSceneLiveLinkCameraControllerTrack::StaticRegisterNativesUMovieSceneLiveLinkCameraControllerTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkCameraControllerTrack);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_NoRegister()
	{
		return UMovieSceneLiveLinkCameraControllerTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkCameraRecording,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Movie Scene track for LiveLink Camera Controller properties */" },
		{ "IncludePath", "MovieSceneLiveLinkCameraControllerTrack.h" },
		{ "ModuleRelativePath", "Private/MovieSceneLiveLinkCameraControllerTrack.h" },
		{ "ToolTip", "Movie Scene track for LiveLink Camera Controller properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** Array of movie scene sections managed by this track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneLiveLinkCameraControllerTrack.h" },
		{ "ToolTip", "Array of movie scene sections managed by this track" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkCameraControllerTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkCameraControllerTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::ClassParams = {
		&UMovieSceneLiveLinkCameraControllerTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerTrack.OuterSingleton;
	}
	template<> LIVELINKCAMERARECORDING_API UClass* StaticClass<UMovieSceneLiveLinkCameraControllerTrack>()
	{
		return UMovieSceneLiveLinkCameraControllerTrack::StaticClass();
	}
	UMovieSceneLiveLinkCameraControllerTrack::UMovieSceneLiveLinkCameraControllerTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkCameraControllerTrack);
	UMovieSceneLiveLinkCameraControllerTrack::~UMovieSceneLiveLinkCameraControllerTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkCameraControllerTrack, UMovieSceneLiveLinkCameraControllerTrack::StaticClass, TEXT("UMovieSceneLiveLinkCameraControllerTrack"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkCameraControllerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkCameraControllerTrack), 3473465045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerTrack_h_1999189768(TEXT("/Script/LiveLinkCameraRecording"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCameraRecording_Private_MovieSceneLiveLinkCameraControllerTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
