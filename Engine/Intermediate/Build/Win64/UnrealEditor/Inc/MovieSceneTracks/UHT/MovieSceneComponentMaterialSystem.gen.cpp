// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneComponentMaterialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentMaterialSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneComponentMaterialSystem::StaticRegisterNativesUMovieSceneComponentMaterialSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentMaterialSystem);
	UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem_NoRegister()
	{
		return UMovieSceneComponentMaterialSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Systems/MovieSceneComponentMaterialSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentMaterialSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentMaterialSystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1390211309
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentMaterialSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::ClassParams = {
		&UMovieSceneComponentMaterialSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentMaterialSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentMaterialSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentMaterialSystem>()
	{
		return UMovieSceneComponentMaterialSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentMaterialSystem);
	UMovieSceneComponentMaterialSystem::~UMovieSceneComponentMaterialSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentMaterialSystem, UMovieSceneComponentMaterialSystem::StaticClass, TEXT("UMovieSceneComponentMaterialSystem"), &Z_Registration_Info_UClass_UMovieSceneComponentMaterialSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentMaterialSystem), 978368508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_3955971725(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentMaterialSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
