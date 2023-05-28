// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieScene2DTransformPropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformPropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieScene2DTransformPropertySystem::StaticRegisterNativesUMovieScene2DTransformPropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene2DTransformPropertySystem);
	UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem_NoRegister()
	{
		return UMovieScene2DTransformPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieScene2DTransformPropertySystem.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformPropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams = {
		&UMovieScene2DTransformPropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene2DTransformPropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton, Z_Construct_UClass_UMovieScene2DTransformPropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieScene2DTransformPropertySystem>()
	{
		return UMovieScene2DTransformPropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformPropertySystem);
	UMovieScene2DTransformPropertySystem::~UMovieScene2DTransformPropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene2DTransformPropertySystem, UMovieScene2DTransformPropertySystem::StaticClass, TEXT("UMovieScene2DTransformPropertySystem"), &Z_Registration_Info_UClass_UMovieScene2DTransformPropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene2DTransformPropertySystem), 2840298787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_1974055716(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformPropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
