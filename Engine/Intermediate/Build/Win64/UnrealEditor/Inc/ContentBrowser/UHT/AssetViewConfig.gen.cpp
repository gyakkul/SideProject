// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetView/AssetViewConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetViewConfig() {}
// Cross Module References
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UAssetViewConfig();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UAssetViewConfig_NoRegister();
	CONTENTBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetViewInstanceConfig();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig;
class UScriptStruct* FAssetViewInstanceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetViewInstanceConfig, (UObject*)Z_Construct_UPackage__Script_ContentBrowser(), TEXT("AssetViewInstanceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig.OuterSingleton;
}
template<> CONTENTBROWSER_API UScriptStruct* StaticStruct<FAssetViewInstanceConfig>()
{
	return FAssetViewInstanceConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSize_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbnailSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HiddenColumns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenColumns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenColumns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AssetView/AssetViewConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetViewInstanceConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ThumbnailSize_MetaData[] = {
		{ "Comment", "/** \n\x09 * The current thumbnail size, as cast from EThumbnailSize, because that enum is not a UENUM.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AssetView/AssetViewConfig.h" },
		{ "ToolTip", "The current thumbnail size, as cast from EThumbnailSize, because that enum is not a UENUM." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ThumbnailSize = { "ThumbnailSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetViewInstanceConfig, ThumbnailSize), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ThumbnailSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ThumbnailSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ViewType_MetaData[] = {
		{ "Comment", "/** \n\x09 * The current thumbnail size, as cast from EAssetViewType, because that enum is not a UENUM.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AssetView/AssetViewConfig.h" },
		{ "ToolTip", "The current thumbnail size, as cast from EAssetViewType, because that enum is not a UENUM." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ViewType = { "ViewType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetViewInstanceConfig, ViewType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ViewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ViewType_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns_Inner = { "HiddenColumns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns_MetaData[] = {
		{ "ModuleRelativePath", "Private/AssetView/AssetViewConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns = { "HiddenColumns", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetViewInstanceConfig, HiddenColumns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ThumbnailSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_ViewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewProp_HiddenColumns,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
		nullptr,
		&NewStructOps,
		"AssetViewInstanceConfig",
		sizeof(FAssetViewInstanceConfig),
		alignof(FAssetViewInstanceConfig),
		Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetViewInstanceConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig.InnerSingleton, Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig.InnerSingleton;
	}
	void UAssetViewConfig::StaticRegisterNativesUAssetViewConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetViewConfig);
	UClass* Z_Construct_UClass_UAssetViewConfig_NoRegister()
	{
		return UAssetViewConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAssetViewConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Instances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetViewConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewConfig_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "AssetView" },
		{ "IncludePath", "AssetView/AssetViewConfig.h" },
		{ "ModuleRelativePath", "Private/AssetView/AssetViewConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_ValueProp = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAssetViewInstanceConfig, METADATA_PARAMS(nullptr, 0) }; // 2607868715
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_Key_KeyProp = { "Instances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/AssetView/AssetViewConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetViewConfig, Instances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_MetaData)) }; // 2607868715
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetViewConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewConfig_Statics::NewProp_Instances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetViewConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetViewConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetViewConfig_Statics::ClassParams = {
		&UAssetViewConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetViewConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetViewConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetViewConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetViewConfig()
	{
		if (!Z_Registration_Info_UClass_UAssetViewConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetViewConfig.OuterSingleton, Z_Construct_UClass_UAssetViewConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetViewConfig.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UAssetViewConfig>()
	{
		return UAssetViewConfig::StaticClass();
	}
	UAssetViewConfig::UAssetViewConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetViewConfig);
	UAssetViewConfig::~UAssetViewConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics::ScriptStructInfo[] = {
		{ FAssetViewInstanceConfig::StaticStruct, Z_Construct_UScriptStruct_FAssetViewInstanceConfig_Statics::NewStructOps, TEXT("AssetViewInstanceConfig"), &Z_Registration_Info_UScriptStruct_AssetViewInstanceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetViewInstanceConfig), 2607868715U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetViewConfig, UAssetViewConfig::StaticClass, TEXT("UAssetViewConfig"), &Z_Registration_Info_UClass_UAssetViewConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetViewConfig), 4171251046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_4173179035(TEXT("/Script/ContentBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_AssetView_AssetViewConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
