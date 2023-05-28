// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/MovieSceneLiveLinkSubSectionProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionProperties() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References
	void UMovieSceneLiveLinkSubSectionProperties::StaticRegisterNativesUMovieSceneLiveLinkSubSectionProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSubSectionProperties);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_NoRegister()
	{
		return UMovieSceneLiveLinkSubSectionProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneLiveLinkSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A LiveLinkSubSection managing properties marked as Interp in the data struct associated with the subject role\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSectionProperties.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSectionProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A LiveLinkSubSection managing properties marked as Interp in the data struct associated with the subject role" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSectionProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::ClassParams = {
		&UMovieSceneLiveLinkSubSectionProperties::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.OuterSingleton;
	}
	template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSectionProperties>()
	{
		return UMovieSceneLiveLinkSubSectionProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSectionProperties);
	UMovieSceneLiveLinkSubSectionProperties::~UMovieSceneLiveLinkSubSectionProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties, UMovieSceneLiveLinkSubSectionProperties::StaticClass, TEXT("UMovieSceneLiveLinkSubSectionProperties"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSubSectionProperties), 2951866198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h_920739040(TEXT("/Script/LiveLinkMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
