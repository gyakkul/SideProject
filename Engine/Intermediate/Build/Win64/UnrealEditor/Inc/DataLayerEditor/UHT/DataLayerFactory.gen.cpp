// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataLayer/DataLayerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerFactory() {}
// Cross Module References
	DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerFactory();
	DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DataLayerEditor();
// End Cross Module References
	void UDataLayerFactory::StaticRegisterNativesUDataLayerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerFactory);
	UClass* Z_Construct_UClass_UDataLayerFactory_NoRegister()
	{
		return UDataLayerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DataLayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "DataLayer/DataLayerFactory.h" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerFactory_Statics::ClassParams = {
		&UDataLayerFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerFactory()
	{
		if (!Z_Registration_Info_UClass_UDataLayerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerFactory.OuterSingleton, Z_Construct_UClass_UDataLayerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerFactory.OuterSingleton;
	}
	template<> DATALAYEREDITOR_API UClass* StaticClass<UDataLayerFactory>()
	{
		return UDataLayerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerFactory);
	UDataLayerFactory::~UDataLayerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerFactory, UDataLayerFactory::StaticClass, TEXT("UDataLayerFactory"), &Z_Registration_Info_UClass_UDataLayerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerFactory), 1750818001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_3531257646(TEXT("/Script/DataLayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
