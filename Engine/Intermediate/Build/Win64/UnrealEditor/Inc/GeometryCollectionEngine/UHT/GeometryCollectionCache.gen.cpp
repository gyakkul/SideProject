// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionCache.h"
#include "GeometryCollection/RecordedTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionCache() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedTransformTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	void UGeometryCollectionCache::StaticRegisterNativesUGeometryCollectionCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionCache);
	UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister()
	{
		return UGeometryCollectionCache::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecordedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SupportedCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleCollectionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompatibleCollectionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionCache.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData_MetaData[] = {
		{ "Comment", "/** The recorded data from the simulation */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
		{ "ToolTip", "The recorded data from the simulation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData = { "RecordedData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionCache, RecordedData), Z_Construct_UScriptStruct_FRecordedTransformTrack, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData_MetaData)) }; // 1900181290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection_MetaData[] = {
		{ "Comment", "/** The collection that we recorded the data from */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The collection that we recorded the data from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection = { "SupportedCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionCache, SupportedCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState_MetaData[] = {
		{ "Comment", "/** Guid pulled from the collection when the recording was last saved */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
		{ "ToolTip", "Guid pulled from the collection when the recording was last saved" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState = { "CompatibleCollectionState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionCache, CompatibleCollectionState), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionCache_Statics::ClassParams = {
		&UGeometryCollectionCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollectionCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionCache()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollectionCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionCache.OuterSingleton, Z_Construct_UClass_UGeometryCollectionCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollectionCache.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionCache>()
	{
		return UGeometryCollectionCache::StaticClass();
	}
	UGeometryCollectionCache::UGeometryCollectionCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionCache);
	UGeometryCollectionCache::~UGeometryCollectionCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionCache, UGeometryCollectionCache::StaticClass, TEXT("UGeometryCollectionCache"), &Z_Registration_Info_UClass_UGeometryCollectionCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionCache), 2912411054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_527496937(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
