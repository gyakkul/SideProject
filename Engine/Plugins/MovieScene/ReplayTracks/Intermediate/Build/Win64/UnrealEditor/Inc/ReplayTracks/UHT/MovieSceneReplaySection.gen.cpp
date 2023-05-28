// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneReplaySection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneReplaySection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	REPLAYTRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaySection();
	REPLAYTRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaySection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplayTracks();
// End Cross Module References
	void UMovieSceneReplaySection::StaticRegisterNativesUMovieSceneReplaySection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneReplaySection);
	UClass* Z_Construct_UClass_UMovieSceneReplaySection_NoRegister()
	{
		return UMovieSceneReplaySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneReplaySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneReplaySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplayTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneReplaySection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneReplaySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneReplaySection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneReplaySection_Statics::NewProp_ReplayName_MetaData[] = {
		{ "Category", "Replay" },
		{ "Comment", "/** The name of the replay to run */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneReplaySection.h" },
		{ "ToolTip", "The name of the replay to run" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneReplaySection_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneReplaySection, ReplayName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneReplaySection_Statics::NewProp_ReplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaySection_Statics::NewProp_ReplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneReplaySection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaySection_Statics::NewProp_ReplayName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneReplaySection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneReplaySection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneReplaySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneReplaySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneReplaySection_Statics::ClassParams = {
		&UMovieSceneReplaySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneReplaySection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaySection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneReplaySection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneReplaySection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneReplaySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneReplaySection.OuterSingleton, Z_Construct_UClass_UMovieSceneReplaySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneReplaySection.OuterSingleton;
	}
	template<> REPLAYTRACKS_API UClass* StaticClass<UMovieSceneReplaySection>()
	{
		return UMovieSceneReplaySection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneReplaySection);
	UMovieSceneReplaySection::~UMovieSceneReplaySection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneReplaySection, UMovieSceneReplaySection::StaticClass, TEXT("UMovieSceneReplaySection"), &Z_Registration_Info_UClass_UMovieSceneReplaySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneReplaySection), 3367015115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_3879191517(TEXT("/Script/ReplayTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Public_Sections_MovieSceneReplaySection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
