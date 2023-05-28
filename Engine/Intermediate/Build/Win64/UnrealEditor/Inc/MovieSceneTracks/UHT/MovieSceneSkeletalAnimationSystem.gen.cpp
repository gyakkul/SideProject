// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneSkeletalAnimationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneSkeletalAnimationSystem::StaticRegisterNativesUMovieSceneSkeletalAnimationSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSkeletalAnimationSystem);
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_NoRegister()
	{
		return UMovieSceneSkeletalAnimationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Systems/MovieSceneSkeletalAnimationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneSkeletalAnimationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::ClassParams = {
		&UMovieSceneSkeletalAnimationSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationSystem>()
	{
		return UMovieSceneSkeletalAnimationSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationSystem);
	UMovieSceneSkeletalAnimationSystem::~UMovieSceneSkeletalAnimationSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSkeletalAnimationSystem, UMovieSceneSkeletalAnimationSystem::StaticClass, TEXT("UMovieSceneSkeletalAnimationSystem"), &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSkeletalAnimationSystem), 3350353471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_1031660400(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneSkeletalAnimationSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
