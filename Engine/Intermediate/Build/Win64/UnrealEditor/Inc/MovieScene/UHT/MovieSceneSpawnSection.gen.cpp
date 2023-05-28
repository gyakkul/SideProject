// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneSpawnSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoolSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneSpawnSection::StaticRegisterNativesUMovieSceneSpawnSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnSection);
	UClass* Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister()
	{
		return UMovieSceneSpawnSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSpawnSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSpawnSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBoolSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A spawn section.\n */" },
		{ "IncludePath", "Sections/MovieSceneSpawnSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSpawnSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A spawn section." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSpawnSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSpawnSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSpawnSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnSection_Statics::ClassParams = {
		&UMovieSceneSpawnSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSpawnSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSpawnSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnSection.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSpawnSection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSpawnSection>()
	{
		return UMovieSceneSpawnSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnSection);
	UMovieSceneSpawnSection::~UMovieSceneSpawnSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnSection, UMovieSceneSpawnSection::StaticClass, TEXT("UMovieSceneSpawnSection"), &Z_Registration_Info_UClass_UMovieSceneSpawnSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnSection), 4110238767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_3312222545(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSpawnSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
