// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepGeometryFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepGeometryFilters() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilterNoFetcher();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepJacketingFilter();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepJacketingFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepGeometryOperations();
// End Cross Module References
	void UDataprepJacketingFilter::StaticRegisterNativesUDataprepJacketingFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepJacketingFilter);
	UClass* Z_Construct_UClass_UDataprepJacketingFilter_NoRegister()
	{
		return UDataprepJacketingFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepJacketingFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GapMaxDiameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GapMaxDiameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepJacketingFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFilterNoFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepJacketingFilter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Jacketing" },
		{ "HideCategories", "Filter" },
		{ "IncludePath", "DataprepGeometryFilters.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DataprepGeometryFilters.h" },
		{ "ToolTip", "Apply mesh jacketing to selected objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_VoxelPrecision_MetaData[] = {
		{ "Category", "JacketingFilter" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Accuracy of the distance field approximation, in cm. */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryFilters.h" },
		{ "ToolTip", "Accuracy of the distance field approximation, in cm." },
		{ "UIMax", "100" },
		{ "UIMin", "0.1" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_VoxelPrecision = { "VoxelPrecision", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepJacketingFilter, VoxelPrecision), METADATA_PARAMS(Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_VoxelPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_VoxelPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_GapMaxDiameter_MetaData[] = {
		{ "Category", "JacketingFilter" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Merge distance used to fill gap, in cm. */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryFilters.h" },
		{ "ToolTip", "Merge distance used to fill gap, in cm." },
		{ "UIMax", "100" },
		{ "UIMin", "0.1" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_GapMaxDiameter = { "GapMaxDiameter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepJacketingFilter, GapMaxDiameter), METADATA_PARAMS(Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_GapMaxDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_GapMaxDiameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepJacketingFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_VoxelPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepJacketingFilter_Statics::NewProp_GapMaxDiameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepJacketingFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepJacketingFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepJacketingFilter_Statics::ClassParams = {
		&UDataprepJacketingFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepJacketingFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepJacketingFilter_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepJacketingFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepJacketingFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepJacketingFilter()
	{
		if (!Z_Registration_Info_UClass_UDataprepJacketingFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepJacketingFilter.OuterSingleton, Z_Construct_UClass_UDataprepJacketingFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepJacketingFilter.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepJacketingFilter>()
	{
		return UDataprepJacketingFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepJacketingFilter);
	UDataprepJacketingFilter::~UDataprepJacketingFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryFilters_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryFilters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepJacketingFilter, UDataprepJacketingFilter::StaticClass, TEXT("UDataprepJacketingFilter"), &Z_Registration_Info_UClass_UDataprepJacketingFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepJacketingFilter), 1224063128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryFilters_h_3790544219(TEXT("/Script/DataprepGeometryOperations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryFilters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryFilters_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
