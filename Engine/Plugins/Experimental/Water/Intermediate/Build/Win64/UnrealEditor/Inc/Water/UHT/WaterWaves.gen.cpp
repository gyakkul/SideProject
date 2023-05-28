// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterWaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterWaves() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterWaves();
	WATER_API UClass* Z_Construct_UClass_UWaterWaves_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesAsset();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesAsset_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesAssetReference();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesAssetReference_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesBase();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesBase_NoRegister();
// End Cross Module References
	void UWaterWavesBase::StaticRegisterNativesUWaterWavesBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterWavesBase);
	UClass* Z_Construct_UClass_UWaterWavesBase_NoRegister()
	{
		return UWaterWavesBase::StaticClass();
	}
	struct Z_Construct_UClass_UWaterWavesBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterWavesBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWavesBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterWaves.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WaterWaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterWavesBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterWavesBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterWavesBase_Statics::ClassParams = {
		&UWaterWavesBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterWavesBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterWavesBase()
	{
		if (!Z_Registration_Info_UClass_UWaterWavesBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterWavesBase.OuterSingleton, Z_Construct_UClass_UWaterWavesBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterWavesBase.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterWavesBase>()
	{
		return UWaterWavesBase::StaticClass();
	}
	UWaterWavesBase::UWaterWavesBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterWavesBase);
	UWaterWavesBase::~UWaterWavesBase() {}
	void UWaterWaves::StaticRegisterNativesUWaterWaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterWaves);
	UClass* Z_Construct_UClass_UWaterWaves_NoRegister()
	{
		return UWaterWaves::StaticClass();
	}
	struct Z_Construct_UClass_UWaterWaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterWaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterWavesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterWaves.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WaterWaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterWaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterWaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterWaves_Statics::ClassParams = {
		&UWaterWaves::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterWaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterWaves()
	{
		if (!Z_Registration_Info_UClass_UWaterWaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterWaves.OuterSingleton, Z_Construct_UClass_UWaterWaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterWaves.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterWaves>()
	{
		return UWaterWaves::StaticClass();
	}
	UWaterWaves::UWaterWaves(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterWaves);
	UWaterWaves::~UWaterWaves() {}
	void UWaterWavesAsset::StaticRegisterNativesUWaterWavesAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterWavesAsset);
	UClass* Z_Construct_UClass_UWaterWavesAsset_NoRegister()
	{
		return UWaterWavesAsset::StaticClass();
	}
	struct Z_Construct_UClass_UWaterWavesAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterWaves_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterWavesAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWavesAsset_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Water Waves" },
		{ "IncludePath", "WaterWaves.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WaterWaves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWavesAsset_Statics::NewProp_WaterWaves_MetaData[] = {
		{ "Category", "Water Waves" },
		{ "DisplayName", "Waves Source" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterWavesAsset_Statics::NewProp_WaterWaves = { "WaterWaves", nullptr, (EPropertyFlags)0x0046000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterWavesAsset, WaterWaves), Z_Construct_UClass_UWaterWaves_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterWavesAsset_Statics::NewProp_WaterWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAsset_Statics::NewProp_WaterWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterWavesAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterWavesAsset_Statics::NewProp_WaterWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterWavesAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterWavesAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterWavesAsset_Statics::ClassParams = {
		&UWaterWavesAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterWavesAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterWavesAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterWavesAsset()
	{
		if (!Z_Registration_Info_UClass_UWaterWavesAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterWavesAsset.OuterSingleton, Z_Construct_UClass_UWaterWavesAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterWavesAsset.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterWavesAsset>()
	{
		return UWaterWavesAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterWavesAsset);
	UWaterWavesAsset::~UWaterWavesAsset() {}
	void UWaterWavesAssetReference::StaticRegisterNativesUWaterWavesAssetReference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterWavesAssetReference);
	UClass* Z_Construct_UClass_UWaterWavesAssetReference_NoRegister()
	{
		return UWaterWavesAssetReference::StaticClass();
	}
	struct Z_Construct_UClass_UWaterWavesAssetReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterWavesAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterWavesAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterWavesAssetReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterWavesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWavesAssetReference_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Water Waves Asset" },
		{ "IncludePath", "WaterWaves.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WaterWaves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWavesAssetReference_Statics::NewProp_WaterWavesAsset_MetaData[] = {
		{ "Category", "Water Waves Asset" },
		{ "ModuleRelativePath", "Public/WaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterWavesAssetReference_Statics::NewProp_WaterWavesAsset = { "WaterWavesAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterWavesAssetReference, WaterWavesAsset), Z_Construct_UClass_UWaterWavesAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterWavesAssetReference_Statics::NewProp_WaterWavesAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAssetReference_Statics::NewProp_WaterWavesAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterWavesAssetReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterWavesAssetReference_Statics::NewProp_WaterWavesAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterWavesAssetReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterWavesAssetReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterWavesAssetReference_Statics::ClassParams = {
		&UWaterWavesAssetReference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterWavesAssetReference_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAssetReference_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterWavesAssetReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAssetReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterWavesAssetReference()
	{
		if (!Z_Registration_Info_UClass_UWaterWavesAssetReference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterWavesAssetReference.OuterSingleton, Z_Construct_UClass_UWaterWavesAssetReference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterWavesAssetReference.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterWavesAssetReference>()
	{
		return UWaterWavesAssetReference::StaticClass();
	}
	UWaterWavesAssetReference::UWaterWavesAssetReference(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterWavesAssetReference);
	UWaterWavesAssetReference::~UWaterWavesAssetReference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterWaves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterWaves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterWavesBase, UWaterWavesBase::StaticClass, TEXT("UWaterWavesBase"), &Z_Registration_Info_UClass_UWaterWavesBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterWavesBase), 2114351938U) },
		{ Z_Construct_UClass_UWaterWaves, UWaterWaves::StaticClass, TEXT("UWaterWaves"), &Z_Registration_Info_UClass_UWaterWaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterWaves), 675779447U) },
		{ Z_Construct_UClass_UWaterWavesAsset, UWaterWavesAsset::StaticClass, TEXT("UWaterWavesAsset"), &Z_Registration_Info_UClass_UWaterWavesAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterWavesAsset), 3802877677U) },
		{ Z_Construct_UClass_UWaterWavesAssetReference, UWaterWavesAssetReference::StaticClass, TEXT("UWaterWavesAssetReference"), &Z_Registration_Info_UClass_UWaterWavesAssetReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterWavesAssetReference), 3295120139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterWaves_h_3473158939(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterWaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterWaves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
