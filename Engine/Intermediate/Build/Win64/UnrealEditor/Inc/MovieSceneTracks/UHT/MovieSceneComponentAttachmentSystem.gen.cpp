// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneComponentAttachmentSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentAttachmentSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneComponentAttachmentInvalidatorSystem::StaticRegisterNativesUMovieSceneComponentAttachmentInvalidatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentAttachmentInvalidatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_NoRegister()
	{
		return UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentAttachmentInvalidatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::ClassParams = {
		&UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentAttachmentInvalidatorSystem>()
	{
		return UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentAttachmentInvalidatorSystem);
	UMovieSceneComponentAttachmentInvalidatorSystem::~UMovieSceneComponentAttachmentInvalidatorSystem() {}
	void UMovieSceneComponentAttachmentSystem::StaticRegisterNativesUMovieSceneComponentAttachmentSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentAttachmentSystem);
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_NoRegister()
	{
		return UMovieSceneComponentAttachmentSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentAttachmentSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentAttachmentSystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1390211309
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentAttachmentSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::ClassParams = {
		&UMovieSceneComponentAttachmentSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentAttachmentSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentAttachmentSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentAttachmentSystem>()
	{
		return UMovieSceneComponentAttachmentSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentAttachmentSystem);
	UMovieSceneComponentAttachmentSystem::~UMovieSceneComponentAttachmentSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentAttachmentSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentAttachmentSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentAttachmentInvalidatorSystem, UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass, TEXT("UMovieSceneComponentAttachmentInvalidatorSystem"), &Z_Registration_Info_UClass_UMovieSceneComponentAttachmentInvalidatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentAttachmentInvalidatorSystem), 3147858559U) },
		{ Z_Construct_UClass_UMovieSceneComponentAttachmentSystem, UMovieSceneComponentAttachmentSystem::StaticClass, TEXT("UMovieSceneComponentAttachmentSystem"), &Z_Registration_Info_UClass_UMovieSceneComponentAttachmentSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentAttachmentSystem), 736312276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentAttachmentSystem_h_1956233328(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentAttachmentSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentAttachmentSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
