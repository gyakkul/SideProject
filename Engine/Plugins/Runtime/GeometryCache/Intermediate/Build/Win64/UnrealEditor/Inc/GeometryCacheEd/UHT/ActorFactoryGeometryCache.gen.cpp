// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryGeometryCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryGeometryCache() {}
// Cross Module References
	GEOMETRYCACHEED_API UClass* Z_Construct_UClass_UActorFactoryGeometryCache();
	GEOMETRYCACHEED_API UClass* Z_Construct_UClass_UActorFactoryGeometryCache_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheEd();
// End Cross Module References
	void UActorFactoryGeometryCache::StaticRegisterNativesUActorFactoryGeometryCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryGeometryCache);
	UClass* Z_Construct_UClass_UActorFactoryGeometryCache_NoRegister()
	{
		return UActorFactoryGeometryCache::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryGeometryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryGeometryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryGeometryCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory class for spawning and creating GeometryCacheActors */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryGeometryCache.h" },
		{ "ModuleRelativePath", "Classes/ActorFactoryGeometryCache.h" },
		{ "ToolTip", "Factory class for spawning and creating GeometryCacheActors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryGeometryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryGeometryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryGeometryCache_Statics::ClassParams = {
		&UActorFactoryGeometryCache::StaticClass,
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
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryGeometryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryGeometryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryGeometryCache()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryGeometryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryGeometryCache.OuterSingleton, Z_Construct_UClass_UActorFactoryGeometryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryGeometryCache.OuterSingleton;
	}
	template<> GEOMETRYCACHEED_API UClass* StaticClass<UActorFactoryGeometryCache>()
	{
		return UActorFactoryGeometryCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryGeometryCache);
	UActorFactoryGeometryCache::~UActorFactoryGeometryCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryGeometryCache, UActorFactoryGeometryCache::StaticClass, TEXT("UActorFactoryGeometryCache"), &Z_Registration_Info_UClass_UActorFactoryGeometryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryGeometryCache), 385663214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_1849390870(TEXT("/Script/GeometryCacheEd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheEd_Classes_ActorFactoryGeometryCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
