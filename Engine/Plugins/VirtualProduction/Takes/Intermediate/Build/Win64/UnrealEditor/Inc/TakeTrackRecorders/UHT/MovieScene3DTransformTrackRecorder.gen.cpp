// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackRecorders/MovieScene3DTransformTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformTrackRecorder() {}
// Cross Module References
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieScene3DTransformTrackRecorder();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_TakeTrackRecorders();
// End Cross Module References
	void UMovieScene3DTransformTrackRecorder::StaticRegisterNativesUMovieScene3DTransformTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformTrackRecorder);
	UClass* Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_NoRegister()
	{
		return UMovieScene3DTransformTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TrackRecorders/MovieScene3DTransformTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieScene3DTransformTrackRecorder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::ClassParams = {
		&UMovieScene3DTransformTrackRecorder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DTransformTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DTransformTrackRecorder.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieScene3DTransformTrackRecorder>()
	{
		return UMovieScene3DTransformTrackRecorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformTrackRecorder);
	UMovieScene3DTransformTrackRecorder::~UMovieScene3DTransformTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DTransformTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DTransformTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DTransformTrackRecorder, UMovieScene3DTransformTrackRecorder::StaticClass, TEXT("UMovieScene3DTransformTrackRecorder"), &Z_Registration_Info_UClass_UMovieScene3DTransformTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformTrackRecorder), 468151439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DTransformTrackRecorder_h_3860164116(TEXT("/Script/TakeTrackRecorders"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DTransformTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieScene3DTransformTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
