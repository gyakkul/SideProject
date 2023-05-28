// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PlacementPaletteAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementPaletteAsset() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteAsset();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteAsset_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteAssetFactory();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteAssetFactory_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteClient_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementPaletteAsset::StaticRegisterNativesUPlacementPaletteAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementPaletteAsset);
	UClass* Z_Construct_UClass_UPlacementPaletteAsset_NoRegister()
	{
		return UPlacementPaletteAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementPaletteAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaletteItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaletteItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementPaletteAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlacementPaletteAsset.h" },
		{ "ModuleRelativePath", "Private/PlacementPaletteAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems_Inner = { "PaletteItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlacementPaletteClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Private/PlacementPaletteAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems = { "PaletteItems", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementPaletteAsset, PaletteItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_GridGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlacementPaletteAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_GridGuid = { "GridGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementPaletteAsset, GridGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_GridGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_GridGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementPaletteAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_PaletteItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteAsset_Statics::NewProp_GridGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementPaletteAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementPaletteAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementPaletteAsset_Statics::ClassParams = {
		&UPlacementPaletteAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlacementPaletteAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteAsset_Statics::PropPointers),
		0,
		0x000002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementPaletteAsset()
	{
		if (!Z_Registration_Info_UClass_UPlacementPaletteAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementPaletteAsset.OuterSingleton, Z_Construct_UClass_UPlacementPaletteAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementPaletteAsset.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementPaletteAsset>()
	{
		return UPlacementPaletteAsset::StaticClass();
	}
	UPlacementPaletteAsset::UPlacementPaletteAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementPaletteAsset);
	UPlacementPaletteAsset::~UPlacementPaletteAsset() {}
	void UPlacementPaletteAssetFactory::StaticRegisterNativesUPlacementPaletteAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementPaletteAssetFactory);
	UClass* Z_Construct_UClass_UPlacementPaletteAssetFactory_NoRegister()
	{
		return UPlacementPaletteAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlacementPaletteAsset.h" },
		{ "ModuleRelativePath", "Private/PlacementPaletteAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementPaletteAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::ClassParams = {
		&UPlacementPaletteAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementPaletteAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UPlacementPaletteAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementPaletteAssetFactory.OuterSingleton, Z_Construct_UClass_UPlacementPaletteAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementPaletteAssetFactory.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementPaletteAssetFactory>()
	{
		return UPlacementPaletteAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementPaletteAssetFactory);
	UPlacementPaletteAssetFactory::~UPlacementPaletteAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementPaletteAsset, UPlacementPaletteAsset::StaticClass, TEXT("UPlacementPaletteAsset"), &Z_Registration_Info_UClass_UPlacementPaletteAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementPaletteAsset), 854069334U) },
		{ Z_Construct_UClass_UPlacementPaletteAssetFactory, UPlacementPaletteAssetFactory::StaticClass, TEXT("UPlacementPaletteAssetFactory"), &Z_Registration_Info_UClass_UPlacementPaletteAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementPaletteAssetFactory), 2276656761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteAsset_h_1985826960(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
