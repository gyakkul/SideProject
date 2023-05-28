// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ActorFactoryCacheManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryCacheManager() {}
// Cross Module References
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UActorFactoryCacheManager();
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UActorFactoryCacheManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosCachingEditor();
// End Cross Module References
	void UActorFactoryCacheManager::StaticRegisterNativesUActorFactoryCacheManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryCacheManager);
	UClass* Z_Construct_UClass_UActorFactoryCacheManager_NoRegister()
	{
		return UActorFactoryCacheManager::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryCacheManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryCacheManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCachingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryCacheManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Chaos/ActorFactoryCacheManager.h" },
		{ "ModuleRelativePath", "Public/Chaos/ActorFactoryCacheManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryCacheManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryCacheManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryCacheManager_Statics::ClassParams = {
		&UActorFactoryCacheManager::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryCacheManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryCacheManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryCacheManager()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryCacheManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryCacheManager.OuterSingleton, Z_Construct_UClass_UActorFactoryCacheManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryCacheManager.OuterSingleton;
	}
	template<> CHAOSCACHINGEDITOR_API UClass* StaticClass<UActorFactoryCacheManager>()
	{
		return UActorFactoryCacheManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryCacheManager);
	UActorFactoryCacheManager::~UActorFactoryCacheManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryCacheManager, UActorFactoryCacheManager::StaticClass, TEXT("UActorFactoryCacheManager"), &Z_Registration_Info_UClass_UActorFactoryCacheManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryCacheManager), 642591464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_958155916(TEXT("/Script/ChaosCachingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
