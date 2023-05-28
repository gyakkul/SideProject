// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneLiveLinkControllerMapTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkControllerMapTrackRecorder() {}
// Cross Module References
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_NoRegister();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_LiveLinkSequencer();
// End Cross Module References
	void UMovieSceneLiveLinkControllerMapTrackRecorder::StaticRegisterNativesUMovieSceneLiveLinkControllerMapTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkControllerMapTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_NoRegister()
	{
		return UMovieSceneLiveLinkControllerMapTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControllerRecorders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRecorders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerRecorders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Movie Scene track recorder for LiveLink Component's Controller Map */" },
		{ "IncludePath", "MovieSceneLiveLinkControllerMapTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/MovieSceneLiveLinkControllerMapTrackRecorder.h" },
		{ "ToolTip", "Movie Scene track recorder for LiveLink Component's Controller Map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders_Inner = { "ControllerRecorders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders_MetaData[] = {
		{ "Comment", "/** Array of track recorders that will record each of the LiveLink controller's in the Controller Map */" },
		{ "ModuleRelativePath", "Public/MovieSceneLiveLinkControllerMapTrackRecorder.h" },
		{ "ToolTip", "Array of track recorders that will record each of the LiveLink controller's in the Controller Map" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders = { "ControllerRecorders", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkControllerMapTrackRecorder, ControllerRecorders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::NewProp_ControllerRecorders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkControllerMapTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::ClassParams = {
		&UMovieSceneLiveLinkControllerMapTrackRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder.OuterSingleton;
	}
	template<> LIVELINKSEQUENCER_API UClass* StaticClass<UMovieSceneLiveLinkControllerMapTrackRecorder>()
	{
		return UMovieSceneLiveLinkControllerMapTrackRecorder::StaticClass();
	}
	UMovieSceneLiveLinkControllerMapTrackRecorder::UMovieSceneLiveLinkControllerMapTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkControllerMapTrackRecorder);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerMapTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerMapTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder, UMovieSceneLiveLinkControllerMapTrackRecorder::StaticClass, TEXT("UMovieSceneLiveLinkControllerMapTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkControllerMapTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkControllerMapTrackRecorder), 1187064304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerMapTrackRecorder_h_3828233552(TEXT("/Script/LiveLinkSequencer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerMapTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_MovieSceneLiveLinkControllerMapTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
