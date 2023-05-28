// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenu.h"
#include "ToolMenuContext.h"
#include "ToolMenuEntry.h"
#include "ToolMenuOwner.h"
#include "ToolMenuSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenu() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UToolMenuBase();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBoxType();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister();
	TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuInsertType();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	DEFINE_FUNCTION(UToolMenu::execAddSubMenuScript)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Owner);
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ToolTip);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolMenu**)Z_Param__Result=P_THIS->AddSubMenuScript(Z_Param_Owner,Z_Param_SectionName,Z_Param_Name,Z_Param_Out_Label,Z_Param_Out_ToolTip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenu::execAddMenuEntryObject)
	{
		P_GET_OBJECT(UToolMenuEntryScript,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMenuEntryObject(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenu::execAddMenuEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMenuEntry(Z_Param_SectionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenu::execAddDynamicSectionScript)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_OBJECT(UToolMenuSectionDynamic,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDynamicSectionScript(Z_Param_SectionName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenu::execAddSectionScript)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
		P_GET_PROPERTY(FNameProperty,Z_Param_InsertName);
		P_GET_ENUM(EToolMenuInsertType,Z_Param_InsertType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSectionScript(Z_Param_SectionName,Z_Param_Out_Label,Z_Param_InsertName,EToolMenuInsertType(Z_Param_InsertType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenu::execInitMenu)
	{
		P_GET_STRUCT(FToolMenuOwner,Z_Param_Owner);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_Parent);
		P_GET_ENUM(EMultiBoxType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMenu(Z_Param_Owner,Z_Param_Name,Z_Param_Parent,EMultiBoxType(Z_Param_Type));
		P_NATIVE_END;
	}
	void UToolMenu::StaticRegisterNativesUToolMenu()
	{
		UClass* Class = UToolMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDynamicSectionScript", &UToolMenu::execAddDynamicSectionScript },
			{ "AddMenuEntry", &UToolMenu::execAddMenuEntry },
			{ "AddMenuEntryObject", &UToolMenu::execAddMenuEntryObject },
			{ "AddSectionScript", &UToolMenu::execAddSectionScript },
			{ "AddSubMenuScript", &UToolMenu::execAddSubMenuScript },
			{ "InitMenu", &UToolMenu::execInitMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics
	{
		struct ToolMenu_eventAddDynamicSectionScript_Parms
		{
			FName SectionName;
			UToolMenuSectionDynamic* Object;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddDynamicSectionScript_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddDynamicSectionScript_Parms, Object), Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "DisplayName", "Add Dynamic Section" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ScriptName", "AddDynamicSection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddDynamicSectionScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::ToolMenu_eventAddDynamicSectionScript_Parms), Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics
	{
		struct ToolMenu_eventAddMenuEntry_Parms
		{
			FName SectionName;
			FToolMenuEntry Args;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddMenuEntry_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddMenuEntry_Parms, Args), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args_MetaData)) }; // 109855856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddMenuEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::ToolMenu_eventAddMenuEntry_Parms), Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenu_AddMenuEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics
	{
		struct ToolMenu_eventAddMenuEntryObject_Parms
		{
			UToolMenuEntryScript* InObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddMenuEntryObject_Parms, InObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::NewProp_InObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddMenuEntryObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::ToolMenu_eventAddMenuEntryObject_Parms), Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenu_AddMenuEntryObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics
	{
		struct ToolMenu_eventAddSectionScript_Parms
		{
			FName SectionName;
			FText Label;
			FName InsertName;
			EToolMenuInsertType InsertType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InsertName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InsertType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName = { "InsertName", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, InsertName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType = { "InsertType", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, InsertType), Z_Construct_UEnum_ToolMenus_EToolMenuInsertType, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_MetaData)) }; // 1963615913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InsertName,InsertType" },
		{ "AutoCreateRefTerm", "Label" },
		{ "Category", "Tool Menus" },
		{ "CPP_Default_InsertName", "None" },
		{ "CPP_Default_InsertType", "Default" },
		{ "CPP_Default_Label", "" },
		{ "DisplayName", "Add Section" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ScriptName", "AddSection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddSectionScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::ToolMenu_eventAddSectionScript_Parms), Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenu_AddSectionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics
	{
		struct ToolMenu_eventAddSubMenuScript_Parms
		{
			FName Owner;
			FName SectionName;
			FName Name;
			FText Label;
			FText ToolTip;
			UToolMenu* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, Owner), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, ToolTip), METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Label,ToolTip" },
		{ "Category", "Tool Menus" },
		{ "CPP_Default_ToolTip", "" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ScriptName", "AddSubMenu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddSubMenuScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::ToolMenu_eventAddSubMenuScript_Parms), Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenu_AddSubMenuScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenu_InitMenu_Statics
	{
		struct ToolMenu_eventInitMenu_Parms
		{
			FToolMenuOwner Owner;
			FName Name;
			FName Parent;
			EMultiBoxType Type;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Owner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner_MetaData)) }; // 4112241390
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Parent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Type), Z_Construct_UEnum_Slate_EMultiBoxType, METADATA_PARAMS(nullptr, 0) }; // 2166743794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenu_InitMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "CPP_Default_Parent", "None" },
		{ "CPP_Default_Type", "Menu" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "InitMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::ToolMenu_eventInitMenu_Parms), Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenu_InitMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_InitMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenu);
	UClass* Z_Construct_UClass_UToolMenu_NoRegister()
	{
		return UToolMenu::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuParent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialHighlightName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TutorialHighlightName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MenuType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCleanupContextOnDestroy_MetaData[];
#endif
		static void NewProp_bShouldCleanupContextOnDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCleanupContextOnDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[];
#endif
		static void NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloseWindowAfterMenuSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCloseSelfOnly_MetaData[];
#endif
		static void NewProp_bCloseSelfOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseSelfOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchable_MetaData[];
#endif
		static void NewProp_bSearchable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToolBarIsFocusable_MetaData[];
#endif
		static void NewProp_bToolBarIsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolBarIsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToolBarForceSmallIcons_MetaData[];
#endif
		static void NewProp_bToolBarForceSmallIcons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolBarForceSmallIcons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCustomization_MetaData[];
#endif
		static void NewProp_bPreventCustomization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCustomization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuOwner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubMenuParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuSourceEntryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubMenuSourceEntryName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript, "AddDynamicSectionScript" }, // 384978902
		{ &Z_Construct_UFunction_UToolMenu_AddMenuEntry, "AddMenuEntry" }, // 2915746438
		{ &Z_Construct_UFunction_UToolMenu_AddMenuEntryObject, "AddMenuEntryObject" }, // 2780551367
		{ &Z_Construct_UFunction_UToolMenu_AddSectionScript, "AddSectionScript" }, // 804242019
		{ &Z_Construct_UFunction_UToolMenu_AddSubMenuScript, "AddSubMenuScript" }, // 1138036122
		{ &Z_Construct_UFunction_UToolMenu_InitMenu, "InitMenu" }, // 2004273942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenu.h" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, MenuName), METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent = { "MenuParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, MenuParent), METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, StyleName), METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName = { "TutorialHighlightName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, TutorialHighlightName), METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType = { "MenuType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, MenuType), Z_Construct_UEnum_Slate_EMultiBoxType, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_MetaData)) }; // 2166743794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bShouldCleanupContextOnDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy = { "bShouldCleanupContextOnDestroy", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bShouldCloseWindowAfterMenuSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection = { "bShouldCloseWindowAfterMenuSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bCloseSelfOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly = { "bCloseSelfOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bSearchable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable = { "bSearchable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bToolBarIsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable = { "bToolBarIsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bToolBarForceSmallIcons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons = { "bToolBarForceSmallIcons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "Comment", "/** Prevent menu from being customized */" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ToolTip", "Prevent menu from being customized" },
	};
#endif
	void Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_SetBit(void* Obj)
	{
		((UToolMenu*)Obj)->bPreventCustomization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization = { "bPreventCustomization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner = { "MenuOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, MenuOwner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner_MetaData)) }; // 4112241390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FToolMenuSection, METADATA_PARAMS(nullptr, 0) }; // 1014327715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_MetaData)) }; // 1014327715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent = { "SubMenuParent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, SubMenuParent), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName = { "SubMenuSourceEntryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenu, SubMenuSourceEntryName), METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenu_Statics::ClassParams = {
		&UToolMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UToolMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenu()
	{
		if (!Z_Registration_Info_UClass_UToolMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenu.OuterSingleton, Z_Construct_UClass_UToolMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenu.OuterSingleton;
	}
	template<> TOOLMENUS_API UClass* StaticClass<UToolMenu>()
	{
		return UToolMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenu);
	UToolMenu::~UToolMenu() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenu, UToolMenu::StaticClass, TEXT("UToolMenu"), &Z_Registration_Info_UClass_UToolMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenu), 3618019715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_1220711576(TEXT("/Script/ToolMenus"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
