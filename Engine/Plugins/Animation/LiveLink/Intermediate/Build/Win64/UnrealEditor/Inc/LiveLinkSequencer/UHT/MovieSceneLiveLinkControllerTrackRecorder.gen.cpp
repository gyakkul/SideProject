// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLiveLinkControllerTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkControllerTrackRecorder() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_LiveLinkSequencer();
// End Cross Module References
	void UMovieSceneLiveLinkControllerTrackRecorder::StaticRegisterNativesUMovieSceneLiveLinkControllerTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkControllerTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister()
	{
		return UMovieSceneLiveLinkControllerTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkControllerToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LiveLinkControllerToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Abstract based for movie scene track recorders that can record LiveLink Controllers */" },
		{ "IncludePath", "MovieSceneLiveLinkControllerTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/MovieSceneLiveLinkControllerTrackRecorder.h" },
		{ "ToolTip", "Abstract based for movie scene track recorders that can record LiveLink Controllers" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::NewProp_LiveLinkControllerToRecord_MetaData[] = {
		{ "Comment", "/** The LiveLink controller that this track record will record properties from */" },
		{ "ModuleRelativePath", "Public/MovieSceneLiveLinkControllerTrackRecorder.h" },
		{ "ToolTip", "The LiveLink controller that this track record will record properties from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::NewProp_LiveLinkControllerToRecord = { "LiveLinkControllerToRecord", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkControllerTrackRecorder, LiveLinkControllerToRecord), Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::NewProp_LiveLinkControllerToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::NewProp_LiveLinkControllerToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::NewProp_LiveLinkControllerToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkControllerTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::ClassParams = {
		&UMovieSceneLiveLinkControllerTrackRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerTrackRecorder.OuterSingleton;
	}
	template<> LIVELINKSEQUENCER_API UClass* StaticClass<UMovieSceneLiveLinkControllerTrackRecorder>()
	{
		return UMovieSceneLiveLinkControllerTrackRecorder::StaticClass();
	}
	UMovieSceneLiveLinkControllerTrackRecorder::UMovieSceneLiveLinkControllerTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkControllerTrackRecorder);
	UMovieSceneLiveLinkControllerTrackRecorder::~UMovieSceneLiveLinkControllerTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder, UMovieSceneLiveLinkControllerTrackRecorder::StaticClass, TEXT("UMovieSceneLiveLinkControllerTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkControllerTrackRecorder), 2085516417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_2943455372(TEXT("/Script/LiveLinkSequencer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
