// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmptySourceFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptySourceFilter() {}
// Cross Module References
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UEmptySourceFilter();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UEmptySourceFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringTrace();
// End Cross Module References
	void UEmptySourceFilter::StaticRegisterNativesUEmptySourceFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEmptySourceFilter);
	UClass* Z_Construct_UClass_UEmptySourceFilter_NoRegister()
	{
		return UEmptySourceFilter::StaticClass();
	}
	struct Z_Construct_UClass_UEmptySourceFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissingClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MissingClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmptySourceFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataSourceFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmptySourceFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Source filter implementation used to replace filter instance who's UClass is not loaded and or does not exist, primarily used by Filter Preset loading */" },
		{ "IncludePath", "EmptySourceFilter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EmptySourceFilter.h" },
		{ "ToolTip", "Source filter implementation used to replace filter instance who's UClass is not loaded and or does not exist, primarily used by Filter Preset loading" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmptySourceFilter_Statics::NewProp_MissingClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmptySourceFilter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmptySourceFilter_Statics::NewProp_MissingClassName = { "MissingClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEmptySourceFilter, MissingClassName), METADATA_PARAMS(Z_Construct_UClass_UEmptySourceFilter_Statics::NewProp_MissingClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmptySourceFilter_Statics::NewProp_MissingClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEmptySourceFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmptySourceFilter_Statics::NewProp_MissingClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmptySourceFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmptySourceFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEmptySourceFilter_Statics::ClassParams = {
		&UEmptySourceFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEmptySourceFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEmptySourceFilter_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEmptySourceFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmptySourceFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmptySourceFilter()
	{
		if (!Z_Registration_Info_UClass_UEmptySourceFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEmptySourceFilter.OuterSingleton, Z_Construct_UClass_UEmptySourceFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEmptySourceFilter.OuterSingleton;
	}
	template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<UEmptySourceFilter>()
	{
		return UEmptySourceFilter::StaticClass();
	}
	UEmptySourceFilter::UEmptySourceFilter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmptySourceFilter);
	UEmptySourceFilter::~UEmptySourceFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEmptySourceFilter, UEmptySourceFilter::StaticClass, TEXT("UEmptySourceFilter"), &Z_Registration_Info_UClass_UEmptySourceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEmptySourceFilter), 837194358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_3104320713(TEXT("/Script/SourceFilteringTrace"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
