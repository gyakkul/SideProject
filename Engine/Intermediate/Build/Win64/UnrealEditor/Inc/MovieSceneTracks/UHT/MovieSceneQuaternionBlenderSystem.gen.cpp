// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneQuaternionBlenderSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneQuaternionBlenderSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneQuaternionBlenderSystem::StaticRegisterNativesUMovieSceneQuaternionBlenderSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneQuaternionBlenderSystem);
	UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_NoRegister()
	{
		return UMovieSceneQuaternionBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Shortest Rotation (quaternion slerp)" },
		{ "IncludePath", "Systems/MovieSceneQuaternionBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneQuaternionBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "Tooltip", "Uses a quaternion spherical interpolation (slerp) to blend between transforms using the shortest rotation path. Does not support over-rotation." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneQuaternionBlenderSystem, IMovieSceneValueDecomposer), false },  // 3026387645
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneQuaternionBlenderSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::ClassParams = {
		&UMovieSceneQuaternionBlenderSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneQuaternionBlenderSystem>()
	{
		return UMovieSceneQuaternionBlenderSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneQuaternionBlenderSystem);
	UMovieSceneQuaternionBlenderSystem::~UMovieSceneQuaternionBlenderSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem, UMovieSceneQuaternionBlenderSystem::StaticClass, TEXT("UMovieSceneQuaternionBlenderSystem"), &Z_Registration_Info_UClass_UMovieSceneQuaternionBlenderSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneQuaternionBlenderSystem), 2290159122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_2547330672(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionBlenderSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
