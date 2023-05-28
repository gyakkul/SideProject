// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneInterrogatedPropertyInstantiator() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticRegisterNativesUMovieSceneInterrogatedPropertyInstantiatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneInterrogatedPropertyInstantiatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister()
	{
		return UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry */" },
		{ "IncludePath", "EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class responsible for resolving all property types registered with FBuiltInComponentTypes::PropertyRegistry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneInterrogatedPropertyInstantiatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::ClassParams = {
		&UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneInterrogatedPropertyInstantiatorSystem>()
	{
		return UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneInterrogatedPropertyInstantiatorSystem);
	UMovieSceneInterrogatedPropertyInstantiatorSystem::~UMovieSceneInterrogatedPropertyInstantiatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem, UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass, TEXT("UMovieSceneInterrogatedPropertyInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneInterrogatedPropertyInstantiatorSystem), 355509829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_2633073007(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_EntitySystem_Interrogation_MovieSceneInterrogatedPropertyInstantiator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
