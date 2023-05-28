// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/ConstantFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstantFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UConstantFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UConstantFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	void UConstantFilter::StaticRegisterNativesUConstantFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstantFilter);
	UClass* Z_Construct_UClass_UConstantFilter_NoRegister()
	{
		return UConstantFilter::StaticClass();
	}
	struct Z_Construct_UClass_UConstantFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActorValidResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IsActorValidResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPropertyValidResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IsPropertyValidResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDeletedActorValidResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IsDeletedActorValidResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAddedActorValidResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IsAddedActorValidResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstantFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Filter which treats all actors the same. */" },
		{ "IncludePath", "Builtin/ConstantFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/ConstantFilter.h" },
		{ "ToolTip", "Filter which treats all actors the same." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsActorValidResult_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "//~ End ULevelSnapshotFilter Interface\n" },
		{ "ModuleRelativePath", "Public/Builtin/ConstantFilter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsActorValidResult = { "IsActorValidResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantFilter, IsActorValidResult), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsActorValidResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsActorValidResult_MetaData)) }; // 3495860090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsPropertyValidResult_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Builtin/ConstantFilter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsPropertyValidResult = { "IsPropertyValidResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantFilter, IsPropertyValidResult), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsPropertyValidResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsPropertyValidResult_MetaData)) }; // 3495860090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsDeletedActorValidResult_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Builtin/ConstantFilter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsDeletedActorValidResult = { "IsDeletedActorValidResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantFilter, IsDeletedActorValidResult), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsDeletedActorValidResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsDeletedActorValidResult_MetaData)) }; // 3495860090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsAddedActorValidResult_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Builtin/ConstantFilter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsAddedActorValidResult = { "IsAddedActorValidResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantFilter, IsAddedActorValidResult), Z_Construct_UEnum_LevelSnapshotFilters_EFilterResult, METADATA_PARAMS(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsAddedActorValidResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsAddedActorValidResult_MetaData)) }; // 3495860090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstantFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsActorValidResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsPropertyValidResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsDeletedActorValidResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantFilter_Statics::NewProp_IsAddedActorValidResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstantFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstantFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstantFilter_Statics::ClassParams = {
		&UConstantFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstantFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstantFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstantFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstantFilter()
	{
		if (!Z_Registration_Info_UClass_UConstantFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstantFilter.OuterSingleton, Z_Construct_UClass_UConstantFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstantFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UConstantFilter>()
	{
		return UConstantFilter::StaticClass();
	}
	UConstantFilter::UConstantFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstantFilter);
	UConstantFilter::~UConstantFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConstantFilter, UConstantFilter::StaticClass, TEXT("UConstantFilter"), &Z_Registration_Info_UClass_UConstantFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstantFilter), 3039755591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_1834322724(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
