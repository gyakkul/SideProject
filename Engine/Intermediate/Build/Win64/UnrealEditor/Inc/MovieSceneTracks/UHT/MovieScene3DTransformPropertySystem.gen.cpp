// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieScene3DTransformPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformPropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DTransformPropertySystem::StaticRegisterNativesUMovieScene3DTransformPropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformPropertySystem);
	UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem_NoRegister()
	{
		return UMovieScene3DTransformPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScene3DTransformPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScene3DTransformPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformPropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::ClassParams = {
		&UMovieScene3DTransformPropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformPropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformPropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DTransformPropertySystem>()
	{
		return UMovieScene3DTransformPropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformPropertySystem);
	UMovieScene3DTransformPropertySystem::~UMovieScene3DTransformPropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DTransformPropertySystem, UMovieScene3DTransformPropertySystem::StaticClass, TEXT("UMovieScene3DTransformPropertySystem"), &Z_Registration_Info_UClass_UMovieScene3DTransformPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformPropertySystem), 1176996115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_2208225010(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScene3DTransformPropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
