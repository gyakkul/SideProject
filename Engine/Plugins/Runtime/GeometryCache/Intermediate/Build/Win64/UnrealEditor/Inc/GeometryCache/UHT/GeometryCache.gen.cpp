// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	void UGeometryCache::StaticRegisterNativesUGeometryCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCache);
	UClass* Z_Construct_UClass_UGeometryCache_NoRegister()
	{
		return UGeometryCache::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCache_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Hash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A Geometry Cache is a piece/set of geometry that consists of individual Mesh/Transformation samples.\n* In contrast with Static Meshes they can have their vertices animated in certain ways. * \n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GeometryCache.h" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "A Geometry Cache is a piece/set of geometry that consists of individual Mesh/Transformation samples.\nIn contrast with Static Meshes they can have their vertices animated in certain ways. *" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this Geometry cache object*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "Importing data and options used for this Geometry cache object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGeometryCacheTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** GeometryCache track defining the samples/geometry data for this GeomCache instance */" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
		{ "ToolTip", "GeometryCache track defining the samples/geometry data for this GeomCache instance" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, StartFrame), METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, EndFrame), METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCache_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeometryCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UGeometryCache_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCache, Hash), METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::NewProp_Hash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCache_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCache_Statics::NewProp_Hash,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCache_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGeometryCache, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCache_Statics::ClassParams = {
		&UGeometryCache::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCache_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCache()
	{
		if (!Z_Registration_Info_UClass_UGeometryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCache.OuterSingleton, Z_Construct_UClass_UGeometryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCache.OuterSingleton;
	}
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCache>()
	{
		return UGeometryCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCache);
	UGeometryCache::~UGeometryCache() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCache)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCache, UGeometryCache::StaticClass, TEXT("UGeometryCache"), &Z_Registration_Info_UClass_UGeometryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCache), 208413194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_4126749921(TEXT("/Script/GeometryCache"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
