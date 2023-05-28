// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetToolsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetToolsSettings() {}
// Cross Module References
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsSettings();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsSettings_NoRegister();
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyMap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvancedCopyMap;
class UScriptStruct* FAdvancedCopyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvancedCopyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvancedCopyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvancedCopyMap, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("AdvancedCopyMap"));
	}
	return Z_Registration_Info_UScriptStruct_AdvancedCopyMap.OuterSingleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FAdvancedCopyMap>()
{
	return FAdvancedCopyMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassToCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedCopyCustomization_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedCopyCustomization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvancedCopyMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy_MetaData[] = {
		{ "Category", "Asset Tools" },
		{ "Comment", "/** When copying this class, use a particular set of dependency and destination rules */" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
		{ "ToolTip", "When copying this class, use a particular set of dependency and destination rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy = { "ClassToCopy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdvancedCopyMap, ClassToCopy), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization_MetaData[] = {
		{ "Category", "Asset Tools" },
		{ "Comment", "/** The set of dependency and destination rules to use for advanced copy */" },
		{ "MetaClass", "/Script/AssetTools.AdvancedCopyCustomization" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
		{ "ToolTip", "The set of dependency and destination rules to use for advanced copy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization = { "AdvancedCopyCustomization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdvancedCopyMap, AdvancedCopyCustomization), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_ClassToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewProp_AdvancedCopyCustomization,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"AdvancedCopyMap",
		sizeof(FAdvancedCopyMap),
		alignof(FAdvancedCopyMap),
		Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyMap()
	{
		if (!Z_Registration_Info_UScriptStruct_AdvancedCopyMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvancedCopyMap.InnerSingleton, Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdvancedCopyMap.InnerSingleton;
	}
	void UAssetToolsSettings::StaticRegisterNativesUAssetToolsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetToolsSettings);
	UClass* Z_Construct_UClass_UAssetToolsSettings_NoRegister()
	{
		return UAssetToolsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetToolsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedCopyCustomizations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedCopyCustomizations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdvancedCopyCustomizations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetToolsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Tools" },
		{ "IncludePath", "AssetToolsSettings.h" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_Inner = { "AdvancedCopyCustomizations", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAdvancedCopyMap, METADATA_PARAMS(nullptr, 0) }; // 2600606743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_MetaData[] = {
		{ "Category", "Advanced Copy" },
		{ "Comment", "/** List of rules to use when advanced copying assets */" },
		{ "ModuleRelativePath", "Public/AssetToolsSettings.h" },
		{ "TitleProperty", "ClassToCopy" },
		{ "ToolTip", "List of rules to use when advanced copying assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations = { "AdvancedCopyCustomizations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetToolsSettings, AdvancedCopyCustomizations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_MetaData)) }; // 2600606743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetToolsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetToolsSettings_Statics::NewProp_AdvancedCopyCustomizations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetToolsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetToolsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetToolsSettings_Statics::ClassParams = {
		&UAssetToolsSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetToolsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetToolsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetToolsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetToolsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetToolsSettings()
	{
		if (!Z_Registration_Info_UClass_UAssetToolsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetToolsSettings.OuterSingleton, Z_Construct_UClass_UAssetToolsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetToolsSettings.OuterSingleton;
	}
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetToolsSettings>()
	{
		return UAssetToolsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetToolsSettings);
	UAssetToolsSettings::~UAssetToolsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics::ScriptStructInfo[] = {
		{ FAdvancedCopyMap::StaticStruct, Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics::NewStructOps, TEXT("AdvancedCopyMap"), &Z_Registration_Info_UScriptStruct_AdvancedCopyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvancedCopyMap), 2600606743U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetToolsSettings, UAssetToolsSettings::StaticClass, TEXT("UAssetToolsSettings"), &Z_Registration_Info_UClass_UAssetToolsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetToolsSettings), 3107945576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_3334766022(TEXT("/Script/AssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
