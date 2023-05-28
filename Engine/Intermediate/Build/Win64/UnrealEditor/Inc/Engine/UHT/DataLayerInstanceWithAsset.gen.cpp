// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstanceWithAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDataLayerInstanceWithAsset::StaticRegisterNativesUDataLayerInstanceWithAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerInstanceWithAsset);
	UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister()
	{
		return UDataLayerInstanceWithAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataLayerInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset = { "DataLayerAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerInstanceWithAsset, DataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerInstanceWithAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::ClassParams = {
		&UDataLayerInstanceWithAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers),
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset()
	{
		if (!Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton, Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataLayerInstanceWithAsset>()
	{
		return UDataLayerInstanceWithAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerInstanceWithAsset);
	UDataLayerInstanceWithAsset::~UDataLayerInstanceWithAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerInstanceWithAsset, UDataLayerInstanceWithAsset::StaticClass, TEXT("UDataLayerInstanceWithAsset"), &Z_Registration_Info_UClass_UDataLayerInstanceWithAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerInstanceWithAsset), 3161128073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_1262473379(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
