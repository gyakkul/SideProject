// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetImportData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAssetImportData();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAssetImportData_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UGroomAssetImportData::StaticRegisterNativesUGroomAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomAssetImportData);
	UClass* Z_Construct_UClass_UGroomAssetImportData_NoRegister()
	{
		return UGroomAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UGroomAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomAssetImportData.h" },
		{ "ModuleRelativePath", "Public/GroomAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAssetImportData_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAssetImportData_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAssetImportData, ImportOptions), Z_Construct_UClass_UGroomImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomAssetImportData_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAssetImportData_Statics::NewProp_ImportOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAssetImportData_Statics::NewProp_ImportOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomAssetImportData_Statics::ClassParams = {
		&UGroomAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAssetImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UGroomAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomAssetImportData.OuterSingleton, Z_Construct_UClass_UGroomAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomAssetImportData.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomAssetImportData>()
	{
		return UGroomAssetImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomAssetImportData);
	UGroomAssetImportData::~UGroomAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomAssetImportData, UGroomAssetImportData::StaticClass, TEXT("UGroomAssetImportData"), &Z_Registration_Info_UClass_UGroomAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomAssetImportData), 2237280537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_720019134(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
