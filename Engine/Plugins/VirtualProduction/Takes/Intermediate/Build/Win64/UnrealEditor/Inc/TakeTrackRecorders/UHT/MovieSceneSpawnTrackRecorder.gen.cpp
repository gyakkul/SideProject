// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackRecorders/MovieSceneSpawnTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnTrackRecorder() {}
// Cross Module References
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrackRecorder();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_TakeTrackRecorders();
// End Cross Module References
	void UMovieSceneSpawnTrackRecorder::StaticRegisterNativesUMovieSceneSpawnTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_NoRegister()
	{
		return UMovieSceneSpawnTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TrackRecorders/MovieSceneSpawnTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneSpawnTrackRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::ClassParams = {
		&UMovieSceneSpawnTrackRecorder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSpawnTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSpawnTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSpawnTrackRecorder.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieSceneSpawnTrackRecorder>()
	{
		return UMovieSceneSpawnTrackRecorder::StaticClass();
	}
	UMovieSceneSpawnTrackRecorder::UMovieSceneSpawnTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnTrackRecorder);
	UMovieSceneSpawnTrackRecorder::~UMovieSceneSpawnTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneSpawnTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneSpawnTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnTrackRecorder, UMovieSceneSpawnTrackRecorder::StaticClass, TEXT("UMovieSceneSpawnTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneSpawnTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnTrackRecorder), 4120804221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneSpawnTrackRecorder_h_2327434150(TEXT("/Script/TakeTrackRecorders"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneSpawnTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneSpawnTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
