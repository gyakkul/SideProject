// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneConstrainedSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneConstrainedSection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstrainedSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneConstrainedSection::StaticRegisterNativesUMovieSceneConstrainedSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneConstrainedSection);
	UClass* Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister()
	{
		return UMovieSceneConstrainedSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneConstrainedSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneConstrainedSection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneConstrainedSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::ClassParams = {
		&UMovieSceneConstrainedSection::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneConstrainedSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneConstrainedSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneConstrainedSection.OuterSingleton, Z_Construct_UClass_UMovieSceneConstrainedSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneConstrainedSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneConstrainedSection>()
	{
		return UMovieSceneConstrainedSection::StaticClass();
	}
	UMovieSceneConstrainedSection::UMovieSceneConstrainedSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneConstrainedSection);
	UMovieSceneConstrainedSection::~UMovieSceneConstrainedSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneConstrainedSection, UMovieSceneConstrainedSection::StaticClass, TEXT("UMovieSceneConstrainedSection"), &Z_Registration_Info_UClass_UMovieSceneConstrainedSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneConstrainedSection), 2356854711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_907347497(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
