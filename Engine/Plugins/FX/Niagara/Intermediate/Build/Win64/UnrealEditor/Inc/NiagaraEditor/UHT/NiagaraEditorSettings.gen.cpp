// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEditorSettings.h"
#include "NiagaraSpawnShortcut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEditorSettings();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEditorSettings_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraActionColors();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCurveTemplate();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnShortcut();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig;
class UScriptStruct* FNiagaraNewAssetDialogConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraNewAssetDialogConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraNewAssetDialogConfig>()
{
	return FNiagaraNewAssetDialogConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedOptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindowSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraNewAssetDialogConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_SelectedOptionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_SelectedOptionIndex = { "SelectedOptionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNewAssetDialogConfig, SelectedOptionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_SelectedOptionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_SelectedOptionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_WindowSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_WindowSize = { "WindowSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNewAssetDialogConfig, WindowSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_WindowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_WindowSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_SelectedOptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewProp_WindowSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraNewAssetDialogConfig",
		sizeof(FNiagaraNewAssetDialogConfig),
		alignof(FNiagaraNewAssetDialogConfig),
		Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions;
	static UEnum* ENiagaraNamespaceMetadataOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraNamespaceMetadataOptions"));
		}
		return Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraNamespaceMetadataOptions>()
	{
		return ENiagaraNamespaceMetadataOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::Enumerators[] = {
		{ "ENiagaraNamespaceMetadataOptions::HideInScript", (int64)ENiagaraNamespaceMetadataOptions::HideInScript },
		{ "ENiagaraNamespaceMetadataOptions::HideInSystem", (int64)ENiagaraNamespaceMetadataOptions::HideInSystem },
		{ "ENiagaraNamespaceMetadataOptions::AdvancedInScript", (int64)ENiagaraNamespaceMetadataOptions::AdvancedInScript },
		{ "ENiagaraNamespaceMetadataOptions::AdvancedInSystem", (int64)ENiagaraNamespaceMetadataOptions::AdvancedInSystem },
		{ "ENiagaraNamespaceMetadataOptions::PreventEditingNamespace", (int64)ENiagaraNamespaceMetadataOptions::PreventEditingNamespace },
		{ "ENiagaraNamespaceMetadataOptions::PreventEditingNamespaceModifier", (int64)ENiagaraNamespaceMetadataOptions::PreventEditingNamespaceModifier },
		{ "ENiagaraNamespaceMetadataOptions::PreventEditingName", (int64)ENiagaraNamespaceMetadataOptions::PreventEditingName },
		{ "ENiagaraNamespaceMetadataOptions::PreventCreatingInSystemEditor", (int64)ENiagaraNamespaceMetadataOptions::PreventCreatingInSystemEditor },
		{ "ENiagaraNamespaceMetadataOptions::HideInDefinitions", (int64)ENiagaraNamespaceMetadataOptions::HideInDefinitions },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::Enum_MetaDataParams[] = {
		{ "AdvancedInScript.Name", "ENiagaraNamespaceMetadataOptions::AdvancedInScript" },
		{ "AdvancedInSystem.Name", "ENiagaraNamespaceMetadataOptions::AdvancedInSystem" },
		{ "HideInDefinitions.Name", "ENiagaraNamespaceMetadataOptions::HideInDefinitions" },
		{ "HideInScript.Name", "ENiagaraNamespaceMetadataOptions::HideInScript" },
		{ "HideInSystem.Name", "ENiagaraNamespaceMetadataOptions::HideInSystem" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "PreventCreatingInSystemEditor.Name", "ENiagaraNamespaceMetadataOptions::PreventCreatingInSystemEditor" },
		{ "PreventEditingName.Name", "ENiagaraNamespaceMetadataOptions::PreventEditingName" },
		{ "PreventEditingNamespace.Name", "ENiagaraNamespaceMetadataOptions::PreventEditingNamespace" },
		{ "PreventEditingNamespaceModifier.Name", "ENiagaraNamespaceMetadataOptions::PreventEditingNamespaceModifier" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraNamespaceMetadataOptions",
		"ENiagaraNamespaceMetadataOptions",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata;
class UScriptStruct* FNiagaraNamespaceMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraNamespaceMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraNamespaceMetadata>()
{
	return FNiagaraNamespaceMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Namespaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Namespaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredNamespaceModifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredNamespaceModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameLong_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameLong;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundStyle_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ForegroundStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalNamespaceModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalNamespaceModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalNamespaceModifiers;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Options_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraNamespaceMetadata>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces_Inner = { "Namespaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces = { "Namespaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, Namespaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_RequiredNamespaceModifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_RequiredNamespaceModifier = { "RequiredNamespaceModifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, RequiredNamespaceModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_RequiredNamespaceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_RequiredNamespaceModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayNameLong_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayNameLong = { "DisplayNameLong", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, DisplayNameLong), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayNameLong_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayNameLong_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_ForegroundStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_ForegroundStyle = { "ForegroundStyle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, ForegroundStyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_ForegroundStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_ForegroundStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_SortId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_SortId = { "SortId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, SortId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_SortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_SortId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers_Inner = { "OptionalNamespaceModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers = { "OptionalNamespaceModifiers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, OptionalNamespaceModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_NiagaraEditor_ENiagaraNamespaceMetadataOptions, METADATA_PARAMS(nullptr, 0) }; // 3102908585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_MetaData)) }; // 3102908585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraNamespaceMetadata, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Namespaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_RequiredNamespaceModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_DisplayNameLong,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_ForegroundStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_SortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_OptionalNamespaceModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraNamespaceMetadata",
		sizeof(FNiagaraNamespaceMetadata),
		alignof(FNiagaraNamespaceMetadata),
		Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate;
class UScriptStruct* FNiagaraCurveTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCurveTemplate, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraCurveTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraCurveTemplate>()
{
	return FNiagaraCurveTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCurveTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_DisplayNameOverride_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_DisplayNameOverride = { "DisplayNameOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCurveTemplate, DisplayNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_DisplayNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_DisplayNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_CurveAsset_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.CurveFloat" },
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_CurveAsset = { "CurveAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCurveTemplate, CurveAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_CurveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_CurveAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_DisplayNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewProp_CurveAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraCurveTemplate",
		sizeof(FNiagaraCurveTemplate),
		alignof(FNiagaraCurveTemplate),
		Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCurveTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraActionColors;
class UScriptStruct* FNiagaraActionColors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraActionColors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraActionColors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraActionColors, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraActionColors"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraActionColors.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraActionColors>()
{
	return FNiagaraActionColors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraActionColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NiagaraColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeveloperColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraActionColors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_NiagaraColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_NiagaraColor = { "NiagaraColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraActionColors, NiagaraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_NiagaraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_NiagaraColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_GameColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_GameColor = { "GameColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraActionColors, GameColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_GameColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_GameColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_PluginColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_PluginColor = { "PluginColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraActionColors, PluginColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_PluginColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_PluginColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_DeveloperColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_DeveloperColor = { "DeveloperColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraActionColors, DeveloperColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_DeveloperColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_DeveloperColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_NiagaraColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_GameColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_PluginColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewProp_DeveloperColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraActionColors",
		sizeof(FNiagaraActionColors),
		alignof(FNiagaraActionColors),
		Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraActionColors()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraActionColors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraActionColors.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraActionColors.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage;
class UScriptStruct* FNiagaraParameterPanelSectionStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraParameterPanelSectionStorage"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraParameterPanelSectionStorage>()
{
	return FNiagaraParameterPanelSectionStorage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamStorageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamStorageId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandedCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpandedCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterPanelSectionStorage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ParamStorageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ParamStorageId = { "ParamStorageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterPanelSectionStorage, ParamStorageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ParamStorageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ParamStorageId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories_Inner = { "ExpandedCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories = { "ExpandedCategories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterPanelSectionStorage, ExpandedCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ParamStorageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewProp_ExpandedCategories,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraParameterPanelSectionStorage",
		sizeof(FNiagaraParameterPanelSectionStorage),
		alignof(FNiagaraParameterPanelSectionStorage),
		Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage.InnerSingleton;
	}
	void UNiagaraEditorSettings::StaticRegisterNativesUNiagaraEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEditorSettings);
	UClass* Z_Construct_UClass_UNiagaraEditorSettings_NoRegister()
	{
		return UNiagaraEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScript_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDynamicInputScript_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDynamicInputScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionScript_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFunctionScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultModuleScript_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultModuleScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSystemUpdateScript_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredSystemUpdateScript;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultValidationRuleSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValidationRuleSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValidationRuleSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphCreationShortcuts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphCreationShortcuts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphCreationShortcuts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyStackNodesAtLowResolution_MetaData[];
#endif
		static void NewProp_bSimplifyStackNodesAtLowResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyStackNodesAtLowResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowResolutionNodeMaxNameChars_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LowResolutionNodeMaxNameChars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysZoomToFitSystemGraph_MetaData[];
#endif
		static void NewProp_bAlwaysZoomToFitSystemGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysZoomToFitSystemGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompile_MetaData[];
#endif
		static void NewProp_bAutoCompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetSimulationOnChange_MetaData[];
#endif
		static void NewProp_bResetSimulationOnChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSimulationOnChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResimulateOnChangeWhilePaused_MetaData[];
#endif
		static void NewProp_bResimulateOnChangeWhilePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResimulateOnChangeWhilePaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetDependentSystemsWhenEditingEmitters_MetaData[];
#endif
		static void NewProp_bResetDependentSystemsWhenEditingEmitters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetDependentSystemsWhenEditingEmitters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAdvancedParameterPanelCategories_MetaData[];
#endif
		static void NewProp_bDisplayAdvancedParameterPanelCategories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAdvancedParameterPanelCategories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAffectedAssetStats_MetaData[];
#endif
		static void NewProp_bDisplayAffectedAssetStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAffectedAssetStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedAssetSearchLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AffectedAssetSearchLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaybackSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionColors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAssetDialogConfigMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewAssetDialogConfigMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAssetDialogConfigMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NewAssetDialogConfigMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HLSLKeywordReplacements_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HLSLKeywordReplacements_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLSLKeywordReplacements_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HLSLKeywordReplacements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamespaceMetadata_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamespaceMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamespaceMetadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamespaceModifierMetadata_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamespaceModifierMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamespaceModifierMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNamespaceMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNamespaceMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNamespaceModifierMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNamespaceModifierMetadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveTemplates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGridInViewport_MetaData[];
#endif
		static void NewProp_bShowGridInViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGridInViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInstructionsCount_MetaData[];
#endif
		static void NewProp_bShowInstructionsCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInstructionsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParticleCountsInViewport_MetaData[];
#endif
		static void NewProp_bShowParticleCountsInViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParticleCountsInViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEmitterExecutionOrder_MetaData[];
#endif
		static void NewProp_bShowEmitterExecutionOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEmitterExecutionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGpuTickInformation_MetaData[];
#endif
		static void NewProp_bShowGpuTickInformation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGpuTickInformation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemParameterPanelSectionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemParameterPanelSectionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemParameterPanelSectionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Niagara" },
		{ "IncludePath", "NiagaraEditorSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultScript_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Niagara script to duplicate as the base of all new script assets created. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Niagara script to duplicate as the base of all new script assets created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultScript = { "DefaultScript", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultScript), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultDynamicInputScript_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Niagara script to duplicate as the base of all new script assets created. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Niagara script to duplicate as the base of all new script assets created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultDynamicInputScript = { "DefaultDynamicInputScript", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultDynamicInputScript), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultDynamicInputScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultDynamicInputScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultFunctionScript_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Niagara script to duplicate as the base of all new script assets created. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Niagara script to duplicate as the base of all new script assets created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultFunctionScript = { "DefaultFunctionScript", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultFunctionScript), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultFunctionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultFunctionScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultModuleScript_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Niagara script to duplicate as the base of all new script assets created. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Niagara script to duplicate as the base of all new script assets created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultModuleScript = { "DefaultModuleScript", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultModuleScript), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultModuleScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultModuleScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_RequiredSystemUpdateScript_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Niagara script which is required in the system update script to control system state. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Niagara script which is required in the system update script to control system state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_RequiredSystemUpdateScript = { "RequiredSystemUpdateScript", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, RequiredSystemUpdateScript), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_RequiredSystemUpdateScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_RequiredSystemUpdateScript_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets_Inner = { "DefaultValidationRuleSets", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Validation rules applied to all Niagara systems. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Validation rules applied to all Niagara systems." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets = { "DefaultValidationRuleSets", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultValidationRuleSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts_Inner = { "GraphCreationShortcuts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSpawnShortcut, METADATA_PARAMS(nullptr, 0) }; // 3052947975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Shortcut key bindings that if held down while doing a mouse click, will spawn the specified type of Niagara node.*/" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Shortcut key bindings that if held down while doing a mouse click, will spawn the specified type of Niagara node." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts = { "GraphCreationShortcuts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, GraphCreationShortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts_MetaData)) }; // 3052947975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true then emitter and system nodes will show a simplified representation on low zoom levels. This improves performance and readablity when zoomed out of the system overview graph. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "If true then emitter and system nodes will show a simplified representation on low zoom levels. This improves performance and readablity when zoomed out of the system overview graph." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bSimplifyStackNodesAtLowResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution = { "bSimplifyStackNodesAtLowResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_LowResolutionNodeMaxNameChars_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** The max number of chars before names on the low resolution nodes are truncated. */" },
		{ "EditCondition", "bSimplifyStackNodesAtLowResolution" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "The max number of chars before names on the low resolution nodes are truncated." },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_LowResolutionNodeMaxNameChars = { "LowResolutionNodeMaxNameChars", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, LowResolutionNodeMaxNameChars), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_LowResolutionNodeMaxNameChars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_LowResolutionNodeMaxNameChars_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true then the system editor will zoom to fit all emitters when opening an asset. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "If true then the system editor will zoom to fit all emitters when opening an asset." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bAlwaysZoomToFitSystemGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph = { "bAlwaysZoomToFitSystemGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Whether or not auto-compile is enabled in the editors. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Whether or not auto-compile is enabled in the editors." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bAutoCompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile = { "bAutoCompile", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "SimulationOptions" },
		{ "Comment", "/** Whether or not simulations should start playing automatically when the emitter or system editor is opened, or when the data is changed in the editor. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Whether or not simulations should start playing automatically when the emitter or system editor is opened, or when the data is changed in the editor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange_MetaData[] = {
		{ "Category", "SimulationOptions" },
		{ "Comment", "/** Whether or not the simulation should reset when a value on the emitter or system is changed. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Whether or not the simulation should reset when a value on the emitter or system is changed." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bResetSimulationOnChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange = { "bResetSimulationOnChange", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused_MetaData[] = {
		{ "Category", "SimulationOptions" },
		{ "Comment", "/** Whether or not to rerun the simulation to the current time when making modifications while paused. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Whether or not to rerun the simulation to the current time when making modifications while paused." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bResimulateOnChangeWhilePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused = { "bResimulateOnChangeWhilePaused", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters_MetaData[] = {
		{ "Category", "SimulationOptions" },
		{ "Comment", "/** Whether or not to reset all components that include the system currently being reset. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Whether or not to reset all components that include the system currently being reset." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bResetDependentSystemsWhenEditingEmitters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters = { "bResetDependentSystemsWhenEditingEmitters", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Whether or not to display advanced categories for the parameter panel. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Whether or not to display advanced categories for the parameter panel." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bDisplayAdvancedParameterPanelCategories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories = { "bDisplayAdvancedParameterPanelCategories", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true, then the emitter and script editors will show an info message how many downstream asset are affected by a change. Gathering this information for large asset graphs can delay the opening of the asset editors a bit. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "If true, then the emitter and script editors will show an info message how many downstream asset are affected by a change. Gathering this information for large asset graphs can delay the opening of the asset editors a bit." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bDisplayAffectedAssetStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats = { "bDisplayAffectedAssetStats", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_AffectedAssetSearchLimit_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The maximum amount of asset references that are searched before stopping. Setting this too high can lead to long load times when opening default assets (basically the same as disabling the breadth limit in the reference viewer). */" },
		{ "EditCondition", "bDisplayAffectedAssetStats" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "The maximum amount of asset references that are searched before stopping. Setting this too high can lead to long load times when opening default assets (basically the same as disabling the breadth limit in the reference viewer)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_AffectedAssetSearchLimit = { "AffectedAssetSearchLimit", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, AffectedAssetSearchLimit), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_AffectedAssetSearchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_AffectedAssetSearchLimit_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds_Inner = { "PlaybackSpeeds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Speeds used for slowing down and speeding up the playback speeds */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
		{ "ToolTip", "Speeds used for slowing down and speeding up the playback speeds" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds = { "PlaybackSpeeds", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, PlaybackSpeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_ActionColors_MetaData[] = {
		{ "Category", "Niagara Colors" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_ActionColors = { "ActionColors", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, ActionColors), Z_Construct_UScriptStruct_FNiagaraActionColors, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_ActionColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_ActionColors_MetaData)) }; // 4009115913
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_ValueProp = { "NewAssetDialogConfigMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig, METADATA_PARAMS(nullptr, 0) }; // 2517392876
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_Key_KeyProp = { "NewAssetDialogConfigMap_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap = { "NewAssetDialogConfigMap", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, NewAssetDialogConfigMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_MetaData)) }; // 2517392876
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_ValueProp = { "HLSLKeywordReplacements", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_Key_KeyProp = { "HLSLKeywordReplacements_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements = { "HLSLKeywordReplacements", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, HLSLKeywordReplacements), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata_Inner = { "NamespaceMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata, METADATA_PARAMS(nullptr, 0) }; // 1416975720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata = { "NamespaceMetadata", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, NamespaceMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata_MetaData)) }; // 1416975720
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata_Inner = { "NamespaceModifierMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata, METADATA_PARAMS(nullptr, 0) }; // 1416975720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata = { "NamespaceModifierMetadata", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, NamespaceModifierMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata_MetaData)) }; // 1416975720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceMetadata = { "DefaultNamespaceMetadata", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultNamespaceMetadata), Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceMetadata_MetaData)) }; // 1416975720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceModifierMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceModifierMetadata = { "DefaultNamespaceModifierMetadata", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, DefaultNamespaceModifierMetadata), Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceModifierMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceModifierMetadata_MetaData)) }; // 1416975720
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates_Inner = { "CurveTemplates", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCurveTemplate, METADATA_PARAMS(nullptr, 0) }; // 2228035964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates = { "CurveTemplates", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, CurveTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates_MetaData)) }; // 2228035964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bShowGridInViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport = { "bShowGridInViewport", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bShowInstructionsCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount = { "bShowInstructionsCount", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bShowParticleCountsInViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport = { "bShowParticleCountsInViewport", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bShowEmitterExecutionOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder = { "bShowEmitterExecutionOrder", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation_SetBit(void* Obj)
	{
		((UNiagaraEditorSettings*)Obj)->bShowGpuTickInformation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation = { "bShowGpuTickInformation", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraEditorSettings), &Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData_Inner = { "SystemParameterPanelSectionData", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage, METADATA_PARAMS(nullptr, 0) }; // 2887737574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData = { "SystemParameterPanelSectionData", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorSettings, SystemParameterPanelSectionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData_MetaData)) }; // 2887737574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultDynamicInputScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultFunctionScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultModuleScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_RequiredSystemUpdateScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultValidationRuleSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_GraphCreationShortcuts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bSimplifyStackNodesAtLowResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_LowResolutionNodeMaxNameChars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAlwaysZoomToFitSystemGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetSimulationOnChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResimulateOnChangeWhilePaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bResetDependentSystemsWhenEditingEmitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAdvancedParameterPanelCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bDisplayAffectedAssetStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_AffectedAssetSearchLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_PlaybackSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_ActionColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NewAssetDialogConfigMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_HLSLKeywordReplacements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_NamespaceModifierMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_DefaultNamespaceModifierMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_CurveTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGridInViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowInstructionsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowParticleCountsInViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowEmitterExecutionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_bShowGpuTickInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorSettings_Statics::NewProp_SystemParameterPanelSectionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEditorSettings_Statics::ClassParams = {
		&UNiagaraEditorSettings::StaticClass,
		"Niagara",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEditorSettings.OuterSingleton, Z_Construct_UClass_UNiagaraEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEditorSettings.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraEditorSettings>()
	{
		return UNiagaraEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEditorSettings);
	UNiagaraEditorSettings::~UNiagaraEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::EnumInfo[] = {
		{ ENiagaraNamespaceMetadataOptions_StaticEnum, TEXT("ENiagaraNamespaceMetadataOptions"), &Z_Registration_Info_UEnum_ENiagaraNamespaceMetadataOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3102908585U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraNewAssetDialogConfig::StaticStruct, Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics::NewStructOps, TEXT("NiagaraNewAssetDialogConfig"), &Z_Registration_Info_UScriptStruct_NiagaraNewAssetDialogConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraNewAssetDialogConfig), 2517392876U) },
		{ FNiagaraNamespaceMetadata::StaticStruct, Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics::NewStructOps, TEXT("NiagaraNamespaceMetadata"), &Z_Registration_Info_UScriptStruct_NiagaraNamespaceMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraNamespaceMetadata), 1416975720U) },
		{ FNiagaraCurveTemplate::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics::NewStructOps, TEXT("NiagaraCurveTemplate"), &Z_Registration_Info_UScriptStruct_NiagaraCurveTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCurveTemplate), 2228035964U) },
		{ FNiagaraActionColors::StaticStruct, Z_Construct_UScriptStruct_FNiagaraActionColors_Statics::NewStructOps, TEXT("NiagaraActionColors"), &Z_Registration_Info_UScriptStruct_NiagaraActionColors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraActionColors), 4009115913U) },
		{ FNiagaraParameterPanelSectionStorage::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics::NewStructOps, TEXT("NiagaraParameterPanelSectionStorage"), &Z_Registration_Info_UScriptStruct_NiagaraParameterPanelSectionStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterPanelSectionStorage), 2887737574U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEditorSettings, UNiagaraEditorSettings::StaticClass, TEXT("UNiagaraEditorSettings"), &Z_Registration_Info_UClass_UNiagaraEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEditorSettings), 3064617960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_3797090655(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
