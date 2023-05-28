// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/CacheCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheCollection() {}
// Cross Module References
	CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache_NoRegister();
	CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheCollection();
	CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheCollection_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References
	void UChaosCacheCollection::StaticRegisterNativesUChaosCacheCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosCacheCollection);
	UClass* Z_Construct_UClass_UChaosCacheCollection_NoRegister()
	{
		return UChaosCacheCollection::StaticClass();
	}
	struct Z_Construct_UClass_UChaosCacheCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caches_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Caches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Caches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosCacheCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCacheCollection_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Chaos/CacheCollection.h" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner = { "Caches", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UChaosCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches = { "Caches", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosCacheCollection, Caches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosCacheCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosCacheCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosCacheCollection_Statics::ClassParams = {
		&UChaosCacheCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosCacheCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosCacheCollection()
	{
		if (!Z_Registration_Info_UClass_UChaosCacheCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosCacheCollection.OuterSingleton, Z_Construct_UClass_UChaosCacheCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosCacheCollection.OuterSingleton;
	}
	template<> CHAOSCACHING_API UClass* StaticClass<UChaosCacheCollection>()
	{
		return UChaosCacheCollection::StaticClass();
	}
	UChaosCacheCollection::UChaosCacheCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosCacheCollection);
	UChaosCacheCollection::~UChaosCacheCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosCacheCollection, UChaosCacheCollection::StaticClass, TEXT("UChaosCacheCollection"), &Z_Registration_Info_UClass_UChaosCacheCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosCacheCollection), 263840113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_3925439119(TEXT("/Script/ChaosCaching"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
