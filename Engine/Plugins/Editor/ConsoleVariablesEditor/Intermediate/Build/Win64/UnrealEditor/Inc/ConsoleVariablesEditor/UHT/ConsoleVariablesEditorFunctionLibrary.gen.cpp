// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleVariablesEditorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleVariablesEditorFunctionLibrary() {}
// Cross Module References
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary();
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_NoRegister();
	CONSOLEVARIABLESEDITORRUNTIME_API UClass* Z_Construct_UClass_UConsoleVariablesAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ConsoleVariablesEditor();
// End Cross Module References
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execSetEnableMultiUserCVarSync)
	{
		P_GET_UBOOL(Z_Param_bNewSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleVariablesEditorFunctionLibrary::SetEnableMultiUserCVarSync(Z_Param_bNewSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execGetEnableMultiUserCVarSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::GetEnableMultiUserCVarSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execGetConsoleVariableSourceByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::GetConsoleVariableSourceByName(Z_Param_InCommandName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execGetConsoleVariableStringValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::GetConsoleVariableStringValue(Z_Param_InCommandName,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::SetConsoleVariableByName_String(Z_Param_InCommandName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_Int)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::SetConsoleVariableByName_Int(Z_Param_InCommandName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_Bool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::SetConsoleVariableByName_Bool(Z_Param_InCommandName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_Float)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::SetConsoleVariableByName_Float(Z_Param_InCommandName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execGetListOfCommandsFromPreset)
	{
		P_GET_OBJECT(UConsoleVariablesAsset,Z_Param_InAsset);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCommandList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::GetListOfCommandsFromPreset(Z_Param_InAsset,Z_Param_Out_OutCommandList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execRemoveCommandFromCurrentPreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::RemoveCommandFromCurrentPreset(Z_Param_NewCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execAddValidatedCommandToCurrentPreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::AddValidatedCommandToCurrentPreset(Z_Param_NewCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execCopyCurrentListToAsset)
	{
		P_GET_OBJECT(UConsoleVariablesAsset,Z_Param_InAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::CopyCurrentListToAsset(Z_Param_InAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execLoadPresetIntoConsoleVariablesEditor)
	{
		P_GET_OBJECT(UConsoleVariablesAsset,Z_Param_InAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleVariablesEditorFunctionLibrary::LoadPresetIntoConsoleVariablesEditor(Z_Param_InAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesEditorFunctionLibrary::execGetCurrentlyLoadedPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConsoleVariablesAsset**)Z_Param__Result=UConsoleVariablesEditorFunctionLibrary::GetCurrentlyLoadedPreset();
		P_NATIVE_END;
	}
	void UConsoleVariablesEditorFunctionLibrary::StaticRegisterNativesUConsoleVariablesEditorFunctionLibrary()
	{
		UClass* Class = UConsoleVariablesEditorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddValidatedCommandToCurrentPreset", &UConsoleVariablesEditorFunctionLibrary::execAddValidatedCommandToCurrentPreset },
			{ "CopyCurrentListToAsset", &UConsoleVariablesEditorFunctionLibrary::execCopyCurrentListToAsset },
			{ "GetConsoleVariableSourceByName", &UConsoleVariablesEditorFunctionLibrary::execGetConsoleVariableSourceByName },
			{ "GetConsoleVariableStringValue", &UConsoleVariablesEditorFunctionLibrary::execGetConsoleVariableStringValue },
			{ "GetCurrentlyLoadedPreset", &UConsoleVariablesEditorFunctionLibrary::execGetCurrentlyLoadedPreset },
			{ "GetEnableMultiUserCVarSync", &UConsoleVariablesEditorFunctionLibrary::execGetEnableMultiUserCVarSync },
			{ "GetListOfCommandsFromPreset", &UConsoleVariablesEditorFunctionLibrary::execGetListOfCommandsFromPreset },
			{ "LoadPresetIntoConsoleVariablesEditor", &UConsoleVariablesEditorFunctionLibrary::execLoadPresetIntoConsoleVariablesEditor },
			{ "RemoveCommandFromCurrentPreset", &UConsoleVariablesEditorFunctionLibrary::execRemoveCommandFromCurrentPreset },
			{ "SetConsoleVariableByName_Bool", &UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_Bool },
			{ "SetConsoleVariableByName_Float", &UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_Float },
			{ "SetConsoleVariableByName_Int", &UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_Int },
			{ "SetConsoleVariableByName_String", &UConsoleVariablesEditorFunctionLibrary::execSetConsoleVariableByName_String },
			{ "SetEnableMultiUserCVarSync", &UConsoleVariablesEditorFunctionLibrary::execSetEnableMultiUserCVarSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventAddValidatedCommandToCurrentPreset_Parms
		{
			FString NewCommand;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_NewCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_NewCommand = { "NewCommand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventAddValidatedCommandToCurrentPreset_Parms, NewCommand), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_NewCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_NewCommand_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventAddValidatedCommandToCurrentPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventAddValidatedCommandToCurrentPreset_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_NewCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/*\n\x09 * Adds a validated command to the current preset with its current value.\n\x09 * The Asset will not be automatically saved.\n\x09 * @return true if successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "* Adds a validated command to the current preset with its current value.\n* The Asset will not be automatically saved.\n* @return true if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "AddValidatedCommandToCurrentPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::ConsoleVariablesEditorFunctionLibrary_eventAddValidatedCommandToCurrentPreset_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventCopyCurrentListToAsset_Parms
		{
			UConsoleVariablesAsset* InAsset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventCopyCurrentListToAsset_Parms, InAsset), Z_Construct_UClass_UConsoleVariablesAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventCopyCurrentListToAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventCopyCurrentListToAsset_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/*\n\x09 * Saves the current list in the Console Variables Editor to the given asset.\n\x09 * The Asset will not be automatically saved.\n\x09 * @return true if successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "* Saves the current list in the Console Variables Editor to the given asset.\n* The Asset will not be automatically saved.\n* @return true if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "CopyCurrentListToAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::ConsoleVariablesEditorFunctionLibrary_eventCopyCurrentListToAsset_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableSourceByName_Parms
		{
			FString InCommandName;
			FString OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_InCommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_InCommandName = { "InCommandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableSourceByName_Parms, InCommandName), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_InCommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_InCommandName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableSourceByName_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableSourceByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableSourceByName_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_InCommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Set a console variable value directly. Returns true if the console object exists. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Set a console variable value directly. Returns true if the console object exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "GetConsoleVariableSourceByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableSourceByName_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableStringValue_Parms
		{
			FString InCommandName;
			FString OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_InCommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_InCommandName = { "InCommandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableStringValue_Parms, InCommandName), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_InCommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_InCommandName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableStringValue_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableStringValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableStringValue_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_InCommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Get a console variable's string value directly. Returns true if the console object exists. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Get a console variable's string value directly. Returns true if the console object exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "GetConsoleVariableStringValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::ConsoleVariablesEditorFunctionLibrary_eventGetConsoleVariableStringValue_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventGetCurrentlyLoadedPreset_Parms
		{
			UConsoleVariablesAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetCurrentlyLoadedPreset_Parms, ReturnValue), Z_Construct_UClass_UConsoleVariablesAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Return the currently loaded list of variables in the Console Variables Editor. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Return the currently loaded list of variables in the Console Variables Editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "GetCurrentlyLoadedPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::ConsoleVariablesEditorFunctionLibrary_eventGetCurrentlyLoadedPreset_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventGetEnableMultiUserCVarSync_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventGetEnableMultiUserCVarSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventGetEnableMultiUserCVarSync_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Return whether the Multi-user sync setting for the current instance of the editor is enabled. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Return whether the Multi-user sync setting for the current instance of the editor is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "GetEnableMultiUserCVarSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::ConsoleVariablesEditorFunctionLibrary_eventGetEnableMultiUserCVarSync_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventGetListOfCommandsFromPreset_Parms
		{
			const UConsoleVariablesAsset* InAsset;
			TArray<FString> OutCommandList;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCommandList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCommandList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetListOfCommandsFromPreset_Parms, InAsset), Z_Construct_UClass_UConsoleVariablesAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_InAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_InAsset_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_OutCommandList_Inner = { "OutCommandList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_OutCommandList = { "OutCommandList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventGetListOfCommandsFromPreset_Parms, OutCommandList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventGetListOfCommandsFromPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventGetListOfCommandsFromPreset_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_OutCommandList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_OutCommandList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Return an array of strings containing the command names for each command found in the given preset. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Return an array of strings containing the command names for each command found in the given preset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "GetListOfCommandsFromPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::ConsoleVariablesEditorFunctionLibrary_eventGetListOfCommandsFromPreset_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventLoadPresetIntoConsoleVariablesEditor_Parms
		{
			const UConsoleVariablesAsset* InAsset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventLoadPresetIntoConsoleVariablesEditor_Parms, InAsset), Z_Construct_UClass_UConsoleVariablesAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::NewProp_InAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::NewProp_InAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Loads the given asset in the Console Variables Editor and sets all its variable values. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Loads the given asset in the Console Variables Editor and sets all its variable values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "LoadPresetIntoConsoleVariablesEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::ConsoleVariablesEditorFunctionLibrary_eventLoadPresetIntoConsoleVariablesEditor_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventRemoveCommandFromCurrentPreset_Parms
		{
			FString NewCommand;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_NewCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_NewCommand = { "NewCommand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventRemoveCommandFromCurrentPreset_Parms, NewCommand), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_NewCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_NewCommand_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventRemoveCommandFromCurrentPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventRemoveCommandFromCurrentPreset_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_NewCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/*\n\x09 * Removes a command from the current preset if it exists in the saved data.\n\x09 * The Asset will not be automatically saved.\n\x09 * @return true if successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "* Removes a command from the current preset if it exists in the saved data.\n* The Asset will not be automatically saved.\n* @return true if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "RemoveCommandFromCurrentPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::ConsoleVariablesEditorFunctionLibrary_eventRemoveCommandFromCurrentPreset_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms
		{
			FString InCommandName;
			bool InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InCommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InCommandName = { "InCommandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms, InCommandName), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InCommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InCommandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InCommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Set a console variable value directly. Returns true if the console object exists. */" },
		{ "DisplayName", "Set Console Variable By Name (Bool)" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Set a console variable value directly. Returns true if the console object exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "SetConsoleVariableByName_Bool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Bool_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Float_Parms
		{
			FString InCommandName;
			float InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InCommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InCommandName = { "InCommandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Float_Parms, InCommandName), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InCommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InCommandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Float_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Float_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InCommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Set a console variable value directly. Returns true if the console object exists. */" },
		{ "DisplayName", "Set Console Variable By Name (Float)" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Set a console variable value directly. Returns true if the console object exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "SetConsoleVariableByName_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Float_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Int_Parms
		{
			FString InCommandName;
			int32 InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InCommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InCommandName = { "InCommandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Int_Parms, InCommandName), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InCommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InCommandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Int_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Int_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Int_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InCommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Set a console variable value directly. Returns true if the console object exists. */" },
		{ "DisplayName", "Set Console Variable By Name (Int)" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Set a console variable value directly. Returns true if the console object exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "SetConsoleVariableByName_Int", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_Int_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_String_Parms
		{
			FString InCommandName;
			FString InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InCommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InCommandName = { "InCommandName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_String_Parms, InCommandName), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InCommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InCommandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_String_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_String_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_String_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InCommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Set a console variable value directly. Returns true if the console object exists. */" },
		{ "DisplayName", "Set Console Variable By Name (String)" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Set a console variable value directly. Returns true if the console object exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "SetConsoleVariableByName_String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::ConsoleVariablesEditorFunctionLibrary_eventSetConsoleVariableByName_String_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics
	{
		struct ConsoleVariablesEditorFunctionLibrary_eventSetEnableMultiUserCVarSync_Parms
		{
			bool bNewSetting;
		};
		static void NewProp_bNewSetting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::NewProp_bNewSetting_SetBit(void* Obj)
	{
		((ConsoleVariablesEditorFunctionLibrary_eventSetEnableMultiUserCVarSync_Parms*)Obj)->bNewSetting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::NewProp_bNewSetting = { "bNewSetting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesEditorFunctionLibrary_eventSetEnableMultiUserCVarSync_Parms), &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::NewProp_bNewSetting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::NewProp_bNewSetting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Enable or disable the Multi-user sync setting for the current instance of the editor. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "Enable or disable the Multi-user sync setting for the current instance of the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, nullptr, "SetEnableMultiUserCVarSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::ConsoleVariablesEditorFunctionLibrary_eventSetEnableMultiUserCVarSync_Parms), Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleVariablesEditorFunctionLibrary);
	UClass* Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_NoRegister()
	{
		return UConsoleVariablesEditorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_AddValidatedCommandToCurrentPreset, "AddValidatedCommandToCurrentPreset" }, // 2941386202
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_CopyCurrentListToAsset, "CopyCurrentListToAsset" }, // 650007354
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableSourceByName, "GetConsoleVariableSourceByName" }, // 546169767
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetConsoleVariableStringValue, "GetConsoleVariableStringValue" }, // 2308732600
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetCurrentlyLoadedPreset, "GetCurrentlyLoadedPreset" }, // 2704934101
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetEnableMultiUserCVarSync, "GetEnableMultiUserCVarSync" }, // 2917467914
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_GetListOfCommandsFromPreset, "GetListOfCommandsFromPreset" }, // 3283930438
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_LoadPresetIntoConsoleVariablesEditor, "LoadPresetIntoConsoleVariablesEditor" }, // 1805422222
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_RemoveCommandFromCurrentPreset, "RemoveCommandFromCurrentPreset" }, // 2001463575
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Bool, "SetConsoleVariableByName_Bool" }, // 3914082107
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Float, "SetConsoleVariableByName_Float" }, // 1205075855
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_Int, "SetConsoleVariableByName_Int" }, // 4065830556
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetConsoleVariableByName_String, "SetConsoleVariableByName_String" }, // 4181658274
		{ &Z_Construct_UFunction_UConsoleVariablesEditorFunctionLibrary_SetEnableMultiUserCVarSync, "SetEnableMultiUserCVarSync" }, // 1165764677
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset used to track collections of console variables that can be recalled and edited using the Console Variables Editor. */" },
		{ "IncludePath", "ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorFunctionLibrary.h" },
		{ "ToolTip", "An asset used to track collections of console variables that can be recalled and edited using the Console Variables Editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleVariablesEditorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::ClassParams = {
		&UConsoleVariablesEditorFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UConsoleVariablesEditorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleVariablesEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsoleVariablesEditorFunctionLibrary.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITOR_API UClass* StaticClass<UConsoleVariablesEditorFunctionLibrary>()
	{
		return UConsoleVariablesEditorFunctionLibrary::StaticClass();
	}
	UConsoleVariablesEditorFunctionLibrary::UConsoleVariablesEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleVariablesEditorFunctionLibrary);
	UConsoleVariablesEditorFunctionLibrary::~UConsoleVariablesEditorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary, UConsoleVariablesEditorFunctionLibrary::StaticClass, TEXT("UConsoleVariablesEditorFunctionLibrary"), &Z_Registration_Info_UClass_UConsoleVariablesEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleVariablesEditorFunctionLibrary), 2753221115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_94094439(TEXT("/Script/ConsoleVariablesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
