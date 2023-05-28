// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackRecorders/MovieSceneTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackRecorder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeTrackRecorders();
// End Cross Module References
	void UMovieSceneTrackRecorder::StaticRegisterNativesUMovieSceneTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister()
	{
		return UMovieSceneTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TrackRecorders/MovieSceneTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneTrackRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::ClassParams = {
		&UMovieSceneTrackRecorder::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrackRecorder.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieSceneTrackRecorder>()
	{
		return UMovieSceneTrackRecorder::StaticClass();
	}
	UMovieSceneTrackRecorder::UMovieSceneTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackRecorder);
	UMovieSceneTrackRecorder::~UMovieSceneTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackRecorder, UMovieSceneTrackRecorder::StaticClass, TEXT("UMovieSceneTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackRecorder), 1784431263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_2777131227(TEXT("/Script/TakeTrackRecorders"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
