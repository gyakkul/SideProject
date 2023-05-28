// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/PropertySelector/PropertySelectorFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertySelectorFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotBlueprintFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertySelectorFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertySelectorFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	void UPropertySelectorFilter::StaticRegisterNativesUPropertySelectorFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertySelectorFilter);
	UClass* Z_Construct_UClass_UPropertySelectorFilter_NoRegister()
	{
		return UPropertySelectorFilter::StaticClass();
	}
	struct Z_Construct_UClass_UPropertySelectorFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertySelectorFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotBlueprintFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySelectorFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Base class for filters that only implement IsActorValid */" },
		{ "IncludePath", "Builtin/PropertySelector/PropertySelectorFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/PropertySelector/PropertySelectorFilter.h" },
		{ "ToolTip", "Base class for filters that only implement IsActorValid" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySelectorFilter_Statics::NewProp_DefaultResult_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09* What to return for IsActorValid, IsDeletedActorValid, and IsAddedActorValid\n\x09*/" },
		{ "ModuleRelativePath", "Public/Builtin/PropertySelector/PropertySelectorFilter.h" },
		{ "ToolTip", "What to return for IsActorValid, IsDeletedActorValid, and IsAddedActorValid" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertySelectorFilter_Statics::NewProp_DefaultResult = { "DefaultResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertySelectorFilter, DefaultResult), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UPropertySelectorFilter_Statics::NewProp_DefaultResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySelectorFilter_Statics::NewProp_DefaultResult_MetaData)) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertySelectorFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySelectorFilter_Statics::NewProp_DefaultResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertySelectorFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertySelectorFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertySelectorFilter_Statics::ClassParams = {
		&UPropertySelectorFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertySelectorFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySelectorFilter_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertySelectorFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySelectorFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertySelectorFilter()
	{
		if (!Z_Registration_Info_UClass_UPropertySelectorFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertySelectorFilter.OuterSingleton, Z_Construct_UClass_UPropertySelectorFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertySelectorFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UPropertySelectorFilter>()
	{
		return UPropertySelectorFilter::StaticClass();
	}
	UPropertySelectorFilter::UPropertySelectorFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertySelectorFilter);
	UPropertySelectorFilter::~UPropertySelectorFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertySelectorFilter, UPropertySelectorFilter::StaticClass, TEXT("UPropertySelectorFilter"), &Z_Registration_Info_UClass_UPropertySelectorFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertySelectorFilter), 305500002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_4126979126(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
