// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDAssetCache.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache_NoRegister();
// End Cross Module References
	void UUsdAssetCache::StaticRegisterNativesUUsdAssetCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetCache);
	UClass* Z_Construct_UClass_UUsdAssetCache_NoRegister()
	{
		return UUsdAssetCache::StaticClass();
	}
	struct Z_Construct_UClass_UUsdAssetCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientStorage_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransientStorage_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientStorage_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TransientStorage;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PersistentStorage_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PersistentStorage_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentStorage_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PersistentStorage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPersistentStorage_MetaData[];
#endif
		static void NewProp_bAllowPersistentStorage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPersistentStorage;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnedAssets_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OwnedAssets;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PrimPathToAssets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPathToAssets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPathToAssets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PrimPathToAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdAssetCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Owns the assets generated and reused by the USD stage, allowing thread-safe retrieval/storage */" },
		{ "IncludePath", "USDAssetCache.h" },
		{ "ModuleRelativePath", "Public/USDAssetCache.h" },
		{ "ScriptName", "UsdAssetCache_Deprecated" },
		{ "ToolTip", "Owns the assets generated and reused by the USD stage, allowing thread-safe retrieval/storage" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_ValueProp = { "TransientStorage", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_Key_KeyProp = { "TransientStorage_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_MetaData[] = {
		{ "Category", "Assets" },
		{ "Comment", "// For now everything is NonPIEDuplicateTransient as this is mostly a subobject of AUsdStageActor. When the actor is duplicated\n// it will need to reload the stage anyway to rebuild its prim links to components and assets, so there is no point in duplicating\n// the properties here just yet. Obviously we want to duplicate these properties\n" },
		{ "ModuleRelativePath", "Public/USDAssetCache.h" },
		{ "ToolTip", "For now everything is NonPIEDuplicateTransient as this is mostly a subobject of AUsdStageActor. When the actor is duplicated\nit will need to reload the stage anyway to rebuild its prim links to components and assets, so there is no point in duplicating\nthe properties here just yet. Obviously we want to duplicate these properties" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage = { "TransientStorage", nullptr, (EPropertyFlags)0x0044800000022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAssetCache, TransientStorage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_ValueProp = { "PersistentStorage", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_Key_KeyProp = { "PersistentStorage_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Public/USDAssetCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage = { "PersistentStorage", nullptr, (EPropertyFlags)0x0044800000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAssetCache, PersistentStorage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Public/USDAssetCache.h" },
	};
#endif
	void Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage_SetBit(void* Obj)
	{
		((UUsdAssetCache*)Obj)->bAllowPersistentStorage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage = { "bAllowPersistentStorage", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdAssetCache), &Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets_ElementProp = { "OwnedAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets_MetaData[] = {
		{ "Comment", "// Points to the assets in primary storage, used to quickly check if we own an asset\n" },
		{ "ModuleRelativePath", "Public/USDAssetCache.h" },
		{ "ToolTip", "Points to the assets in primary storage, used to quickly check if we own an asset" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets = { "OwnedAssets", nullptr, (EPropertyFlags)0x0044800000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAssetCache, OwnedAssets), METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_ValueProp = { "PrimPathToAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_Key_KeyProp = { "PrimPathToAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_MetaData[] = {
		{ "Comment", "// Keeps associations from prim paths to assets that we own in primary storage\n" },
		{ "ModuleRelativePath", "Public/USDAssetCache.h" },
		{ "ToolTip", "Keeps associations from prim paths to assets that we own in primary storage" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets = { "PrimPathToAssets", nullptr, (EPropertyFlags)0x0044800000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdAssetCache, PrimPathToAssets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdAssetCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_TransientStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PersistentStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_bAllowPersistentStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_OwnedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdAssetCache_Statics::NewProp_PrimPathToAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdAssetCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetCache_Statics::ClassParams = {
		&UUsdAssetCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdAssetCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdAssetCache()
	{
		if (!Z_Registration_Info_UClass_UUsdAssetCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetCache.OuterSingleton, Z_Construct_UClass_UUsdAssetCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdAssetCache.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdAssetCache>()
	{
		return UUsdAssetCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetCache);
	UUsdAssetCache::~UUsdAssetCache() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdAssetCache)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetCache, UUsdAssetCache::StaticClass, TEXT("UUsdAssetCache"), &Z_Registration_Info_UClass_UUsdAssetCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetCache), 2352613198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetCache_h_1854386539(TEXT("/Script/USDClasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDAssetCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
