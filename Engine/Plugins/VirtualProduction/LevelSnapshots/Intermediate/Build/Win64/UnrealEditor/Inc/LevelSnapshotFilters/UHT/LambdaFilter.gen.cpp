// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/LambdaFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLambdaFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULambdaFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULambdaFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	void ULambdaFilter::StaticRegisterNativesULambdaFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULambdaFilter);
	UClass* Z_Construct_UClass_ULambdaFilter_NoRegister()
	{
		return ULambdaFilter::StaticClass();
	}
	struct Z_Construct_UClass_ULambdaFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULambdaFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULambdaFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility filter for native C++ filters.\n */" },
		{ "IncludePath", "Builtin/LambdaFilter.h" },
		{ "InternalSnapshotFilter", "" },
		{ "ModuleRelativePath", "Public/Builtin/LambdaFilter.h" },
		{ "ToolTip", "Utility filter for native C++ filters." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULambdaFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULambdaFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULambdaFilter_Statics::ClassParams = {
		&ULambdaFilter::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULambdaFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULambdaFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULambdaFilter()
	{
		if (!Z_Registration_Info_UClass_ULambdaFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULambdaFilter.OuterSingleton, Z_Construct_UClass_ULambdaFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULambdaFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<ULambdaFilter>()
	{
		return ULambdaFilter::StaticClass();
	}
	ULambdaFilter::ULambdaFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULambdaFilter);
	ULambdaFilter::~ULambdaFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_LambdaFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_LambdaFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULambdaFilter, ULambdaFilter::StaticClass, TEXT("ULambdaFilter"), &Z_Registration_Info_UClass_ULambdaFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULambdaFilter), 1350755470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_LambdaFilter_h_1238645973(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_LambdaFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_LambdaFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
