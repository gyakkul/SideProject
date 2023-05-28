// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TrackInstances/MovieSceneCameraCutTrackInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTrackInstance() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCameraCutTrackInstance::StaticRegisterNativesUMovieSceneCameraCutTrackInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraCutTrackInstance);
	UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister()
	{
		return UMovieSceneCameraCutTrackInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrackInstances/MovieSceneCameraCutTrackInstance.h" },
		{ "ModuleRelativePath", "Private/TrackInstances/MovieSceneCameraCutTrackInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutTrackInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams = {
		&UMovieSceneCameraCutTrackInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraCutTrackInstance()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutTrackInstance>()
	{
		return UMovieSceneCameraCutTrackInstance::StaticClass();
	}
	UMovieSceneCameraCutTrackInstance::UMovieSceneCameraCutTrackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutTrackInstance);
	UMovieSceneCameraCutTrackInstance::~UMovieSceneCameraCutTrackInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraCutTrackInstance, UMovieSceneCameraCutTrackInstance::StaticClass, TEXT("UMovieSceneCameraCutTrackInstance"), &Z_Registration_Info_UClass_UMovieSceneCameraCutTrackInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraCutTrackInstance), 3644107573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCameraCutTrackInstance_h_4035053240(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_TrackInstances_MovieSceneCameraCutTrackInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
