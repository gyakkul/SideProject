// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneBoolPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolPropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneBoolPropertySystem::StaticRegisterNativesUMovieSceneBoolPropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoolPropertySystem);
	UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem_NoRegister()
	{
		return UMovieSceneBoolPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneBoolPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneBoolPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoolPropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::ClassParams = {
		&UMovieSceneBoolPropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBoolPropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBoolPropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBoolPropertySystem>()
	{
		return UMovieSceneBoolPropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolPropertySystem);
	UMovieSceneBoolPropertySystem::~UMovieSceneBoolPropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoolPropertySystem, UMovieSceneBoolPropertySystem::StaticClass, TEXT("UMovieSceneBoolPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneBoolPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoolPropertySystem), 3178616695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_1091914110(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBoolPropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
