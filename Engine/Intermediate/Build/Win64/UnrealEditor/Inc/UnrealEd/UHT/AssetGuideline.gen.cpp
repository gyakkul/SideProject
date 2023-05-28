// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/AssetGuideline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGuideline() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UNREALED_API UClass* Z_Construct_UClass_UAssetGuideline();
	UNREALED_API UClass* Z_Construct_UClass_UAssetGuideline_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FIniStringValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IniStringValue;
class UScriptStruct* FIniStringValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IniStringValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IniStringValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIniStringValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("IniStringValue"));
	}
	return Z_Registration_Info_UScriptStruct_IniStringValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FIniStringValue>()
{
	return FIniStringValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIniStringValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIniStringValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Helper struct for setting string console ini values.\n" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "Helper struct for setting string console ini values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FIniStringValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIniStringValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** From .ini. Ex: /Script/Engine.RendererSettings */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "From .ini. Ex: /Script/Engine.RendererSettings" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIniStringValue, Section), METADATA_PARAMS(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** From .ini. Ex: r.GPUSkin.Support16BitBoneIndex */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "From .ini. Ex: r.GPUSkin.Support16BitBoneIndex" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIniStringValue, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** From .ini. Ex: True */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "From .ini. Ex: True" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIniStringValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** From .ini, relative to {PROJECT}. Ex: /Config/DefaultEngine.ini */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "From .ini, relative to {PROJECT}. Ex: /Config/DefaultEngine.ini" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIniStringValue, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIniStringValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIniStringValue_Statics::NewProp_Filename,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIniStringValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"IniStringValue",
		sizeof(FIniStringValue),
		alignof(FIniStringValue),
		Z_Construct_UScriptStruct_FIniStringValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIniStringValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIniStringValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIniStringValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIniStringValue()
	{
		if (!Z_Registration_Info_UScriptStruct_IniStringValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IniStringValue.InnerSingleton, Z_Construct_UScriptStruct_FIniStringValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IniStringValue.InnerSingleton;
	}
	void UAssetGuideline::StaticRegisterNativesUAssetGuideline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetGuideline);
	UClass* Z_Construct_UClass_UAssetGuideline_NoRegister()
	{
		return UAssetGuideline::StaticClass();
	}
	struct Z_Construct_UClass_UAssetGuideline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_Plugins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plugins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Plugins;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuidelineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GuidelineName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetGuideline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGuideline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* User data that can be attached to assets to check on load for guidlelines (plugins, project settings, etc).\n*\n* This class intentionally does not accept FText arguments. The project using your bundled asset would need to have\n* your localization tables, and we currently do not support text table referencing.\n*/" },
		{ "IncludePath", "Editor/AssetGuideline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "User data that can be attached to assets to check on load for guidlelines (plugins, project settings, etc).\n\nThis class intentionally does not accept FText arguments. The project using your bundled asset would need to have\nyour localization tables, and we currently do not support text table referencing." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins_Inner = { "Plugins", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Plugins to check for on load */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "Plugins to check for on load" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins = { "Plugins", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetGuideline, Plugins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings_Inner = { "ProjectSettings", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIniStringValue, METADATA_PARAMS(nullptr, 0) }; // 2846192645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Project settings to check for on load. Look at your .ini's to populate this. */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "Project settings to check for on load. Look at your .ini's to populate this." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings = { "ProjectSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetGuideline, ProjectSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings_MetaData)) }; // 2846192645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGuideline_Statics::NewProp_GuidelineName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Name of this guideline, we will only check once per unique guideline name. */" },
		{ "ModuleRelativePath", "Classes/Editor/AssetGuideline.h" },
		{ "ToolTip", "Name of this guideline, we will only check once per unique guideline name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetGuideline_Statics::NewProp_GuidelineName = { "GuidelineName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetGuideline, GuidelineName), METADATA_PARAMS(Z_Construct_UClass_UAssetGuideline_Statics::NewProp_GuidelineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGuideline_Statics::NewProp_GuidelineName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetGuideline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGuideline_Statics::NewProp_Plugins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGuideline_Statics::NewProp_ProjectSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetGuideline_Statics::NewProp_GuidelineName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetGuideline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGuideline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetGuideline_Statics::ClassParams = {
		&UAssetGuideline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAssetGuideline_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGuideline_Statics::PropPointers), 0),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetGuideline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGuideline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetGuideline()
	{
		if (!Z_Registration_Info_UClass_UAssetGuideline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetGuideline.OuterSingleton, Z_Construct_UClass_UAssetGuideline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetGuideline.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAssetGuideline>()
	{
		return UAssetGuideline::StaticClass();
	}
	UAssetGuideline::UAssetGuideline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGuideline);
	UAssetGuideline::~UAssetGuideline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics::ScriptStructInfo[] = {
		{ FIniStringValue::StaticStruct, Z_Construct_UScriptStruct_FIniStringValue_Statics::NewStructOps, TEXT("IniStringValue"), &Z_Registration_Info_UScriptStruct_IniStringValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIniStringValue), 2846192645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetGuideline, UAssetGuideline::StaticClass, TEXT("UAssetGuideline"), &Z_Registration_Info_UClass_UAssetGuideline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetGuideline), 469489693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_3503066790(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_AssetGuideline_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
