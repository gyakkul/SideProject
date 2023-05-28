// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/ActorInMapFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorInMapFilter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorInMapFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorInMapFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorSelectorFilter();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	void UActorInMapFilter::StaticRegisterNativesUActorInMapFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorInMapFilter);
	UClass* Z_Construct_UClass_UActorInMapFilter_NoRegister()
	{
		return UActorInMapFilter::StaticClass();
	}
	struct Z_Construct_UClass_UActorInMapFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AllowedLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorInMapFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSelectorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorInMapFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Allows an actor if it belongs to the specified map. */" },
		{ "CommonSnapshotFilter", "" },
		{ "IncludePath", "Builtin/ActorInMapFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/ActorInMapFilter.h" },
		{ "ToolTip", "Allows an actor if it belongs to the specified map." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels_Inner = { "AllowedLevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 * Only actors belonging to this Level are considered.\n\x09 * If since the snapshot was taken:\n\x09 *  1. an actor was modified, it is only allowed if it was in one of these levels\n\x09 *  2. an actor was added, it is only added back if it was in one of these levels\n\x09 */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorInMapFilter.h" },
		{ "ToolTip", "Only actors belonging to this Level are considered.\nIf since the snapshot was taken:\n 1. an actor was modified, it is only allowed if it was in one of these levels\n 2. an actor was added, it is only added back if it was in one of these levels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels = { "AllowedLevels", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorInMapFilter, AllowedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorInMapFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorInMapFilter_Statics::NewProp_AllowedLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorInMapFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorInMapFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorInMapFilter_Statics::ClassParams = {
		&UActorInMapFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorInMapFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorInMapFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorInMapFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorInMapFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorInMapFilter()
	{
		if (!Z_Registration_Info_UClass_UActorInMapFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorInMapFilter.OuterSingleton, Z_Construct_UClass_UActorInMapFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorInMapFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UActorInMapFilter>()
	{
		return UActorInMapFilter::StaticClass();
	}
	UActorInMapFilter::UActorInMapFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorInMapFilter);
	UActorInMapFilter::~UActorInMapFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorInMapFilter, UActorInMapFilter::StaticClass, TEXT("UActorInMapFilter"), &Z_Registration_Info_UClass_UActorInMapFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorInMapFilter), 3658453170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_779053965(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
