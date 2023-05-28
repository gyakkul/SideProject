// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneCameraShakeSourceTriggerTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCameraShakeSourceTriggerTrack::StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeSourceTriggerTrack);
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_NoRegister()
	{
		return UMovieSceneCameraShakeSourceTriggerTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics
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
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneCameraShakeSourceTriggerTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraShakeSourceTriggerTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** All the sections in this track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCameraShakeSourceTriggerTrack.h" },
		{ "ToolTip", "All the sections in this track" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSourceTriggerTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::NewProp_Sections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCameraShakeSourceTriggerTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeSourceTriggerTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::ClassParams = {
		&UMovieSceneCameraShakeSourceTriggerTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeSourceTriggerTrack>()
	{
		return UMovieSceneCameraShakeSourceTriggerTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSourceTriggerTrack);
	UMovieSceneCameraShakeSourceTriggerTrack::~UMovieSceneCameraShakeSourceTriggerTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerTrack, UMovieSceneCameraShakeSourceTriggerTrack::StaticClass, TEXT("UMovieSceneCameraShakeSourceTriggerTrack"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeSourceTriggerTrack), 1339574527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h_906629819(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCameraShakeSourceTriggerTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
