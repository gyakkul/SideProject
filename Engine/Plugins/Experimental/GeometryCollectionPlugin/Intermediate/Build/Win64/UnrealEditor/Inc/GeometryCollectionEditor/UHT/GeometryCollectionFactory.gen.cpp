// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionFactory() {}
// Cross Module References
	GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UGeometryCollectionFactory();
	GEOMETRYCOLLECTIONEDITOR_API UClass* Z_Construct_UClass_UGeometryCollectionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEditor();
// End Cross Module References
	void UGeometryCollectionFactory::StaticRegisterNativesUGeometryCollectionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionFactory);
	UClass* Z_Construct_UClass_UGeometryCollectionFactory_NoRegister()
	{
		return UGeometryCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Factory for Simple Cube\n*/" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionFactory.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionFactory.h" },
		{ "ToolTip", "Factory for Simple Cube" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionFactory_Statics::ClassParams = {
		&UGeometryCollectionFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionFactory()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollectionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionFactory.OuterSingleton, Z_Construct_UClass_UGeometryCollectionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollectionFactory.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONEDITOR_API UClass* StaticClass<UGeometryCollectionFactory>()
	{
		return UGeometryCollectionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionFactory);
	UGeometryCollectionFactory::~UGeometryCollectionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionFactory, UGeometryCollectionFactory::StaticClass, TEXT("UGeometryCollectionFactory"), &Z_Registration_Info_UClass_UGeometryCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionFactory), 2701972787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_4144036894(TEXT("/Script/GeometryCollectionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionEditor_Public_GeometryCollection_GeometryCollectionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
