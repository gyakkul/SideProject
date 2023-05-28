// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/DataAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAssetFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UDataAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDataAssetFactory::StaticRegisterNativesUDataAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAssetFactory);
	UClass* Z_Construct_UClass_UDataAssetFactory_NoRegister()
	{
		return UDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataAssetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DataAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DataAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass_MetaData[] = {
		{ "Category", "DataAsset" },
		{ "ModuleRelativePath", "Classes/Factories/DataAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass = { "DataAssetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataAssetFactory, DataAssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAssetFactory_Statics::NewProp_DataAssetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAssetFactory_Statics::ClassParams = {
		&UDataAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UDataAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAssetFactory.OuterSingleton, Z_Construct_UClass_UDataAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataAssetFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDataAssetFactory>()
	{
		return UDataAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAssetFactory);
	UDataAssetFactory::~UDataAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataAssetFactory, UDataAssetFactory::StaticClass, TEXT("UDataAssetFactory"), &Z_Registration_Info_UClass_UDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAssetFactory), 3120703133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_2488367198(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
