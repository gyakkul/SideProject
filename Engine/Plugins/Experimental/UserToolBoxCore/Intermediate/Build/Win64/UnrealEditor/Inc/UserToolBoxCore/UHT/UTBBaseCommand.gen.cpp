// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBBaseCommand.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBBaseCommand() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUTBBaseCommand::execAddObjectsToTransaction)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjectsToTransaction(Z_Param_Objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUTBBaseCommand::execAddObjectToTransaction)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjectToTransaction(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUTBBaseCommand::execExecuteCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteCommand();
		P_NATIVE_END;
	}
	void UUTBBaseCommand::StaticRegisterNativesUUTBBaseCommand()
	{
		UClass* Class = UUTBBaseCommand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjectsToTransaction", &UUTBBaseCommand::execAddObjectsToTransaction },
			{ "AddObjectToTransaction", &UUTBBaseCommand::execAddObjectToTransaction },
			{ "ExecuteCommand", &UUTBBaseCommand::execExecuteCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics
	{
		struct UTBBaseCommand_eventAddObjectsToTransaction_Parms
		{
			TArray<UObject*> Objects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTBBaseCommand_eventAddObjectsToTransaction_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::NewProp_Objects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transaction" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTBBaseCommand, nullptr, "AddObjectsToTransaction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::UTBBaseCommand_eventAddObjectsToTransaction_Parms), Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics
	{
		struct UTBBaseCommand_eventAddObjectToTransaction_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTBBaseCommand_eventAddObjectToTransaction_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transaction" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTBBaseCommand, nullptr, "AddObjectToTransaction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::UTBBaseCommand_eventAddObjectToTransaction_Parms), Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTBBaseCommand, nullptr, "ExecuteCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBBaseCommand);
	UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister()
	{
		return UUTBBaseCommand::StaticClass();
	}
	struct Z_Construct_UClass_UUTBBaseCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IconPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParameters_MetaData[];
#endif
		static void NewProp_bShowParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardShortcut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardShortcut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_UIOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTransaction_MetaData[];
#endif
		static void NewProp_bIsTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBBaseCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUTBBaseCommand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUTBBaseCommand_AddObjectsToTransaction, "AddObjectsToTransaction" }, // 3330414345
		{ &Z_Construct_UFunction_UUTBBaseCommand_AddObjectToTransaction, "AddObjectToTransaction" }, // 3135742866
		{ &Z_Construct_UFunction_UUTBBaseCommand_ExecuteCommand, "ExecuteCommand" }, // 1822673401
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UUTBBaseCommand is the base class for any command of the usertoolbox framework.\n * Inherit directly from this class if you want to create a new command implemented in c++\n */" },
		{ "IncludePath", "UTBBaseCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
		{ "ToolTip", "UUTBBaseCommand is the base class for any command of the usertoolbox framework.\nInherit directly from this class if you want to create a new command implemented in c++" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Command Description" },
		{ "Comment", "/** The name of the command */" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
		{ "ToolTip", "The name of the command" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, Name), METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_IconPath_MetaData[] = {
		{ "Category", "Command Description" },
		{ "Comment", "/** The icon path for the command */" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
		{ "ToolTip", "The icon path for the command" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, IconPath), METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_IconPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Command Description" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, Tooltip), METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Command Description" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, Category), METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters_MetaData[] = {
		{ "Category", "Command Description" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	void Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters_SetBit(void* Obj)
	{
		((UUTBBaseCommand*)Obj)->bShowParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters = { "bShowParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUTBBaseCommand), &Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_KeyboardShortcut_MetaData[] = {
		{ "Category", "Command Description" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_KeyboardShortcut = { "KeyboardShortcut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, KeyboardShortcut), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_KeyboardShortcut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_KeyboardShortcut_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UIOverride_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Command Description" },
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
		{ "MustImplement", "/Script/UserToolBoxCore.UTBUICommand" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UIOverride = { "UIOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, UIOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UIOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UIOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UI = { "UI", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBBaseCommand, UI), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction_MetaData[] = {
		{ "ModuleRelativePath", "Public/UTBBaseCommand.h" },
	};
#endif
	void Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction_SetBit(void* Obj)
	{
		((UUTBBaseCommand*)Obj)->bIsTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction = { "bIsTransaction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUTBBaseCommand), &Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUTBBaseCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_IconPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bShowParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_KeyboardShortcut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UIOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_UI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBBaseCommand_Statics::NewProp_bIsTransaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBBaseCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBBaseCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBBaseCommand_Statics::ClassParams = {
		&UUTBBaseCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUTBBaseCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBBaseCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBBaseCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBBaseCommand()
	{
		if (!Z_Registration_Info_UClass_UUTBBaseCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBBaseCommand.OuterSingleton, Z_Construct_UClass_UUTBBaseCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBBaseCommand.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBBaseCommand>()
	{
		return UUTBBaseCommand::StaticClass();
	}
	UUTBBaseCommand::UUTBBaseCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBBaseCommand);
	UUTBBaseCommand::~UUTBBaseCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTBBaseCommand, UUTBBaseCommand::StaticClass, TEXT("UUTBBaseCommand"), &Z_Registration_Info_UClass_UUTBBaseCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBBaseCommand), 2840930045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_314320879(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
