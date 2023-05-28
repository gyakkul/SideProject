// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieSceneLiveLinkSubSectionLensRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionLensRole() {}
// Cross Module References
	LIVELINKLENS_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole();
	LIVELINKLENS_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_NoRegister();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
	UPackage* Z_Construct_UPackage__Script_LiveLinkLens();
// End Cross Module References
	void UMovieSceneLiveLinkSubSectionLensRole::StaticRegisterNativesUMovieSceneLiveLinkSubSectionLensRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSubSectionLensRole);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_NoRegister()
	{
		return UMovieSceneLiveLinkSubSectionLensRole::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneLiveLinkSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkLens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A LiveLinkSubSection managing special properties of the LensRole\n */" },
		{ "IncludePath", "MovieSceneLiveLinkSubSectionLensRole.h" },
		{ "ModuleRelativePath", "Private/MovieSceneLiveLinkSubSectionLensRole.h" },
		{ "ToolTip", "A LiveLinkSubSection managing special properties of the LensRole" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSectionLensRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::ClassParams = {
		&UMovieSceneLiveLinkSubSectionLensRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionLensRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionLensRole.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionLensRole.OuterSingleton;
	}
	template<> LIVELINKLENS_API UClass* StaticClass<UMovieSceneLiveLinkSubSectionLensRole>()
	{
		return UMovieSceneLiveLinkSubSectionLensRole::StaticClass();
	}
	UMovieSceneLiveLinkSubSectionLensRole::UMovieSceneLiveLinkSubSectionLensRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSectionLensRole);
	UMovieSceneLiveLinkSubSectionLensRole::~UMovieSceneLiveLinkSubSectionLensRole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Private_MovieSceneLiveLinkSubSectionLensRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Private_MovieSceneLiveLinkSubSectionLensRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSubSectionLensRole, UMovieSceneLiveLinkSubSectionLensRole::StaticClass, TEXT("UMovieSceneLiveLinkSubSectionLensRole"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionLensRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSubSectionLensRole), 1106081640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Private_MovieSceneLiveLinkSubSectionLensRole_h_2272050926(TEXT("/Script/LiveLinkLens"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Private_MovieSceneLiveLinkSubSectionLensRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Private_MovieSceneLiveLinkSubSectionLensRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
