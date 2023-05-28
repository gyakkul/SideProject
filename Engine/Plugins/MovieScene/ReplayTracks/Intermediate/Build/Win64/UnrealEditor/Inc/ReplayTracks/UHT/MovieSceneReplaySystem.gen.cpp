// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Systems/MovieSceneReplaySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneReplaySystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	REPLAYTRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaySystem();
	REPLAYTRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaySystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplayTracks();
// End Cross Module References
	void UMovieSceneReplaySystem::StaticRegisterNativesUMovieSceneReplaySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneReplaySystem);
	UClass* Z_Construct_UClass_UMovieSceneReplaySystem_NoRegister()
	{
		return UMovieSceneReplaySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneReplaySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneReplaySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplayTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneReplaySystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieSceneReplaySystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneReplaySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneReplaySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneReplaySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneReplaySystem_Statics::ClassParams = {
		&UMovieSceneReplaySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneReplaySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneReplaySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneReplaySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneReplaySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneReplaySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneReplaySystem.OuterSingleton;
	}
	template<> REPLAYTRACKS_API UClass* StaticClass<UMovieSceneReplaySystem>()
	{
		return UMovieSceneReplaySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneReplaySystem);
	UMovieSceneReplaySystem::~UMovieSceneReplaySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Private_Systems_MovieSceneReplaySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Private_Systems_MovieSceneReplaySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneReplaySystem, UMovieSceneReplaySystem::StaticClass, TEXT("UMovieSceneReplaySystem"), &Z_Registration_Info_UClass_UMovieSceneReplaySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneReplaySystem), 64929004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Private_Systems_MovieSceneReplaySystem_h_875482145(TEXT("/Script/ReplayTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Private_Systems_MovieSceneReplaySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracks_Private_Systems_MovieSceneReplaySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
