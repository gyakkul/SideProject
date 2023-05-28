// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/BlueprintOnly/OrFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UOrFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UOrFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UParentFilter();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	void UOrFilter::StaticRegisterNativesUOrFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrFilter);
	UClass* Z_Construct_UClass_UOrFilter_NoRegister()
	{
		return UOrFilter::StaticClass();
	}
	struct Z_Construct_UClass_UOrFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParentFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builtin/BlueprintOnly/OrFilter.h" },
		{ "InternalSnapshotFilter", "" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/OrFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrFilter_Statics::ClassParams = {
		&UOrFilter::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOrFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrFilter()
	{
		if (!Z_Registration_Info_UClass_UOrFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrFilter.OuterSingleton, Z_Construct_UClass_UOrFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UOrFilter>()
	{
		return UOrFilter::StaticClass();
	}
	UOrFilter::UOrFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrFilter);
	UOrFilter::~UOrFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_OrFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_OrFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrFilter, UOrFilter::StaticClass, TEXT("UOrFilter"), &Z_Registration_Info_UClass_UOrFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrFilter), 4139585563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_OrFilter_h_1783321461(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_OrFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_OrFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
