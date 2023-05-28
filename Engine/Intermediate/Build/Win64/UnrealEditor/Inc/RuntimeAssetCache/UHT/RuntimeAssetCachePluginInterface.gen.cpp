// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAssetCachePluginInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAssetCachePluginInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeAssetCache();
// End Cross Module References
	void URuntimeAssetCacheBuilder::StaticRegisterNativesURuntimeAssetCacheBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAssetCacheBuilder);
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister()
	{
		return URuntimeAssetCacheBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAssetCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeAssetCachePluginInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRuntimeAssetCacheBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::ClassParams = {
		&URuntimeAssetCacheBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder()
	{
		if (!Z_Registration_Info_UClass_URuntimeAssetCacheBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAssetCacheBuilder.OuterSingleton, Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeAssetCacheBuilder.OuterSingleton;
	}
	template<> RUNTIMEASSETCACHE_API UClass* StaticClass<URuntimeAssetCacheBuilder>()
	{
		return URuntimeAssetCacheBuilder::StaticClass();
	}
	URuntimeAssetCacheBuilder::URuntimeAssetCacheBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAssetCacheBuilder);
	URuntimeAssetCacheBuilder::~URuntimeAssetCacheBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAssetCacheBuilder, URuntimeAssetCacheBuilder::StaticClass, TEXT("URuntimeAssetCacheBuilder"), &Z_Registration_Info_UClass_URuntimeAssetCacheBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAssetCacheBuilder), 2867644281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_3088981075(TEXT("/Script/RuntimeAssetCache"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
