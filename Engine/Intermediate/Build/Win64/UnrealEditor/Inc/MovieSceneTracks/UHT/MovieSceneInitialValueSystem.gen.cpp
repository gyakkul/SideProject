// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneInitialValueSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneInitialValueSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneInitialValueSystem::StaticRegisterNativesUMovieSceneInitialValueSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneInitialValueSystem);
	UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister()
	{
		return UMovieSceneInitialValueSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for initializing initial values for all property types\n * Will handle the presence of an FInitialValueCache extension on the linker\n */" },
		{ "IncludePath", "Systems/MovieSceneInitialValueSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneInitialValueSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for initializing initial values for all property types\nWill handle the presence of an FInitialValueCache extension on the linker" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneInitialValueSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::ClassParams = {
		&UMovieSceneInitialValueSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneInitialValueSystem>()
	{
		return UMovieSceneInitialValueSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneInitialValueSystem);
	UMovieSceneInitialValueSystem::~UMovieSceneInitialValueSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneInitialValueSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneInitialValueSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneInitialValueSystem, UMovieSceneInitialValueSystem::StaticClass, TEXT("UMovieSceneInitialValueSystem"), &Z_Registration_Info_UClass_UMovieSceneInitialValueSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneInitialValueSystem), 4145730790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneInitialValueSystem_h_3144399117(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneInitialValueSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneInitialValueSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
