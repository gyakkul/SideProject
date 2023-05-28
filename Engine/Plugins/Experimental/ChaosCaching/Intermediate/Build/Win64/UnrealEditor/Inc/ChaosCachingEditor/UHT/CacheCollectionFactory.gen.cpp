// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/CacheCollectionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheCollectionFactory() {}
// Cross Module References
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UCacheCollectionFactory();
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UCacheCollectionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosCachingEditor();
// End Cross Module References
	void UCacheCollectionFactory::StaticRegisterNativesUCacheCollectionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCacheCollectionFactory);
	UClass* Z_Construct_UClass_UCacheCollectionFactory_NoRegister()
	{
		return UCacheCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCacheCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCacheCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCachingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/CacheCollectionFactory.h" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollectionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCacheCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCacheCollectionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCacheCollectionFactory_Statics::ClassParams = {
		&UCacheCollectionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCacheCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCacheCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCacheCollectionFactory()
	{
		if (!Z_Registration_Info_UClass_UCacheCollectionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCacheCollectionFactory.OuterSingleton, Z_Construct_UClass_UCacheCollectionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCacheCollectionFactory.OuterSingleton;
	}
	template<> CHAOSCACHINGEDITOR_API UClass* StaticClass<UCacheCollectionFactory>()
	{
		return UCacheCollectionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCacheCollectionFactory);
	UCacheCollectionFactory::~UCacheCollectionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_CacheCollectionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_CacheCollectionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCacheCollectionFactory, UCacheCollectionFactory::StaticClass, TEXT("UCacheCollectionFactory"), &Z_Registration_Info_UClass_UCacheCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCacheCollectionFactory), 1897369608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_CacheCollectionFactory_h_2406950279(TEXT("/Script/ChaosCachingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_CacheCollectionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_CacheCollectionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
