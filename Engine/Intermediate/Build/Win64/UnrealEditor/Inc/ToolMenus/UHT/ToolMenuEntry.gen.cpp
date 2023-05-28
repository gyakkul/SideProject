// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenuEntry.h"
#include "ToolMenuMisc.h"
#include "ToolMenuOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuEntry() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBlockType();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuEntry;
class UScriptStruct* FToolMenuEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntry, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntry.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuEntry>()
{
	return FToolMenuEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolMenuEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UserInterfaceActionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInterfaceActionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserInterfaceActionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialHighlightName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TutorialHighlightName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InsertPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[];
#endif
		static void NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloseWindowAfterMenuSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommandIsKeybindOnly_MetaData[];
#endif
		static void NewProp_bCommandIsKeybindOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommandIsKeybindOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, Owner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner_MetaData)) }; // 4112241390
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, Type), Z_Construct_UEnum_Slate_EMultiBlockType, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_MetaData)) }; // 675308122
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType = { "UserInterfaceActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, UserInterfaceActionType), Z_Construct_UEnum_Slate_EUserInterfaceActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_MetaData)) }; // 870607062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName = { "TutorialHighlightName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, TutorialHighlightName), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, InsertPosition), Z_Construct_UScriptStruct_FToolMenuInsert, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition_MetaData)) }; // 4236208575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj)
	{
		((FToolMenuEntry*)Obj)->bShouldCloseWindowAfterMenuSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection = { "bShouldCloseWindowAfterMenuSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolMenuEntry), &Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject = { "ScriptObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, ScriptObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride = { "StyleNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuEntry, StyleNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_SetBit(void* Obj)
	{
		((FToolMenuEntry*)Obj)->bCommandIsKeybindOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly = { "bCommandIsKeybindOnly", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolMenuEntry), &Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolMenuEntry",
		sizeof(FToolMenuEntry),
		alignof(FToolMenuEntry),
		Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolMenuEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuEntry.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolMenuEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics::ScriptStructInfo[] = {
		{ FToolMenuEntry::StaticStruct, Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewStructOps, TEXT("ToolMenuEntry"), &Z_Registration_Info_UScriptStruct_ToolMenuEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuEntry), 109855856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_216780413(TEXT("/Script/ToolMenus"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
