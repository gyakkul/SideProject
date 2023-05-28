// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraAnimationSequenceSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequenceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UCameraAnimationSpawnableSystem::StaticRegisterNativesUCameraAnimationSpawnableSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSpawnableSystem);
	UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem_NoRegister()
	{
		return UCameraAnimationSpawnableSystem::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSpawnableSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::ClassParams = {
		&UCameraAnimationSpawnableSystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSpawnableSystem()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton, Z_Construct_UClass_UCameraAnimationSpawnableSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSpawnableSystem>()
	{
		return UCameraAnimationSpawnableSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSpawnableSystem);
	UCameraAnimationSpawnableSystem::~UCameraAnimationSpawnableSystem() {}
	void UCameraAnimationBoundObjectInstantiator::StaticRegisterNativesUCameraAnimationBoundObjectInstantiator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationBoundObjectInstantiator);
	UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_NoRegister()
	{
		return UCameraAnimationBoundObjectInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationBoundObjectInstantiator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::ClassParams = {
		&UCameraAnimationBoundObjectInstantiator::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton, Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationBoundObjectInstantiator>()
	{
		return UCameraAnimationBoundObjectInstantiator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationBoundObjectInstantiator);
	UCameraAnimationBoundObjectInstantiator::~UCameraAnimationBoundObjectInstantiator() {}
	void UCameraAnimationEntitySystemLinker::StaticRegisterNativesUCameraAnimationEntitySystemLinker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationEntitySystemLinker);
	UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker_NoRegister()
	{
		return UCameraAnimationEntitySystemLinker::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystemLinker,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationEntitySystemLinker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::ClassParams = {
		&UCameraAnimationEntitySystemLinker::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationEntitySystemLinker()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton, Z_Construct_UClass_UCameraAnimationEntitySystemLinker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationEntitySystemLinker>()
	{
		return UCameraAnimationEntitySystemLinker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationEntitySystemLinker);
	UCameraAnimationEntitySystemLinker::~UCameraAnimationEntitySystemLinker() {}
	void UCameraAnimationSequenceSubsystem::StaticRegisterNativesUCameraAnimationSequenceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequenceSubsystem);
	UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister()
	{
		return UCameraAnimationSequenceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Linker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World subsystem that holds global objects for handling camera animation sequences.\n */" },
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ToolTip", "World subsystem that holds global objects for handling camera animation sequences." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker_MetaData[] = {
		{ "Comment", "/** The global Sequencer linker that contains all the shakes and camera animations */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ToolTip", "The global Sequencer linker that contains all the shakes and camera animations" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceSubsystem, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequenceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams = {
		&UCameraAnimationSequenceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequenceSubsystem>()
	{
		return UCameraAnimationSequenceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequenceSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationSpawnableSystem, UCameraAnimationSpawnableSystem::StaticClass, TEXT("UCameraAnimationSpawnableSystem"), &Z_Registration_Info_UClass_UCameraAnimationSpawnableSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSpawnableSystem), 3260261724U) },
		{ Z_Construct_UClass_UCameraAnimationBoundObjectInstantiator, UCameraAnimationBoundObjectInstantiator::StaticClass, TEXT("UCameraAnimationBoundObjectInstantiator"), &Z_Registration_Info_UClass_UCameraAnimationBoundObjectInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationBoundObjectInstantiator), 3443622110U) },
		{ Z_Construct_UClass_UCameraAnimationEntitySystemLinker, UCameraAnimationEntitySystemLinker::StaticClass, TEXT("UCameraAnimationEntitySystemLinker"), &Z_Registration_Info_UClass_UCameraAnimationEntitySystemLinker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationEntitySystemLinker), 3758592296U) },
		{ Z_Construct_UClass_UCameraAnimationSequenceSubsystem, UCameraAnimationSequenceSubsystem::StaticClass, TEXT("UCameraAnimationSequenceSubsystem"), &Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequenceSubsystem), 2870429965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_3515657156(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
