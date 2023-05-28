// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLiveLinkTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkTrackRecorder() {}
// Cross Module References
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_LiveLinkSequencer();
// End Cross Module References
	void UMovieSceneLiveLinkTrackRecorder::StaticRegisterNativesUMovieSceneLiveLinkTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister()
	{
		return UMovieSceneLiveLinkTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneLiveLinkTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/MovieSceneLiveLinkTrackRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::ClassParams = {
		&UMovieSceneLiveLinkTrackRecorder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkTrackRecorder.OuterSingleton;
	}
	template<> LIVELINKSEQUENCER_API UClass* StaticClass<UMovieSceneLiveLinkTrackRecorder>()
	{
		return UMovieSceneLiveLinkTrackRecorder::StaticClass();
	}
	UMovieSceneLiveLinkTrackRecorder::UMovieSceneLiveLinkTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkTrackRecorder);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder, UMovieSceneLiveLinkTrackRecorder::StaticClass, TEXT("UMovieSceneLiveLinkTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkTrackRecorder), 1290303745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_153847133(TEXT("/Script/LiveLinkSequencer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
