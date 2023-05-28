// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UNetObjectFilterConfig::StaticRegisterNativesUNetObjectFilterConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilterConfig);
	UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister()
	{
		return UNetObjectFilterConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectFilterConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectFilterConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for filter specific configuration.\n * @see FNetObjectFilterDefinition\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ToolTip", "Base class for filter specific configuration.\n@see FNetObjectFilterDefinition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectFilterConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilterConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams = {
		&UNetObjectFilterConfig::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectFilterConfig()
	{
		if (!Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectFilterConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectFilterConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectFilterConfig>()
	{
		return UNetObjectFilterConfig::StaticClass();
	}
	UNetObjectFilterConfig::UNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilterConfig);
	UNetObjectFilterConfig::~UNetObjectFilterConfig() {}
	void UNetObjectFilter::StaticRegisterNativesUNetObjectFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilter);
	UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister()
	{
		return UNetObjectFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams = {
		&UNetObjectFilter::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectFilter()
	{
		if (!Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton, Z_Construct_UClass_UNetObjectFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectFilter.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectFilter>()
	{
		return UNetObjectFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilter);
	UNetObjectFilter::~UNetObjectFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectFilterConfig, UNetObjectFilterConfig::StaticClass, TEXT("UNetObjectFilterConfig"), &Z_Registration_Info_UClass_UNetObjectFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilterConfig), 1708035189U) },
		{ Z_Construct_UClass_UNetObjectFilter, UNetObjectFilter::StaticClass, TEXT("UNetObjectFilter"), &Z_Registration_Info_UClass_UNetObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilter), 1698716666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_943661299(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
