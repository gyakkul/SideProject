// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackRecorders/MovieScene3DAttachTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTrackRecorder() {}
// Cross Module References
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrackRecorder();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_TakeTrackRecorders();
// End Cross Module References
	void UMovieScene3DAttachTrackRecorder::StaticRegisterNativesUMovieScene3DAttachTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DAttachTrackRecorder);
	UClass* Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_NoRegister()
	{
		return UMovieScene3DAttachTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TrackRecorders/MovieScene3DAttachTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieScene3DAttachTrackRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DAttachTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::ClassParams = {
		&UMovieScene3DAttachTrackRecorder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DAttachTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DAttachTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DAttachTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieScene3DAttachTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DAttachTrackRecorder.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieScene3DAttachTrackRecorder>()
	{
		return UMovieScene3DAttachTrackRecorder::StaticClass();
	}
	UMovieScene3DAttachTrackRecorder::UMovieScene3DAttachTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachTrackRecorder);
	UMovieScene3DAttachTrackRecorder::~UMovieScene3DAttachTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DAttachTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DAttachTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DAttachTrackRecorder, UMovieScene3DAttachTrackRecorder::StaticClass, TEXT("UMovieScene3DAttachTrackRecorder"), &Z_Registration_Info_UClass_UMovieScene3DAttachTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DAttachTrackRecorder), 612353763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DAttachTrackRecorder_h_1960428746(TEXT("/Script/TakeTrackRecorders"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DAttachTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DAttachTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
