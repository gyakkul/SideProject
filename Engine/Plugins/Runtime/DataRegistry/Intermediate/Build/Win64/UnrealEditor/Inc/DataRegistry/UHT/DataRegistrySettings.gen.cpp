// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistrySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistrySettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySettings();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	void UDataRegistrySettings::StaticRegisterNativesUDataRegistrySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistrySettings);
	UClass* Z_Construct_UClass_UDataRegistrySettings_NoRegister()
	{
		return UDataRegistrySettings::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistrySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToScan_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToScan_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToScan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeAllLoadedRegistries_MetaData[];
#endif
		static void NewProp_bInitializeAllLoadedRegistries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeAllLoadedRegistries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMissingCookedAssetRegistryData_MetaData[];
#endif
		static void NewProp_bIgnoreMissingCookedAssetRegistryData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMissingCookedAssetRegistryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataRegistrySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Data Registry subsystem, these settings are used to scan for registry assets and set runtime access rules */" },
		{ "DisplayName", "Data Registry" },
		{ "IncludePath", "DataRegistrySettings.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySettings.h" },
		{ "ToolTip", "Settings for the Data Registry subsystem, these settings are used to scan for registry assets and set runtime access rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan_Inner = { "DirectoriesToScan", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan_MetaData[] = {
		{ "Category", "Data Registry" },
		{ "Comment", "/** List of directories to scan for data registry assets */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/DataRegistrySettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of directories to scan for data registry assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan = { "DirectoriesToScan", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySettings, DirectoriesToScan), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries_MetaData[] = {
		{ "Category", "Data Registry" },
		{ "Comment", "/** If false, only registry assets inside DirectoriesToScan will be initialized. If true, it will also initialize any in-memory DataRegistry assets outside the scan paths */" },
		{ "ModuleRelativePath", "Public/DataRegistrySettings.h" },
		{ "ToolTip", "If false, only registry assets inside DirectoriesToScan will be initialized. If true, it will also initialize any in-memory DataRegistry assets outside the scan paths" },
	};
#endif
	void Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries_SetBit(void* Obj)
	{
		((UDataRegistrySettings*)Obj)->bInitializeAllLoadedRegistries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries = { "bInitializeAllLoadedRegistries", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataRegistrySettings), &Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData_MetaData[] = {
		{ "Category", "Data Registry" },
		{ "Comment", "/** If true, cooked builds will ignore errors with missing AssetRegistry data for specific registered assets like DataTables as it may have been stripped out */" },
		{ "ModuleRelativePath", "Public/DataRegistrySettings.h" },
		{ "ToolTip", "If true, cooked builds will ignore errors with missing AssetRegistry data for specific registered assets like DataTables as it may have been stripped out" },
	};
#endif
	void Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData_SetBit(void* Obj)
	{
		((UDataRegistrySettings*)Obj)->bIgnoreMissingCookedAssetRegistryData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData = { "bIgnoreMissingCookedAssetRegistryData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataRegistrySettings), &Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataRegistrySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_DirectoriesToScan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bInitializeAllLoadedRegistries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySettings_Statics::NewProp_bIgnoreMissingCookedAssetRegistryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistrySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistrySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistrySettings_Statics::ClassParams = {
		&UDataRegistrySettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataRegistrySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistrySettings()
	{
		if (!Z_Registration_Info_UClass_UDataRegistrySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistrySettings.OuterSingleton, Z_Construct_UClass_UDataRegistrySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistrySettings.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UDataRegistrySettings>()
	{
		return UDataRegistrySettings::StaticClass();
	}
	UDataRegistrySettings::UDataRegistrySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistrySettings);
	UDataRegistrySettings::~UDataRegistrySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistrySettings, UDataRegistrySettings::StaticClass, TEXT("UDataRegistrySettings"), &Z_Registration_Info_UClass_UDataRegistrySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistrySettings), 2385307950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_1291140904(TEXT("/Script/DataRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
