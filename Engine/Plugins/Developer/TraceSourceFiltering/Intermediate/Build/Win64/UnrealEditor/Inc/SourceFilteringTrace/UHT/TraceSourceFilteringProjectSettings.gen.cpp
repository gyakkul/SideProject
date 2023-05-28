// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraceSourceFilteringProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceSourceFilteringProjectSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter_NoRegister();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_USourceFilterCollection_NoRegister();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UTraceSourceFilteringProjectSettings();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UTraceSourceFilteringProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringTrace();
// End Cross Module References
	void UTraceSourceFilteringProjectSettings::StaticRegisterNativesUTraceSourceFilteringProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceSourceFilteringProjectSettings);
	UClass* Z_Construct_UClass_UTraceSourceFilteringProjectSettings_NoRegister()
	{
		return UTraceSourceFilteringProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CookedSourceFilterClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedSourceFilterClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedSourceFilterClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilterPreset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultFilterPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Trace Source Filtering" },
		{ "IncludePath", "TraceSourceFilteringProjectSettings.h" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses_Inner = { "CookedSourceFilterClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataSourceFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses_MetaData[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "DisplayName", "Source Filter Classes, which should be incorporated into the cook" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringProjectSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses = { "CookedSourceFilterClasses", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTraceSourceFilteringProjectSettings, CookedSourceFilterClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_DefaultFilterPreset_MetaData[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "DisplayName", "Default Filter preset, which should be loaded during boot" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringProjectSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_DefaultFilterPreset = { "DefaultFilterPreset", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTraceSourceFilteringProjectSettings, DefaultFilterPreset), Z_Construct_UClass_USourceFilterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_DefaultFilterPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_DefaultFilterPreset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_CookedSourceFilterClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::NewProp_DefaultFilterPreset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceSourceFilteringProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::ClassParams = {
		&UTraceSourceFilteringProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTraceSourceFilteringProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UTraceSourceFilteringProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceSourceFilteringProjectSettings.OuterSingleton, Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceSourceFilteringProjectSettings.OuterSingleton;
	}
	template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<UTraceSourceFilteringProjectSettings>()
	{
		return UTraceSourceFilteringProjectSettings::StaticClass();
	}
	UTraceSourceFilteringProjectSettings::UTraceSourceFilteringProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceSourceFilteringProjectSettings);
	UTraceSourceFilteringProjectSettings::~UTraceSourceFilteringProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceSourceFilteringProjectSettings, UTraceSourceFilteringProjectSettings::StaticClass, TEXT("UTraceSourceFilteringProjectSettings"), &Z_Registration_Info_UClass_UTraceSourceFilteringProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceSourceFilteringProjectSettings), 628330518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_1738276327(TEXT("/Script/SourceFilteringTrace"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
