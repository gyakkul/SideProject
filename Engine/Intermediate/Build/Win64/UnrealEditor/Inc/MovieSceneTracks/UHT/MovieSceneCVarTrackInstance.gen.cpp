// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TrackInstances/MovieSceneCVarTrackInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCVarTrackInstance() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCVarTrackInstance();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCVarTrackInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCVarTrackInstance::StaticRegisterNativesUMovieSceneCVarTrackInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCVarTrackInstance);
	UClass* Z_Construct_UClass_UMovieSceneCVarTrackInstance_NoRegister()
	{
		return UMovieSceneCVarTrackInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrackInstances/MovieSceneCVarTrackInstance.h" },
		{ "ModuleRelativePath", "Private/TrackInstances/MovieSceneCVarTrackInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCVarTrackInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::ClassParams = {
		&UMovieSceneCVarTrackInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCVarTrackInstance()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.OuterSingleton, Z_Construct_UClass_UMovieSceneCVarTrackInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCVarTrackInstance>()
	{
		return UMovieSceneCVarTrackInstance::StaticClass();
	}
	UMovieSceneCVarTrackInstance::UMovieSceneCVarTrackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCVarTrackInstance);
	UMovieSceneCVarTrackInstance::~UMovieSceneCVarTrackInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCVarTrackInstance, UMovieSceneCVarTrackInstance::StaticClass, TEXT("UMovieSceneCVarTrackInstance"), &Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCVarTrackInstance), 3256323194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h_927288924(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCVarTrackInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
