// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DetailsViewConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailsViewConfig() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	PROPERTYEDITOR_API UClass* Z_Construct_UClass_UDetailsConfig();
	PROPERTYEDITOR_API UClass* Z_Construct_UClass_UDetailsConfig_NoRegister();
	PROPERTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDetailsSectionSelection();
	PROPERTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDetailsViewConfig();
	UPackage* Z_Construct_UPackage__Script_PropertyEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetailsSectionSelection;
class UScriptStruct* FDetailsSectionSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetailsSectionSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetailsSectionSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailsSectionSelection, (UObject*)Z_Construct_UPackage__Script_PropertyEditor(), TEXT("DetailsSectionSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DetailsSectionSelection.OuterSingleton;
}
template<> PROPERTYEDITOR_API UScriptStruct* StaticStruct<FDetailsSectionSelection>()
{
	return FDetailsSectionSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SectionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailsSectionSelection>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames_ElementProp = { "SectionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames = { "SectionNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetailsSectionSelection, SectionNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewProp_SectionNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyEditor,
		nullptr,
		&NewStructOps,
		"DetailsSectionSelection",
		sizeof(FDetailsSectionSelection),
		alignof(FDetailsSectionSelection),
		Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailsSectionSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_DetailsSectionSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetailsSectionSelection.InnerSingleton, Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetailsSectionSelection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetailsViewConfig;
class UScriptStruct* FDetailsViewConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetailsViewConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetailsViewConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailsViewConfig, (UObject*)Z_Construct_UPackage__Script_PropertyEditor(), TEXT("DetailsViewConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DetailsViewConfig.OuterSingleton;
}
template<> PROPERTYEDITOR_API UScriptStruct* StaticStruct<FDetailsViewConfig>()
{
	return FDetailsViewConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetailsViewConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFavoritesCategory_MetaData[];
#endif
		static void NewProp_bShowFavoritesCategory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFavoritesCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAllAdvanced_MetaData[];
#endif
		static void NewProp_bShowAllAdvanced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAllAdvanced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHiddenPropertiesWhilePlaying_MetaData[];
#endif
		static void NewProp_bShowHiddenPropertiesWhilePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHiddenPropertiesWhilePlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAllChildrenIfCategoryMatches_MetaData[];
#endif
		static void NewProp_bShowAllChildrenIfCategoryMatches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAllChildrenIfCategoryMatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyKeyable_MetaData[];
#endif
		static void NewProp_bShowOnlyKeyable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyKeyable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyAnimated_MetaData[];
#endif
		static void NewProp_bShowOnlyAnimated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyAnimated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyModified_MetaData[];
#endif
		static void NewProp_bShowOnlyModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSections_MetaData[];
#endif
		static void NewProp_bShowSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueColumnWidth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedSections_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedSections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SelectedSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailsViewConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory_MetaData[] = {
		{ "Comment", "/** If we should show the favorites category. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "If we should show the favorites category." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowFavoritesCategory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory = { "bShowFavoritesCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced_MetaData[] = {
		{ "Comment", "/** When enabled, the Advanced Details will always auto expand. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "When enabled, the Advanced Details will always auto expand." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowAllAdvanced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced = { "bShowAllAdvanced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData[] = {
		{ "Comment", "/** When Playing or Simulating, shows all properties (even non-visible and non-editable properties), if the object belongs to a simulating world.  This is useful for debugging. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "When Playing or Simulating, shows all properties (even non-visible and non-editable properties), if the object belongs to a simulating world.  This is useful for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowHiddenPropertiesWhilePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying = { "bShowHiddenPropertiesWhilePlaying", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches_MetaData[] = {
		{ "Comment", "/** Show all category children if the category matches the filter. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "Show all category children if the category matches the filter." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowAllChildrenIfCategoryMatches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches = { "bShowAllChildrenIfCategoryMatches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable_MetaData[] = {
		{ "Comment", "/** Show only keyable properties. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "Show only keyable properties." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowOnlyKeyable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable = { "bShowOnlyKeyable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated_MetaData[] = {
		{ "Comment", "/** Show only animated properties. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "Show only animated properties." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowOnlyAnimated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated = { "bShowOnlyAnimated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified_MetaData[] = {
		{ "Comment", "/** Show only modified properties. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "Show only modified properties." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowOnlyModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified = { "bShowOnlyModified", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections_MetaData[] = {
		{ "Comment", "/** Show sections. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "Show sections." },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections_SetBit(void* Obj)
	{
		((FDetailsViewConfig*)Obj)->bShowSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections = { "bShowSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDetailsViewConfig), &Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_ValueColumnWidth_MetaData[] = {
		{ "Comment", "/** Width of the value column in the details view (0.0-1.0). */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "Width of the value column in the details view (0.0-1.0)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_ValueColumnWidth = { "ValueColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetailsViewConfig, ValueColumnWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_ValueColumnWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_ValueColumnWidth_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_ValueProp = { "SelectedSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDetailsSectionSelection, METADATA_PARAMS(nullptr, 0) }; // 2789031066
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_Key_KeyProp = { "SelectedSections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_MetaData[] = {
		{ "Comment", "/** A map of class name to a set of selected sections for that class. */" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
		{ "ToolTip", "A map of class name to a set of selected sections for that class." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections = { "SelectedSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetailsViewConfig, SelectedSections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_MetaData)) }; // 2789031066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowFavoritesCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllAdvanced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowHiddenPropertiesWhilePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowAllChildrenIfCategoryMatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyKeyable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyAnimated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowOnlyModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_bShowSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_ValueColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewProp_SelectedSections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyEditor,
		nullptr,
		&NewStructOps,
		"DetailsViewConfig",
		sizeof(FDetailsViewConfig),
		alignof(FDetailsViewConfig),
		Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailsViewConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_DetailsViewConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetailsViewConfig.InnerSingleton, Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetailsViewConfig.InnerSingleton;
	}
	void UDetailsConfig::StaticRegisterNativesUDetailsConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetailsConfig);
	UClass* Z_Construct_UClass_UDetailsConfig_NoRegister()
	{
		return UDetailsConfig::StaticClass();
	}
	struct Z_Construct_UClass_UDetailsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Views_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Views_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Views_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Views;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsConfig_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "DetailsView" },
		{ "IncludePath", "DetailsViewConfig.h" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_ValueProp = { "Views", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDetailsViewConfig, METADATA_PARAMS(nullptr, 0) }; // 1003555410
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_Key_KeyProp = { "Views_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/DetailsViewConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views = { "Views", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDetailsConfig, Views), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_MetaData)) }; // 1003555410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetailsConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsConfig_Statics::NewProp_Views,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailsConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetailsConfig_Statics::ClassParams = {
		&UDetailsConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDetailsConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailsConfig()
	{
		if (!Z_Registration_Info_UClass_UDetailsConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetailsConfig.OuterSingleton, Z_Construct_UClass_UDetailsConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDetailsConfig.OuterSingleton;
	}
	template<> PROPERTYEDITOR_API UClass* StaticClass<UDetailsConfig>()
	{
		return UDetailsConfig::StaticClass();
	}
	UDetailsConfig::UDetailsConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailsConfig);
	UDetailsConfig::~UDetailsConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics::ScriptStructInfo[] = {
		{ FDetailsSectionSelection::StaticStruct, Z_Construct_UScriptStruct_FDetailsSectionSelection_Statics::NewStructOps, TEXT("DetailsSectionSelection"), &Z_Registration_Info_UScriptStruct_DetailsSectionSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetailsSectionSelection), 2789031066U) },
		{ FDetailsViewConfig::StaticStruct, Z_Construct_UScriptStruct_FDetailsViewConfig_Statics::NewStructOps, TEXT("DetailsViewConfig"), &Z_Registration_Info_UScriptStruct_DetailsViewConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetailsViewConfig), 1003555410U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDetailsConfig, UDetailsConfig::StaticClass, TEXT("UDetailsConfig"), &Z_Registration_Info_UClass_UDetailsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetailsConfig), 3730022307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_3714761556(TEXT("/Script/PropertyEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_DetailsViewConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
