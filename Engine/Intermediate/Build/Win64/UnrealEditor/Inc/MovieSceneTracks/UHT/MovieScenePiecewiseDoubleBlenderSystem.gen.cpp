// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieScenePiecewiseDoubleBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseDoubleBlenderSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePiecewiseDoubleBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseDoubleBlenderSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePiecewiseDoubleBlenderSystem);
	UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister()
	{
		return UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Weighted per-channel" },
		{ "IncludePath", "Systems/MovieScenePiecewiseDoubleBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseDoubleBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "Tooltip", "Blends each channel of this object's transform as separate scalar components. Useful for blending to/from over-rotated objects (ie, 0 < rotation > 360." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePiecewiseDoubleBlenderSystem, IMovieSceneValueDecomposer), false },  // 3026387645
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseDoubleBlenderSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::ClassParams = {
		&UMovieScenePiecewiseDoubleBlenderSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseDoubleBlenderSystem>()
	{
		return UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseDoubleBlenderSystem);
	UMovieScenePiecewiseDoubleBlenderSystem::~UMovieScenePiecewiseDoubleBlenderSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem, UMovieScenePiecewiseDoubleBlenderSystem::StaticClass, TEXT("UMovieScenePiecewiseDoubleBlenderSystem"), &Z_Registration_Info_UClass_UMovieScenePiecewiseDoubleBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePiecewiseDoubleBlenderSystem), 1933778065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_2546478614(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePiecewiseDoubleBlenderSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
