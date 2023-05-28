// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/SDataProviderActivityFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDataProviderActivityFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	STAGEMONITOREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings();
	UPackage* Z_Construct_UPackage__Script_StageMonitorEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings;
class UScriptStruct* FDataProviderActivityFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings, (UObject*)Z_Construct_UPackage__Script_StageMonitorEditor(), TEXT("DataProviderActivityFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings.OuterSingleton;
}
template<> STAGEMONITOREDITOR_API UScriptStruct* StaticStruct<FDataProviderActivityFilterSettings>()
{
	return FDataProviderActivityFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExistingPeriodicTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExistingPeriodicTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExistingPeriodicTypes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RestrictedTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RestrictedProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedProviders;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RestrictedRoles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedRoles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedRoles;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RestrictedSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCriticalStateFilter_MetaData[];
#endif
		static void NewProp_bEnableCriticalStateFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCriticalStateFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTimeFilter_MetaData[];
#endif
		static void NewProp_bEnableTimeFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTimeFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMessageAgeInMinutes_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxMessageAgeInMinutes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Filter settings used live and also load/saved to ini config */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Filter settings used live and also load/saved to ini config" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataProviderActivityFilterSettings>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes_Inner = { "ExistingPeriodicTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes_MetaData[] = {
		{ "Comment", "/** \n\x09 * Periodic message structure type. \n\x09 * Used to detect new types that would be filtered out automatically\n\x09 */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Periodic message structure type.\nUsed to detect new types that would be filtered out automatically" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes = { "ExistingPeriodicTypes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataProviderActivityFilterSettings, ExistingPeriodicTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes_Inner = { "RestrictedTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes_MetaData[] = {
		{ "Comment", "/** Message types that are filtered */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Message types that are filtered" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes = { "RestrictedTypes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataProviderActivityFilterSettings, RestrictedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders_Inner = { "RestrictedProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders_MetaData[] = {
		{ "Comment", "/** Providers that are filtered using their friendly name */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Providers that are filtered using their friendly name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders = { "RestrictedProviders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataProviderActivityFilterSettings, RestrictedProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles_Inner = { "RestrictedRoles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles_MetaData[] = {
		{ "Comment", "/** Roles that are filtered using their friendly name */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Roles that are filtered using their friendly name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles = { "RestrictedRoles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataProviderActivityFilterSettings, RestrictedRoles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources_Inner = { "RestrictedSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources_MetaData[] = {
		{ "Comment", "/** Critical state sources that are filtered */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Critical state sources that are filtered" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources = { "RestrictedSources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataProviderActivityFilterSettings, RestrictedSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter_MetaData[] = {
		{ "Comment", "/** Global critical state filter state */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Global critical state filter state" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter_SetBit(void* Obj)
	{
		((FDataProviderActivityFilterSettings*)Obj)->bEnableCriticalStateFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter = { "bEnableCriticalStateFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataProviderActivityFilterSettings), &Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter_MetaData[] = {
		{ "Comment", "/** Should time filtering (timecode age) be enabled */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "Should time filtering (timecode age) be enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter_SetBit(void* Obj)
	{
		((FDataProviderActivityFilterSettings*)Obj)->bEnableTimeFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter = { "bEnableTimeFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataProviderActivityFilterSettings), &Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_MaxMessageAgeInMinutes_MetaData[] = {
		{ "Comment", "/** How far back in time should we display messages */" },
		{ "ModuleRelativePath", "Private/Widgets/SDataProviderActivityFilter.h" },
		{ "ToolTip", "How far back in time should we display messages" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_MaxMessageAgeInMinutes = { "MaxMessageAgeInMinutes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataProviderActivityFilterSettings, MaxMessageAgeInMinutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_MaxMessageAgeInMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_MaxMessageAgeInMinutes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_ExistingPeriodicTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedProviders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedRoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_RestrictedSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableCriticalStateFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_bEnableTimeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewProp_MaxMessageAgeInMinutes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorEditor,
		nullptr,
		&NewStructOps,
		"DataProviderActivityFilterSettings",
		sizeof(FDataProviderActivityFilterSettings),
		alignof(FDataProviderActivityFilterSettings),
		Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_Widgets_SDataProviderActivityFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_Widgets_SDataProviderActivityFilter_h_Statics::ScriptStructInfo[] = {
		{ FDataProviderActivityFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FDataProviderActivityFilterSettings_Statics::NewStructOps, TEXT("DataProviderActivityFilterSettings"), &Z_Registration_Info_UScriptStruct_DataProviderActivityFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataProviderActivityFilterSettings), 2929118278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_Widgets_SDataProviderActivityFilter_h_3981743408(TEXT("/Script/StageMonitorEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_Widgets_SDataProviderActivityFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_Widgets_SDataProviderActivityFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
