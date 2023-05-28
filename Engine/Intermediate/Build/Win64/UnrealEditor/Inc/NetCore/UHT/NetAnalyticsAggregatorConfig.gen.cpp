// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Net/Core/Analytics/NetAnalyticsAggregatorConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetAnalyticsAggregatorConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NETCORE_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig();
	NETCORE_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig();
	UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig;
class UScriptStruct* FNetAnalyticsDataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("NetAnalyticsDataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FNetAnalyticsDataConfig>()
{
	return FNetAnalyticsDataConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for FNetAnalyticsData - enabling/disabling analytics data, based on DataName\n */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Configuration for FNetAnalyticsData - enabling/disabling analytics data, based on DataName" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetAnalyticsDataConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName_MetaData[] = {
		{ "Comment", "/** The name of the analytics data type (should match analytics stat name) */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "The name of the analytics data type (should match analytics stat name)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetAnalyticsDataConfig, DataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not the specified analytics data type, is enabled */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Whether or not the specified analytics data type, is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNetAnalyticsDataConfig*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetAnalyticsDataConfig), &Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		&NewStructOps,
		"NetAnalyticsDataConfig",
		sizeof(FNetAnalyticsDataConfig),
		alignof(FNetAnalyticsDataConfig),
		Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig.InnerSingleton;
	}
	void UNetAnalyticsAggregatorConfig::StaticRegisterNativesUNetAnalyticsAggregatorConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetAnalyticsAggregatorConfig);
	UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister()
	{
		return UNetAnalyticsAggregatorConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetAnalyticsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetAnalyticsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NetAnalyticsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for FNetAnalyticsAggregator - loaded PerObjectConfig, for each NetDriverName\n */" },
		{ "IncludePath", "Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Configuration for FNetAnalyticsAggregator - loaded PerObjectConfig, for each NetDriverName" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_Inner = { "NetAnalyticsData", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig, METADATA_PARAMS(nullptr, 0) }; // 1773573580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_MetaData[] = {
		{ "Comment", "/** Registers FNetAnalyticsData data holders, by DataName - and specifies whether they are enabled or disabled */" },
		{ "ModuleRelativePath", "Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Registers FNetAnalyticsData data holders, by DataName - and specifies whether they are enabled or disabled" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData = { "NetAnalyticsData", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetAnalyticsAggregatorConfig, NetAnalyticsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_MetaData)) }; // 1773573580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetAnalyticsAggregatorConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams = {
		&UNetAnalyticsAggregatorConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers),
		0,
		0x000004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig()
	{
		if (!Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton, Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton;
	}
	template<> NETCORE_API UClass* StaticClass<UNetAnalyticsAggregatorConfig>()
	{
		return UNetAnalyticsAggregatorConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetAnalyticsAggregatorConfig);
	UNetAnalyticsAggregatorConfig::~UNetAnalyticsAggregatorConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ScriptStructInfo[] = {
		{ FNetAnalyticsDataConfig::StaticStruct, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewStructOps, TEXT("NetAnalyticsDataConfig"), &Z_Registration_Info_UScriptStruct_NetAnalyticsDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetAnalyticsDataConfig), 1773573580U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetAnalyticsAggregatorConfig, UNetAnalyticsAggregatorConfig::StaticClass, TEXT("UNetAnalyticsAggregatorConfig"), &Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetAnalyticsAggregatorConfig), 11245697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_1968882577(TEXT("/Script/NetCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
