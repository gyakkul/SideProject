// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenuEntryScript.h"
#include "ToolMenuContext.h"
#include "ToolMenuMisc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuEntryScript() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBlockType();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptSlateIcon();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptData();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptSlateIcon;
class UScriptStruct* FScriptSlateIcon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptSlateIcon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptSlateIcon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptSlateIcon, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ScriptSlateIcon"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptSlateIcon.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FScriptSlateIcon>()
{
	return FScriptSlateIcon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptSlateIcon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleSetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleSetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallStyleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SmallStyleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/ToolMenus.ToolMenuEntryExtensions.BreakScriptSlateIcon" },
		{ "HasNativeMake", "/Script/ToolMenus.ToolMenuEntryExtensions.MakeScriptSlateIcon" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptSlateIcon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName = { "StyleSetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptSlateIcon, StyleSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptSlateIcon, StyleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName = { "SmallStyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptSlateIcon, SmallStyleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ScriptSlateIcon",
		sizeof(FScriptSlateIcon),
		alignof(FScriptSlateIcon),
		Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptSlateIcon()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptSlateIcon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptSlateIcon.InnerSingleton, Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptSlateIcon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced;
class UScriptStruct* FToolMenuEntryScriptDataAdvanced::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuEntryScriptDataAdvanced"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuEntryScriptDataAdvanced>()
{
	return FToolMenuEntryScriptDataAdvanced::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialHighlight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TutorialHighlight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EntryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UserInterfaceActionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInterfaceActionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserInterfaceActionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSubMenu_MetaData[];
#endif
		static void NewProp_bIsSubMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSubMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenSubMenuOnClick_MetaData[];
#endif
		static void NewProp_bOpenSubMenuOnClick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenSubMenuOnClick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[];
#endif
		static void NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloseWindowAfterMenuSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleComboBox_MetaData[];
#endif
		static void NewProp_bSimpleComboBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleComboBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuEntryScriptDataAdvanced>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight = { "TutorialHighlight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, TutorialHighlight), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType = { "EntryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, EntryType), Z_Construct_UEnum_Slate_EMultiBlockType, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_MetaData)) }; // 675308122
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType = { "UserInterfaceActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, UserInterfaceActionType), Z_Construct_UEnum_Slate_EUserInterfaceActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_MetaData)) }; // 870607062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride = { "StyleNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, StyleNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_MetaData[] = {
		{ "Category", "SubMenu" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_SetBit(void* Obj)
	{
		((FToolMenuEntryScriptDataAdvanced*)Obj)->bIsSubMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu = { "bIsSubMenu", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_MetaData[] = {
		{ "Category", "SubMenu" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_SetBit(void* Obj)
	{
		((FToolMenuEntryScriptDataAdvanced*)Obj)->bOpenSubMenuOnClick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick = { "bOpenSubMenuOnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj)
	{
		((FToolMenuEntryScriptDataAdvanced*)Obj)->bShouldCloseWindowAfterMenuSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection = { "bShouldCloseWindowAfterMenuSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_SetBit(void* Obj)
	{
		((FToolMenuEntryScriptDataAdvanced*)Obj)->bSimpleComboBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox = { "bSimpleComboBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolMenuEntryScriptDataAdvanced",
		sizeof(FToolMenuEntryScriptDataAdvanced),
		alignof(FToolMenuEntryScriptDataAdvanced),
		Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData;
class UScriptStruct* FToolMenuEntryScriptData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntryScriptData, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuEntryScriptData"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuEntryScriptData>()
{
	return FToolMenuEntryScriptData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Menu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InsertPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuEntryScriptData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, Menu), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, Section), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, Icon), Z_Construct_UScriptStruct_FScriptSlateIcon, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon_MetaData)) }; // 1675633604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Optional identifier used for unregistering a group of menu items\n" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
		{ "ToolTip", "Optional identifier used for unregistering a group of menu items" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, InsertPosition), Z_Construct_UScriptStruct_FToolMenuInsert, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition_MetaData)) }; // 4236208575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntryScriptData, Advanced), Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced_MetaData)) }; // 2353159314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolMenuEntryScriptData",
		sizeof(FToolMenuEntryScriptData),
		alignof(FToolMenuEntryScriptData),
		Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptData()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.InnerSingleton;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execInitEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OwnerName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Menu);
		P_GET_PROPERTY(FNameProperty,Z_Param_Section);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ToolTip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEntry(Z_Param_OwnerName,Z_Param_Menu,Z_Param_Section,Z_Param_Name,Z_Param_Out_Label,Z_Param_Out_ToolTip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execRegisterMenuEntry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterMenuEntry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execGetIcon)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptSlateIcon*)Z_Param__Result=P_THIS->GetIcon_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execGetToolTip)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetToolTip_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execGetLabel)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetLabel_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execIsVisible)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execGetCheckState)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckState_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenuEntryScript::execCanExecute)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecute_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	struct ToolMenuEntryScript_eventCanExecute_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ToolMenuEntryScript_eventCanExecute_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ToolMenuEntryScript_eventConstructMenuEntry_Parms
	{
		UToolMenu* Menu;
		FName SectionName;
		FToolMenuContext Context;
	};
	struct ToolMenuEntryScript_eventExecute_Parms
	{
		FToolMenuContext Context;
	};
	struct ToolMenuEntryScript_eventGetCheckState_Parms
	{
		FToolMenuContext Context;
		ECheckBoxState ReturnValue;

		/** Constructor, initializes return property only **/
		ToolMenuEntryScript_eventGetCheckState_Parms()
			: ReturnValue((ECheckBoxState)0)
		{
		}
	};
	struct ToolMenuEntryScript_eventGetIcon_Parms
	{
		FToolMenuContext Context;
		FScriptSlateIcon ReturnValue;
	};
	struct ToolMenuEntryScript_eventGetLabel_Parms
	{
		FToolMenuContext Context;
		FText ReturnValue;
	};
	struct ToolMenuEntryScript_eventGetToolTip_Parms
	{
		FToolMenuContext Context;
		FText ReturnValue;
	};
	struct ToolMenuEntryScript_eventIsVisible_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ToolMenuEntryScript_eventIsVisible_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UToolMenuEntryScript_CanExecute = FName(TEXT("CanExecute"));
	bool UToolMenuEntryScript::CanExecute(FToolMenuContext const& Context) const
	{
		ToolMenuEntryScript_eventCanExecute_Parms Parms;
		Parms.Context=Context;
		const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_CanExecute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UToolMenuEntryScript_ConstructMenuEntry = FName(TEXT("ConstructMenuEntry"));
	void UToolMenuEntryScript::ConstructMenuEntry(UToolMenu* Menu, const FName SectionName, FToolMenuContext const& Context)
	{
		ToolMenuEntryScript_eventConstructMenuEntry_Parms Parms;
		Parms.Menu=Menu;
		Parms.SectionName=SectionName;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_ConstructMenuEntry),&Parms);
	}
	static FName NAME_UToolMenuEntryScript_Execute = FName(TEXT("Execute"));
	void UToolMenuEntryScript::Execute(FToolMenuContext const& Context)
	{
		ToolMenuEntryScript_eventExecute_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_Execute),&Parms);
	}
	static FName NAME_UToolMenuEntryScript_GetCheckState = FName(TEXT("GetCheckState"));
	ECheckBoxState UToolMenuEntryScript::GetCheckState(FToolMenuContext const& Context) const
	{
		ToolMenuEntryScript_eventGetCheckState_Parms Parms;
		Parms.Context=Context;
		const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetCheckState),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UToolMenuEntryScript_GetIcon = FName(TEXT("GetIcon"));
	FScriptSlateIcon UToolMenuEntryScript::GetIcon(FToolMenuContext const& Context) const
	{
		ToolMenuEntryScript_eventGetIcon_Parms Parms;
		Parms.Context=Context;
		const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetIcon),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UToolMenuEntryScript_GetLabel = FName(TEXT("GetLabel"));
	FText UToolMenuEntryScript::GetLabel(FToolMenuContext const& Context) const
	{
		ToolMenuEntryScript_eventGetLabel_Parms Parms;
		Parms.Context=Context;
		const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetLabel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UToolMenuEntryScript_GetToolTip = FName(TEXT("GetToolTip"));
	FText UToolMenuEntryScript::GetToolTip(FToolMenuContext const& Context) const
	{
		ToolMenuEntryScript_eventGetToolTip_Parms Parms;
		Parms.Context=Context;
		const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetToolTip),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UToolMenuEntryScript_IsVisible = FName(TEXT("IsVisible"));
	bool UToolMenuEntryScript::IsVisible(FToolMenuContext const& Context) const
	{
		ToolMenuEntryScript_eventIsVisible_Parms Parms;
		Parms.Context=Context;
		const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_IsVisible),&Parms);
		return !!Parms.ReturnValue;
	}
	void UToolMenuEntryScript::StaticRegisterNativesUToolMenuEntryScript()
	{
		UClass* Class = UToolMenuEntryScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanExecute", &UToolMenuEntryScript::execCanExecute },
			{ "GetCheckState", &UToolMenuEntryScript::execGetCheckState },
			{ "GetIcon", &UToolMenuEntryScript::execGetIcon },
			{ "GetLabel", &UToolMenuEntryScript::execGetLabel },
			{ "GetToolTip", &UToolMenuEntryScript::execGetToolTip },
			{ "InitEntry", &UToolMenuEntryScript::execInitEntry },
			{ "IsVisible", &UToolMenuEntryScript::execIsVisible },
			{ "RegisterMenuEntry", &UToolMenuEntryScript::execRegisterMenuEntry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventCanExecute_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context_MetaData)) }; // 3730854037
	void Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolMenuEntryScript_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToolMenuEntryScript_eventCanExecute_Parms), &Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "CanExecute", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventCanExecute_Parms), Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_CanExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventConstructMenuEntry_Parms, Menu), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventConstructMenuEntry_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventConstructMenuEntry_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "ConstructMenuEntry", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventConstructMenuEntry_Parms), Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventExecute_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "Execute", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventExecute_Parms), Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetCheckState_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetCheckState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetCheckState", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventGetCheckState_Parms), Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetIcon_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptSlateIcon, METADATA_PARAMS(nullptr, 0) }; // 1675633604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetIcon", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventGetIcon_Parms), Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetLabel_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetLabel", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventGetLabel_Parms), Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetToolTip_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventGetToolTip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetToolTip", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventGetToolTip_Parms), Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics
	{
		struct ToolMenuEntryScript_eventInitEntry_Parms
		{
			FName OwnerName;
			FName Menu;
			FName Section;
			FName Name;
			FText Label;
			FText ToolTip;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Menu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, OwnerName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Menu), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, ToolTip), METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "CPP_Default_Label", "" },
		{ "CPP_Default_ToolTip", "" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "InitEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::ToolMenuEntryScript_eventInitEntry_Parms), Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_InitEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuEntryScript_eventIsVisible_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context_MetaData)) }; // 3730854037
	void Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolMenuEntryScript_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToolMenuEntryScript_eventIsVisible_Parms), &Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "IsVisible", nullptr, nullptr, sizeof(ToolMenuEntryScript_eventIsVisible_Parms), Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "RegisterMenuEntry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEntryScript);
	UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister()
	{
		return UToolMenuEntryScript::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuEntryScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuEntryScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolMenuEntryScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuEntryScript_CanExecute, "CanExecute" }, // 2407706448
		{ &Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry, "ConstructMenuEntry" }, // 3301238888
		{ &Z_Construct_UFunction_UToolMenuEntryScript_Execute, "Execute" }, // 1125007291
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState, "GetCheckState" }, // 1200380773
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetIcon, "GetIcon" }, // 3414035356
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetLabel, "GetLabel" }, // 393751479
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip, "GetToolTip" }, // 3502568906
		{ &Z_Construct_UFunction_UToolMenuEntryScript_InitEntry, "InitEntry" }, // 381039538
		{ &Z_Construct_UFunction_UToolMenuEntryScript_IsVisible, "IsVisible" }, // 3919822074
		{ &Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry, "RegisterMenuEntry" }, // 641418727
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEntryScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenuEntryScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEntryScript, Data), Z_Construct_UScriptStruct_FToolMenuEntryScriptData, METADATA_PARAMS(Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data_MetaData)) }; // 2822747539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuEntryScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEntryScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEntryScript_Statics::ClassParams = {
		&UToolMenuEntryScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuEntryScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuEntryScript()
	{
		if (!Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton, Z_Construct_UClass_UToolMenuEntryScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton;
	}
	template<> TOOLMENUS_API UClass* StaticClass<UToolMenuEntryScript>()
	{
		return UToolMenuEntryScript::StaticClass();
	}
	UToolMenuEntryScript::UToolMenuEntryScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEntryScript);
	UToolMenuEntryScript::~UToolMenuEntryScript() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ScriptStructInfo[] = {
		{ FScriptSlateIcon::StaticStruct, Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewStructOps, TEXT("ScriptSlateIcon"), &Z_Registration_Info_UScriptStruct_ScriptSlateIcon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptSlateIcon), 1675633604U) },
		{ FToolMenuEntryScriptDataAdvanced::StaticStruct, Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewStructOps, TEXT("ToolMenuEntryScriptDataAdvanced"), &Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuEntryScriptDataAdvanced), 2353159314U) },
		{ FToolMenuEntryScriptData::StaticStruct, Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewStructOps, TEXT("ToolMenuEntryScriptData"), &Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuEntryScriptData), 2822747539U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuEntryScript, UToolMenuEntryScript::StaticClass, TEXT("UToolMenuEntryScript"), &Z_Registration_Info_UClass_UToolMenuEntryScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEntryScript), 3021581860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_1061472785(TEXT("/Script/ToolMenus"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
