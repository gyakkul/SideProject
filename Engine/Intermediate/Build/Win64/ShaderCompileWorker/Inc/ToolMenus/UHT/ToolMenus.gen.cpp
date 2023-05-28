// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenus.h"
#include "Framework/MultiBox/ToolMenuBase.h"
#include "ToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenus() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBoxType();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenus();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenus_NoRegister();
	TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuInsertType();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	DEFINE_FUNCTION(UToolMenus::execFindContext)
	{
		P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_InContext);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UToolMenus::FindContext(Z_Param_Out_InContext,Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execRemoveMenu)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMenu(Z_Param_MenuName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execRemoveSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSection(Z_Param_MenuName,Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execRemoveEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Section);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEntry(Z_Param_MenuName,Z_Param_Section,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execSetSectionPosition)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_OtherSectionName);
		P_GET_ENUM(EToolMenuInsertType,Z_Param_PositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSectionPosition(Z_Param_MenuName,Z_Param_SectionName,Z_Param_OtherSectionName,EToolMenuInsertType(Z_Param_PositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execSetSectionLabel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FTextProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSectionLabel(Z_Param_MenuName,Z_Param_SectionName,Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execUnregisterOwnerByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InOwnerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterOwnerByName(Z_Param_InOwnerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execAddMenuEntryObject)
	{
		P_GET_OBJECT(UToolMenuEntryScript,Z_Param_MenuEntryObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UToolMenus::AddMenuEntryObject(Z_Param_MenuEntryObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execRefreshAllWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAllWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execRefreshMenuWidget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RefreshMenuWidget(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execIsMenuRegistered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMenuRegistered(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execFindMenu)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolMenu**)Z_Param__Result=P_THIS->FindMenu(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execExtendMenu)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolMenu**)Z_Param__Result=P_THIS->ExtendMenu(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execRegisterMenu)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_Parent);
		P_GET_ENUM(EMultiBoxType,Z_Param_Type);
		P_GET_UBOOL(Z_Param_bWarnIfAlreadyRegistered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolMenu**)Z_Param__Result=P_THIS->RegisterMenu(Z_Param_Name,Z_Param_Parent,EMultiBoxType(Z_Param_Type),Z_Param_bWarnIfAlreadyRegistered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToolMenus::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UToolMenus**)Z_Param__Result=UToolMenus::Get();
		P_NATIVE_END;
	}
	void UToolMenus::StaticRegisterNativesUToolMenus()
	{
		UClass* Class = UToolMenus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMenuEntryObject", &UToolMenus::execAddMenuEntryObject },
			{ "ExtendMenu", &UToolMenus::execExtendMenu },
			{ "FindContext", &UToolMenus::execFindContext },
			{ "FindMenu", &UToolMenus::execFindMenu },
			{ "Get", &UToolMenus::execGet },
			{ "IsMenuRegistered", &UToolMenus::execIsMenuRegistered },
			{ "RefreshAllWidgets", &UToolMenus::execRefreshAllWidgets },
			{ "RefreshMenuWidget", &UToolMenus::execRefreshMenuWidget },
			{ "RegisterMenu", &UToolMenus::execRegisterMenu },
			{ "RemoveEntry", &UToolMenus::execRemoveEntry },
			{ "RemoveMenu", &UToolMenus::execRemoveMenu },
			{ "RemoveSection", &UToolMenus::execRemoveSection },
			{ "SetSectionLabel", &UToolMenus::execSetSectionLabel },
			{ "SetSectionPosition", &UToolMenus::execSetSectionPosition },
			{ "UnregisterOwnerByName", &UToolMenus::execUnregisterOwnerByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics
	{
		struct ToolMenus_eventAddMenuEntryObject_Parms
		{
			UToolMenuEntryScript* MenuEntryObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuEntryObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_MenuEntryObject = { "MenuEntryObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventAddMenuEntryObject_Parms, MenuEntryObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolMenus_eventAddMenuEntryObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToolMenus_eventAddMenuEntryObject_Parms), &Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_MenuEntryObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Registers menu entry object from blueprint/script */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Registers menu entry object from blueprint/script" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "AddMenuEntryObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::ToolMenus_eventAddMenuEntryObject_Parms), Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_AddMenuEntryObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics
	{
		struct ToolMenus_eventExtendMenu_Parms
		{
			FName Name;
			UToolMenu* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventExtendMenu_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventExtendMenu_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Extends a menu without registering the menu or claiming ownership of it. Ok to call even if menu does not exist yet.\n\x09 * @param\x09Name\x09Name of the menu to extend\n\x09 * @return\x09ToolMenu\x09Menu object\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Extends a menu without registering the menu or claiming ownership of it. Ok to call even if menu does not exist yet.\n@param       Name    Name of the menu to extend\n@return      ToolMenu        Menu object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "ExtendMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::ToolMenus_eventExtendMenu_Parms), Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_ExtendMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_FindContext_Statics
	{
		struct ToolMenus_eventFindContext_Parms
		{
			FToolMenuContext InContext;
			UClass* InClass;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventFindContext_Parms, InContext), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext_MetaData)) }; // 3730854037
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventFindContext_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventFindContext_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_FindContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Finds a context object of a given class if it exists */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Finds a context object of a given class if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "FindContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_FindContext_Statics::ToolMenus_eventFindContext_Parms), Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_FindContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_FindContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_FindContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_FindMenu_Statics
	{
		struct ToolMenus_eventFindMenu_Parms
		{
			FName Name;
			UToolMenu* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventFindMenu_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventFindMenu_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_FindMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Finds an existing menu that has been registered or extended.\n\x09 * @param\x09Name\x09Name of the menu to find.\n\x09 * @return\x09ToolMenu\x09Menu object. Returns null if not found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Finds an existing menu that has been registered or extended.\n@param       Name    Name of the menu to find.\n@return      ToolMenu        Menu object. Returns null if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_FindMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "FindMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::ToolMenus_eventFindMenu_Parms), Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_FindMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_FindMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_Get_Statics
	{
		struct ToolMenus_eventGet_Parms
		{
			UToolMenus* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventGet_Parms, ReturnValue), Z_Construct_UClass_UToolMenus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_Get_Statics::ToolMenus_eventGet_Parms), Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics
	{
		struct ToolMenus_eventIsMenuRegistered_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventIsMenuRegistered_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolMenus_eventIsMenuRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToolMenus_eventIsMenuRegistered_Parms), &Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Determines if a menu has already been registered.\n\x09 * @param\x09Name\x09Name of the menu to find.\n\x09 * @return\x09""bool\x09True if menu has already been registered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Determines if a menu has already been registered.\n@param       Name    Name of the menu to find.\n@return      bool    True if menu has already been registered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "IsMenuRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::ToolMenus_eventIsMenuRegistered_Parms), Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_IsMenuRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Rebuilds all currently generated widgets next tick. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Rebuilds all currently generated widgets next tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RefreshAllWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_RefreshAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics
	{
		struct ToolMenus_eventRefreshMenuWidget_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRefreshMenuWidget_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToolMenus_eventRefreshMenuWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToolMenus_eventRefreshMenuWidget_Parms), &Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Rebuilds all widgets generated from a specific menu. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Rebuilds all widgets generated from a specific menu." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RefreshMenuWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::ToolMenus_eventRefreshMenuWidget_Parms), Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_RefreshMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics
	{
		struct ToolMenus_eventRegisterMenu_Parms
		{
			FName Name;
			FName Parent;
			EMultiBoxType Type;
			bool bWarnIfAlreadyRegistered;
			UToolMenu* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_bWarnIfAlreadyRegistered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnIfAlreadyRegistered;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, Parent), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, Type), Z_Construct_UEnum_Slate_EMultiBoxType, METADATA_PARAMS(nullptr, 0) }; // 2166743794
	void Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered_SetBit(void* Obj)
	{
		((ToolMenus_eventRegisterMenu_Parms*)Obj)->bWarnIfAlreadyRegistered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered = { "bWarnIfAlreadyRegistered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToolMenus_eventRegisterMenu_Parms), &Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Registers a menu by name\n\x09 * @param\x09Parent\x09Optional name of a menu to layer on top of.\n\x09 * @param\x09Type\x09Type of menu that will be generated such as: ToolBar, VerticalToolBar, etc..\n\x09 * @param\x09""bWarnIfAlreadyRegistered\x09""Display warning if already registered\n\x09 * @return\x09ToolMenu\x09Menu object\n\x09 */" },
		{ "CPP_Default_bWarnIfAlreadyRegistered", "true" },
		{ "CPP_Default_Parent", "None" },
		{ "CPP_Default_Type", "Menu" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Registers a menu by name\n@param       Parent  Optional name of a menu to layer on top of.\n@param       Type    Type of menu that will be generated such as: ToolBar, VerticalToolBar, etc..\n@param       bWarnIfAlreadyRegistered        Display warning if already registered\n@return      ToolMenu        Menu object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RegisterMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::ToolMenus_eventRegisterMenu_Parms), Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_RegisterMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics
	{
		struct ToolMenus_eventRemoveEntry_Parms
		{
			FName MenuName;
			FName Section;
			FName Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRemoveEntry_Parms, MenuName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRemoveEntry_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRemoveEntry_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Removes a menu entry from a given menu and section */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Removes a menu entry from a given menu and section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RemoveEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::ToolMenus_eventRemoveEntry_Parms), Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_RemoveEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics
	{
		struct ToolMenus_eventRemoveMenu_Parms
		{
			FName MenuName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRemoveMenu_Parms, MenuName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Unregisters a menu by name */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Unregisters a menu by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RemoveMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::ToolMenus_eventRemoveMenu_Parms), Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_RemoveMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_RemoveSection_Statics
	{
		struct ToolMenus_eventRemoveSection_Parms
		{
			FName MenuName;
			FName Section;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRemoveSection_Parms, MenuName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventRemoveSection_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Removes a section from a given menu */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Removes a section from a given menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RemoveSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::ToolMenus_eventRemoveSection_Parms), Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_RemoveSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics
	{
		struct ToolMenus_eventSetSectionLabel_Parms
		{
			FName MenuName;
			FName SectionName;
			FText Label;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionLabel_Parms, MenuName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionLabel_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionLabel_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Sets a section's displayed label text. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Sets a section's displayed label text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "SetSectionLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::ToolMenus_eventSetSectionLabel_Parms), Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_SetSectionLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics
	{
		struct ToolMenus_eventSetSectionPosition_Parms
		{
			FName MenuName;
			FName SectionName;
			FName OtherSectionName;
			EToolMenuInsertType PositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherSectionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PositionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, MenuName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName = { "OtherSectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, OtherSectionName), METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, PositionType), Z_Construct_UEnum_ToolMenus_EToolMenuInsertType, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_MetaData)) }; // 1963615913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Sets where to insert a section into a menu when generating relative to other section names. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Sets where to insert a section into a menu when generating relative to other section names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "SetSectionPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::ToolMenus_eventSetSectionPosition_Parms), Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_SetSectionPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics
	{
		struct ToolMenus_eventUnregisterOwnerByName_Parms
		{
			FName InOwnerName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InOwnerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::NewProp_InOwnerName = { "InOwnerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenus_eventUnregisterOwnerByName_Parms, InOwnerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::NewProp_InOwnerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Removes all entries that were registered under a specific owner name */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Removes all entries that were registered under a specific owner name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "UnregisterOwnerByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::ToolMenus_eventUnregisterOwnerByName_Parms), Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenus);
	UClass* Z_Construct_UClass_UToolMenus_NoRegister()
	{
		return UToolMenus::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizedMenus_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizedMenus_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomizedMenus;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuSubstitutionsDuringGenerate_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuSubstitutionsDuringGenerate_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuSubstitutionsDuringGenerate_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MenuSubstitutionsDuringGenerate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Menus_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Menus_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Menus_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Menus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolMenus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenus_AddMenuEntryObject, "AddMenuEntryObject" }, // 291493764
		{ &Z_Construct_UFunction_UToolMenus_ExtendMenu, "ExtendMenu" }, // 1222412647
		{ &Z_Construct_UFunction_UToolMenus_FindContext, "FindContext" }, // 3105917274
		{ &Z_Construct_UFunction_UToolMenus_FindMenu, "FindMenu" }, // 347366894
		{ &Z_Construct_UFunction_UToolMenus_Get, "Get" }, // 3974025749
		{ &Z_Construct_UFunction_UToolMenus_IsMenuRegistered, "IsMenuRegistered" }, // 334036208
		{ &Z_Construct_UFunction_UToolMenus_RefreshAllWidgets, "RefreshAllWidgets" }, // 2786357984
		{ &Z_Construct_UFunction_UToolMenus_RefreshMenuWidget, "RefreshMenuWidget" }, // 2222474488
		{ &Z_Construct_UFunction_UToolMenus_RegisterMenu, "RegisterMenu" }, // 2832788952
		{ &Z_Construct_UFunction_UToolMenus_RemoveEntry, "RemoveEntry" }, // 566629175
		{ &Z_Construct_UFunction_UToolMenus_RemoveMenu, "RemoveMenu" }, // 3657860790
		{ &Z_Construct_UFunction_UToolMenus_RemoveSection, "RemoveSection" }, // 3999478613
		{ &Z_Construct_UFunction_UToolMenus_SetSectionLabel, "SetSectionLabel" }, // 1428066664
		{ &Z_Construct_UFunction_UToolMenus_SetSectionPosition, "SetSectionPosition" }, // 2075683400
		{ &Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName, "UnregisterOwnerByName" }, // 2960181567
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenus.h" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_Inner = { "CustomizedMenus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizedToolMenu, METADATA_PARAMS(nullptr, 0) }; // 99546435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus = { "CustomizedMenus", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenus, CustomizedMenus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_MetaData)) }; // 99546435
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_ValueProp = { "MenuSubstitutionsDuringGenerate", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_Key_KeyProp = { "MenuSubstitutionsDuringGenerate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Allow substituting one menu for another during generate but not during find or extend */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Allow substituting one menu for another during generate but not during find or extend" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate = { "MenuSubstitutionsDuringGenerate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenus, MenuSubstitutionsDuringGenerate), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_ValueProp = { "Menus", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_Key_KeyProp = { "Menus_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus = { "Menus", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenus, Menus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenus_Statics::ClassParams = {
		&UToolMenus::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UToolMenus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenus()
	{
		if (!Z_Registration_Info_UClass_UToolMenus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenus.OuterSingleton, Z_Construct_UClass_UToolMenus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenus.OuterSingleton;
	}
	template<> TOOLMENUS_API UClass* StaticClass<UToolMenus>()
	{
		return UToolMenus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenus);
	UToolMenus::~UToolMenus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenus, UToolMenus::StaticClass, TEXT("UToolMenus"), &Z_Registration_Info_UClass_UToolMenus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenus), 2737338219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_1662698545(TEXT("/Script/ToolMenus"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
