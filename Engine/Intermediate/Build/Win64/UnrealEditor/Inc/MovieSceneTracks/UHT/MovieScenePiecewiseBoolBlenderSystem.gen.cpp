// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieScenePiecewiseBoolBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseBoolBlenderSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePiecewiseBoolBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseBoolBlenderSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePiecewiseBoolBlenderSystem);
	UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister()
	{
		return UMovieScenePiecewiseBoolBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScenePiecewiseBoolBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseBoolBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseBoolBlenderSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::ClassParams = {
		&UMovieScenePiecewiseBoolBlenderSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseBoolBlenderSystem>()
	{
		return UMovieScenePiecewiseBoolBlenderSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseBoolBlenderSystem);
	UMovieScenePiecewiseBoolBlenderSystem::~UMovieScenePiecewiseBoolBlenderSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseBoolBlenderSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseBoolBlenderSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem, UMovieScenePiecewiseBoolBlenderSystem::StaticClass, TEXT("UMovieScenePiecewiseBoolBlenderSystem"), &Z_Registration_Info_UClass_UMovieScenePiecewiseBoolBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePiecewiseBoolBlenderSystem), 934725010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseBoolBlenderSystem_h_3514212107(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseBoolBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseBoolBlenderSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
