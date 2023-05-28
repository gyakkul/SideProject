// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GeometryCollection/ActorFactoryGeometryCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryGeometryCollection() {}
// Cross Module References
	GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UActorFactoryGeometryCollection();
	GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UActorFactoryGeometryCollection_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEditor();
// End Cross Module References
	void UActorFactoryGeometryCollection::StaticRegisterNativesUActorFactoryGeometryCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryGeometryCollection);
	UClass* Z_Construct_UClass_UActorFactoryGeometryCollection_NoRegister()
	{
		return UActorFactoryGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "GeometryCollection/ActorFactoryGeometryCollection.h" },
		{ "ModuleRelativePath", "Private/GeometryCollection/ActorFactoryGeometryCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryGeometryCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::ClassParams = {
		&UActorFactoryGeometryCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryGeometryCollection()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryGeometryCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryGeometryCollection.OuterSingleton, Z_Construct_UClass_UActorFactoryGeometryCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryGeometryCollection.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONEDITOR_API UClass* StaticClass<UActorFactoryGeometryCollection>()
	{
		return UActorFactoryGeometryCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryGeometryCollection);
	UActorFactoryGeometryCollection::~UActorFactoryGeometryCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryGeometryCollection, UActorFactoryGeometryCollection::StaticClass, TEXT("UActorFactoryGeometryCollection"), &Z_Registration_Info_UClass_UActorFactoryGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryGeometryCollection), 1752216075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_1683863778(TEXT("/Script/GeometryCollectionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Private_GeometryCollection_ActorFactoryGeometryCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
