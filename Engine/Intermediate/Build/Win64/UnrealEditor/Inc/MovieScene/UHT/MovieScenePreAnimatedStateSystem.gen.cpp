// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieScenePreAnimatedStateSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePreAnimatedStateSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieScenePreAnimatedStateSystemInterface::StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePreAnimatedStateSystemInterface);
	UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister()
	{
		return UMovieScenePreAnimatedStateSystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieScenePreAnimatedStateSystemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams = {
		&UMovieScenePreAnimatedStateSystemInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton, Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePreAnimatedStateSystemInterface>()
	{
		return UMovieScenePreAnimatedStateSystemInterface::StaticClass();
	}
	UMovieScenePreAnimatedStateSystemInterface::UMovieScenePreAnimatedStateSystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePreAnimatedStateSystemInterface);
	UMovieScenePreAnimatedStateSystemInterface::~UMovieScenePreAnimatedStateSystemInterface() {}
	void UMovieSceneCachePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCachePreAnimatedStateSystem);
	UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_NoRegister()
	{
		return UMovieSceneCachePreAnimatedStateSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that becomes relevant if there are any entites tagged RestoreState,\n * or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\n * When run this system will iterate the instantiation phase in order, and call \n * IMovieScenePreAnimatedStateSystemInterface::Save(Global)PreAnimatedState on any\n * systems that implement the necessary interface\n */" },
		{ "IncludePath", "EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that becomes relevant if there are any entites tagged RestoreState,\nor UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\nWhen run this system will iterate the instantiation phase in order, and call\nIMovieScenePreAnimatedStateSystemInterface::Save(Global)PreAnimatedState on any\nsystems that implement the necessary interface" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCachePreAnimatedStateSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams = {
		&UMovieSceneCachePreAnimatedStateSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCachePreAnimatedStateSystem>()
	{
		return UMovieSceneCachePreAnimatedStateSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCachePreAnimatedStateSystem);
	UMovieSceneCachePreAnimatedStateSystem::~UMovieSceneCachePreAnimatedStateSystem() {}
	void UMovieSceneRestorePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneRestorePreAnimatedStateSystem);
	UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister()
	{
		return UMovieSceneRestorePreAnimatedStateSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that becomes relevant if there are any entites tagged RestoreState,\n * or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\n * When run this system will iterate the instantiation phase in reverse order, and call \n * IMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any\n * systems that implement the necessary interface.\n */" },
		{ "IncludePath", "EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePreAnimatedStateSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that becomes relevant if there are any entites tagged RestoreState,\nor UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.\nWhen run this system will iterate the instantiation phase in reverse order, and call\nIMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any\nsystems that implement the necessary interface." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRestorePreAnimatedStateSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams = {
		&UMovieSceneRestorePreAnimatedStateSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneRestorePreAnimatedStateSystem>()
	{
		return UMovieSceneRestorePreAnimatedStateSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRestorePreAnimatedStateSystem);
	UMovieSceneRestorePreAnimatedStateSystem::~UMovieSceneRestorePreAnimatedStateSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface, UMovieScenePreAnimatedStateSystemInterface::StaticClass, TEXT("UMovieScenePreAnimatedStateSystemInterface"), &Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePreAnimatedStateSystemInterface), 1390211309U) },
		{ Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem, UMovieSceneCachePreAnimatedStateSystem::StaticClass, TEXT("UMovieSceneCachePreAnimatedStateSystem"), &Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCachePreAnimatedStateSystem), 3046319319U) },
		{ Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem, UMovieSceneRestorePreAnimatedStateSystem::StaticClass, TEXT("UMovieSceneRestorePreAnimatedStateSystem"), &Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneRestorePreAnimatedStateSystem), 298911605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_217550364(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
