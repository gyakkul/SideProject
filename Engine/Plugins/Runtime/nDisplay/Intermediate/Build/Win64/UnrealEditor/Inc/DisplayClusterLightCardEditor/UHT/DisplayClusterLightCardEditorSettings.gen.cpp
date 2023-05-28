// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/DisplayClusterLightCardEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLightCardEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_NoRegister();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorSettings();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_NoRegister();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardTemplate_NoRegister();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterLightCardEditor();
// End Cross Module References
	void UDisplayClusterLightCardEditorProjectSettings::StaticRegisterNativesUDisplayClusterLightCardEditorProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLightCardEditorProjectSettings);
	UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_NoRegister()
	{
		return UDisplayClusterLightCardEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardTemplateDefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightCardTemplateDefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLightCardTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLightCardTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFlagTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultFlagTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayLightCardLabels_MetaData[];
#endif
		static void NewProp_bDisplayLightCardLabels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayLightCardLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardLabelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightCardLabelScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default settings shared across users of the project\n */" },
		{ "DisplayClusterMultiUserInclude", "" },
		{ "IncludePath", "Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Default settings shared across users of the project" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardTemplateDefaultPath_MetaData[] = {
		{ "Category", "Templates" },
		{ "Comment", "/** The default path to save new light card templates */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "The default path to save new light card templates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardTemplateDefaultPath = { "LightCardTemplateDefaultPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorProjectSettings, LightCardTemplateDefaultPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardTemplateDefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardTemplateDefaultPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultLightCardTemplate_MetaData[] = {
		{ "Category", "Templates" },
		{ "Comment", "/** The default template to use when creating a new light card */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "The default template to use when creating a new light card" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultLightCardTemplate = { "DefaultLightCardTemplate", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorProjectSettings, DefaultLightCardTemplate), Z_Construct_UClass_UDisplayClusterLightCardTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultLightCardTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultLightCardTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultFlagTemplate_MetaData[] = {
		{ "Category", "Templates" },
		{ "Comment", "/** The default template to use when creating a new flag */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "The default template to use when creating a new flag" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultFlagTemplate = { "DefaultFlagTemplate", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorProjectSettings, DefaultFlagTemplate), Z_Construct_UClass_UDisplayClusterLightCardTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultFlagTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultFlagTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels_MetaData[] = {
		{ "Comment", "/** Whether light card labels should be displayed. Handled through the light card editor */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Whether light card labels should be displayed. Handled through the light card editor" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels_SetBit(void* Obj)
	{
		((UDisplayClusterLightCardEditorProjectSettings*)Obj)->bDisplayLightCardLabels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels = { "bDisplayLightCardLabels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterLightCardEditorProjectSettings), &Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardLabelScale_MetaData[] = {
		{ "Category", "Labels" },
		{ "Comment", "/** The scale to use for light card labels */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "The scale to use for light card labels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardLabelScale = { "LightCardLabelScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorProjectSettings, LightCardLabelScale), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardLabelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardLabelScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardTemplateDefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultLightCardTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_DefaultFlagTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_bDisplayLightCardLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::NewProp_LightCardLabelScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLightCardEditorProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::ClassParams = {
		&UDisplayClusterLightCardEditorProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLightCardEditorProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLightCardEditorProjectSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLightCardEditorProjectSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* StaticClass<UDisplayClusterLightCardEditorProjectSettings>()
	{
		return UDisplayClusterLightCardEditorProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLightCardEditorProjectSettings);
	UDisplayClusterLightCardEditorProjectSettings::~UDisplayClusterLightCardEditorProjectSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem;
class UScriptStruct* FDisplayClusterLightCardEditorRecentItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem, (UObject*)Z_Construct_UPackage__Script_DisplayClusterLightCardEditor(), TEXT("DisplayClusterLightCardEditorRecentItem"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem.OuterSingleton;
}
template<> DISPLAYCLUSTERLIGHTCARDEDITOR_API UScriptStruct* StaticStruct<FDisplayClusterLightCardEditorRecentItem>()
{
	return FDisplayClusterLightCardEditorRecentItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterLightCardEditorRecentItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/** Path of object to instantiate */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Path of object to instantiate" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterLightCardEditorRecentItem, ObjectPath), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Comment", "/** Type of item placed */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Type of item placed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterLightCardEditorRecentItem, ItemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ItemType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewProp_ItemType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardEditor,
		nullptr,
		&NewStructOps,
		"DisplayClusterLightCardEditorRecentItem",
		sizeof(FDisplayClusterLightCardEditorRecentItem),
		alignof(FDisplayClusterLightCardEditorRecentItem),
		Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem.InnerSingleton;
	}
	void UDisplayClusterLightCardEditorSettings::StaticRegisterNativesUDisplayClusterLightCardEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLightCardEditorSettings);
	UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_NoRegister()
	{
		return UDisplayClusterLightCardEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecentlyPlacedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyPlacedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentlyPlacedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderViewportType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderViewportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayIcons_MetaData[];
#endif
		static void NewProp_bDisplayIcons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor preferences unique to this user\n */" },
		{ "IncludePath", "Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Editor preferences unique to this user" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems_Inner = { "RecentlyPlacedItems", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem, METADATA_PARAMS(nullptr, 0) }; // 1764767785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems_MetaData[] = {
		{ "Comment", "/** Items recently placed by the user */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Items recently placed by the user" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems = { "RecentlyPlacedItems", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorSettings, RecentlyPlacedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems_MetaData)) }; // 1764767785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Comment", "/** Last used projection mode user has set */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Last used projection mode user has set" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorSettings, ProjectionMode), nullptr, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_ProjectionMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RenderViewportType_MetaData[] = {
		{ "Comment", "/** Last used viewport type user has set */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Last used viewport type user has set" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RenderViewportType = { "RenderViewportType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorSettings, RenderViewportType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RenderViewportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RenderViewportType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons_MetaData[] = {
		{ "Category", "Icons" },
		{ "Comment", "/** Display icons in the light card editor where applicable */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Display icons in the light card editor where applicable" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons_SetBit(void* Obj)
	{
		((UDisplayClusterLightCardEditorSettings*)Obj)->bDisplayIcons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons = { "bDisplayIcons", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterLightCardEditorSettings), &Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_IconScale_MetaData[] = {
		{ "Category", "Icons" },
		{ "Comment", "/** Scale icon size where applicable */" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterLightCardEditorSettings.h" },
		{ "ToolTip", "Scale icon size where applicable" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_IconScale = { "IconScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardEditorSettings, IconScale), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_IconScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_IconScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RecentlyPlacedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_ProjectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_RenderViewportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_bDisplayIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::NewProp_IconScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLightCardEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::ClassParams = {
		&UDisplayClusterLightCardEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLightCardEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLightCardEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLightCardEditorSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterLightCardEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLightCardEditorSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* StaticClass<UDisplayClusterLightCardEditorSettings>()
	{
		return UDisplayClusterLightCardEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLightCardEditorSettings);
	UDisplayClusterLightCardEditorSettings::~UDisplayClusterLightCardEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterLightCardEditorRecentItem::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterLightCardEditorRecentItem_Statics::NewStructOps, TEXT("DisplayClusterLightCardEditorRecentItem"), &Z_Registration_Info_UScriptStruct_DisplayClusterLightCardEditorRecentItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterLightCardEditorRecentItem), 1764767785U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterLightCardEditorProjectSettings, UDisplayClusterLightCardEditorProjectSettings::StaticClass, TEXT("UDisplayClusterLightCardEditorProjectSettings"), &Z_Registration_Info_UClass_UDisplayClusterLightCardEditorProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLightCardEditorProjectSettings), 1182864160U) },
		{ Z_Construct_UClass_UDisplayClusterLightCardEditorSettings, UDisplayClusterLightCardEditorSettings::StaticClass, TEXT("UDisplayClusterLightCardEditorSettings"), &Z_Registration_Info_UClass_UDisplayClusterLightCardEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLightCardEditorSettings), 20029420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_2543777710(TEXT("/Script/DisplayClusterLightCardEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_Settings_DisplayClusterLightCardEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
