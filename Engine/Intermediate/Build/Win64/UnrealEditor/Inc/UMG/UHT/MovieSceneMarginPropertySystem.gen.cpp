// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/MovieSceneMarginPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginPropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneMarginPropertySystem::StaticRegisterNativesUMovieSceneMarginPropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMarginPropertySystem);
	UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister()
	{
		return UMovieSceneMarginPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieSceneMarginPropertySystem.h" },
		{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginPropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams = {
		&UMovieSceneMarginPropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieSceneMarginPropertySystem>()
	{
		return UMovieSceneMarginPropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginPropertySystem);
	UMovieSceneMarginPropertySystem::~UMovieSceneMarginPropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMarginPropertySystem, UMovieSceneMarginPropertySystem::StaticClass, TEXT("UMovieSceneMarginPropertySystem"), &Z_Registration_Info_UClass_UMovieSceneMarginPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMarginPropertySystem), 2785983252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_3256685708(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneMarginPropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
