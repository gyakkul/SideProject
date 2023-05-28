// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/MovieSceneLiveLinkSubSectionBasicRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionBasicRole() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References
	void UMovieSceneLiveLinkSubSectionBasicRole::StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSubSectionBasicRole);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_NoRegister()
	{
		return UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneLiveLinkSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A LiveLinkSubSection managing special properties of the BasicRole\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSectionBasicRole.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSectionBasicRole.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A LiveLinkSubSection managing special properties of the BasicRole" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSectionBasicRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::ClassParams = {
		&UMovieSceneLiveLinkSubSectionBasicRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton;
	}
	template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSectionBasicRole>()
	{
		return UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSectionBasicRole);
	UMovieSceneLiveLinkSubSectionBasicRole::~UMovieSceneLiveLinkSubSectionBasicRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole, UMovieSceneLiveLinkSubSectionBasicRole::StaticClass, TEXT("UMovieSceneLiveLinkSubSectionBasicRole"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSubSectionBasicRole), 3687569451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_1779043379(TEXT("/Script/LiveLinkMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
