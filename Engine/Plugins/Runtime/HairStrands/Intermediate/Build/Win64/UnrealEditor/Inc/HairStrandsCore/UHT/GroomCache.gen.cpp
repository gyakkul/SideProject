// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomCache.h"
#include "GroomCacheData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheInfo();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UGroomCache::StaticRegisterNativesUGroomCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCache);
	UClass* Z_Construct_UClass_UGroomCache_NoRegister()
	{
		return UGroomCache::StaticClass();
	}
	struct Z_Construct_UClass_UGroomCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomCacheInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroomCacheInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that is used to store an animated groom\n */" },
		{ "IncludePath", "GroomCache.h" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
		{ "ToolTip", "Implements an asset that is used to store an animated groom" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Import options used for this GroomCache */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
		{ "ToolTip", "Import options used for this GroomCache" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo = { "GroomCacheInfo", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomCache, GroomCacheInfo), Z_Construct_UScriptStruct_FGroomCacheInfo, METADATA_PARAMS(Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo_MetaData)) }; // 2725999052
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCache_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCache_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCache_Statics::NewProp_GroomCacheInfo,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGroomCache_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGroomCache, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCache_Statics::ClassParams = {
		&UGroomCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomCache_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomCache()
	{
		if (!Z_Registration_Info_UClass_UGroomCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCache.OuterSingleton, Z_Construct_UClass_UGroomCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomCache.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCache>()
	{
		return UGroomCache::StaticClass();
	}
	UGroomCache::UGroomCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCache);
	UGroomCache::~UGroomCache() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomCache)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCache, UGroomCache::StaticClass, TEXT("UGroomCache"), &Z_Registration_Info_UClass_UGroomCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCache), 1910446280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_3193319839(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
