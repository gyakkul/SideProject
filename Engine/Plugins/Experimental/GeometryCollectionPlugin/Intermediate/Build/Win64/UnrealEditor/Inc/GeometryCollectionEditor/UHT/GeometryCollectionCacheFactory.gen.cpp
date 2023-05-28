// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionCacheFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionCacheFactory() {}
// Cross Module References
	GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UGeometryCollectionCacheFactory();
	GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UGeometryCollectionCacheFactory_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEditor();
// End Cross Module References
	void UGeometryCollectionCacheFactory::StaticRegisterNativesUGeometryCollectionCacheFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionCacheFactory);
	UClass* Z_Construct_UClass_UGeometryCollectionCacheFactory_NoRegister()
	{
		return UGeometryCollectionCacheFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionCacheFactory.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCacheFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::NewProp_TargetCollection_MetaData[] = {
		{ "Comment", "/** Config properties required for CreateNew */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCacheFactory.h" },
		{ "ToolTip", "Config properties required for CreateNew" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::NewProp_TargetCollection = { "TargetCollection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionCacheFactory, TargetCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::NewProp_TargetCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::NewProp_TargetCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::NewProp_TargetCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionCacheFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::ClassParams = {
		&UGeometryCollectionCacheFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionCacheFactory()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollectionCacheFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionCacheFactory.OuterSingleton, Z_Construct_UClass_UGeometryCollectionCacheFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollectionCacheFactory.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONEDITOR_API UClass* StaticClass<UGeometryCollectionCacheFactory>()
	{
		return UGeometryCollectionCacheFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionCacheFactory);
	UGeometryCollectionCacheFactory::~UGeometryCollectionCacheFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionCacheFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionCacheFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionCacheFactory, UGeometryCollectionCacheFactory::StaticClass, TEXT("UGeometryCollectionCacheFactory"), &Z_Registration_Info_UClass_UGeometryCollectionCacheFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionCacheFactory), 3485977517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionCacheFactory_h_2696148265(TEXT("/Script/GeometryCollectionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionCacheFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionCacheFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
