// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieScenePropertyInstantiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyInstantiator() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePropertyInstantiatorSystem::StaticRegisterNativesUMovieScenePropertyInstantiatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePropertyInstantiatorSystem);
	UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_NoRegister()
	{
		return UMovieScenePropertyInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "Systems/MovieScenePropertyInstantiator.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePropertyInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertyInstantiatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::ClassParams = {
		&UMovieScenePropertyInstantiatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePropertyInstantiatorSystem>()
	{
		return UMovieScenePropertyInstantiatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertyInstantiatorSystem);
	UMovieScenePropertyInstantiatorSystem::~UMovieScenePropertyInstantiatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertyInstantiator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertyInstantiator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePropertyInstantiatorSystem, UMovieScenePropertyInstantiatorSystem::StaticClass, TEXT("UMovieScenePropertyInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePropertyInstantiatorSystem), 544380432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertyInstantiator_h_653259054(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertyInstantiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertyInstantiator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
