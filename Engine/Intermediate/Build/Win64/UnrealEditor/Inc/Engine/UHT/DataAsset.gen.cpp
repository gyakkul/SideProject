// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDataAsset::StaticRegisterNativesUDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset);
	UClass* Z_Construct_UClass_UDataAsset_NoRegister()
	{
		return UDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NativeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Create a simple asset that stores data related to a particular system in an instance of this class.\n * Assets can be made in the Content Browser using any native class that inherits from this.\n * If you want data inheritance or a complicated hierarchy, Data Only Blueprint Classes should be created instead.\n */" },
		{ "IncludePath", "Engine/DataAsset.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
		{ "ToolTip", "Create a simple asset that stores data related to a particular system in an instance of this class.\nAssets can be made in the Content Browser using any native class that inherits from this.\nIf you want data inheritance or a complicated hierarchy, Data Only Blueprint Classes should be created instead." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass = { "NativeClass", nullptr, (EPropertyFlags)0x0044010000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataAsset, NativeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_Statics::ClassParams = {
		&UDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataAsset()
	{
		if (!Z_Registration_Info_UClass_UDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset.OuterSingleton, Z_Construct_UClass_UDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataAsset>()
	{
		return UDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset);
	UDataAsset::~UDataAsset() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FARCHIVE_SERIALIZER(UDataAsset)
#endif
	void UPrimaryDataAsset::StaticRegisterNativesUPrimaryDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimaryDataAsset);
	UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister()
	{
		return UPrimaryDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPrimaryDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBundleData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetBundleData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimaryDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A DataAsset that implements GetPrimaryAssetId and has asset bundle support, which allows it to be manually loaded/unloaded from the AssetManager.\n * Instances of native subclasses can be created directly as Data Assets and will use the name of the native class as the PrimaryAssetType.\n * Or, blueprint subclasses can be created with a PrimaryAssetType equal to the name of the first native class going up the hierarchy, or the highest level blueprint class.\n * IE, if you have UPrimaryDataAsset -> UParentNativeClass -> UChildNativeClass -> DataOnlyBlueprintClass the type will be ChildNativeClass.\n * Whereas if you have UPrimaryDataAsset -> ParentBlueprintClass -> DataOnlyBlueprintClass the type will be ParentBlueprintClass.\n * To change this behavior, override GetPrimaryAssetId in your native class or copy those functions into a different native base class.\n */" },
		{ "IncludePath", "Engine/DataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
		{ "ToolTip", "A DataAsset that implements GetPrimaryAssetId and has asset bundle support, which allows it to be manually loaded/unloaded from the AssetManager.\nInstances of native subclasses can be created directly as Data Assets and will use the name of the native class as the PrimaryAssetType.\nOr, blueprint subclasses can be created with a PrimaryAssetType equal to the name of the first native class going up the hierarchy, or the highest level blueprint class.\nIE, if you have UPrimaryDataAsset -> UParentNativeClass -> UChildNativeClass -> DataOnlyBlueprintClass the type will be ChildNativeClass.\nWhereas if you have UPrimaryDataAsset -> ParentBlueprintClass -> DataOnlyBlueprintClass the type will be ParentBlueprintClass.\nTo change this behavior, override GetPrimaryAssetId in your native class or copy those functions into a different native base class." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData_MetaData[] = {
		{ "Comment", "/** Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry */" },
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
		{ "ToolTip", "Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData = { "AssetBundleData", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimaryDataAsset, AssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimaryDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryDataAsset_Statics::ClassParams = {
		&UPrimaryDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPrimaryDataAsset_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryDataAsset_Statics::PropPointers), 0),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimaryDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimaryDataAsset()
	{
		if (!Z_Registration_Info_UClass_UPrimaryDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimaryDataAsset.OuterSingleton, Z_Construct_UClass_UPrimaryDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPrimaryDataAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPrimaryDataAsset>()
	{
		return UPrimaryDataAsset::StaticClass();
	}
	UPrimaryDataAsset::UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryDataAsset);
	UPrimaryDataAsset::~UPrimaryDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset, UDataAsset::StaticClass, TEXT("UDataAsset"), &Z_Registration_Info_UClass_UDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset), 3982977438U) },
		{ Z_Construct_UClass_UPrimaryDataAsset, UPrimaryDataAsset::StaticClass, TEXT("UPrimaryDataAsset"), &Z_Registration_Info_UClass_UPrimaryDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimaryDataAsset), 3717189875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_3358670122(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
