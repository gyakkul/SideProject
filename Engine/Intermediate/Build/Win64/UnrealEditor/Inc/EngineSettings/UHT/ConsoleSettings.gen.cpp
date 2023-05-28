// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings_NoRegister();
	ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoCompleteCommand;
class UScriptStruct* FAutoCompleteCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoCompleteCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoCompleteCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteCommand, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("AutoCompleteCommand"));
	}
	return Z_Registration_Info_UScriptStruct_AutoCompleteCommand.OuterSingleton;
}
template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<FAutoCompleteCommand>()
{
	return FAutoCompleteCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for auto-complete commands and their descriptions.\n */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Structure for auto-complete commands and their descriptions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoCompleteCommand, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoCompleteCommand, Desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
		nullptr,
		&NewStructOps,
		"AutoCompleteCommand",
		sizeof(FAutoCompleteCommand),
		alignof(FAutoCompleteCommand),
		Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoCompleteCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoCompleteCommand.InnerSingleton, Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoCompleteCommand.InnerSingleton;
	}
	void UConsoleSettings::StaticRegisterNativesUConsoleSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleSettings);
	UClass* Z_Construct_UClass_UConsoleSettings_NoRegister()
	{
		return UConsoleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScrollbackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxScrollbackSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualAutoCompleteList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualAutoCompleteList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManualAutoCompleteList;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutoCompleteMapPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteMapPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteMapPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundOpacityPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundOpacityPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrderTopToBottom_MetaData[];
#endif
		static void NewProp_bOrderTopToBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderTopToBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayHelpInAutoComplete_MetaData[];
#endif
		static void NewProp_bDisplayHelpInAutoComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayHelpInAutoComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCommandColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCommandColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCVarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCVarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteFadedColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoCompleteFadedColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the UConsole class.\n */" },
		{ "IncludePath", "ConsoleSettings.h" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Implements the settings for the UConsole class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The maximum number of lines the console keeps in its output history. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The maximum number of lines the console keeps in its output history." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize = { "MaxScrollbackSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, MaxScrollbackSize), METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_Inner = { "ManualAutoCompleteList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutoCompleteCommand, METADATA_PARAMS(nullptr, 0) }; // 1172049669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** Manual list of auto-complete commands and info specified in BaseInput.ini */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Manual list of auto-complete commands and info specified in BaseInput.ini" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList = { "ManualAutoCompleteList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, ManualAutoCompleteList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_MetaData)) }; // 1172049669
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_Inner = { "AutoCompleteMapPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths = { "AutoCompleteMapPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteMapPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage_MetaData[] = {
		{ "Category", "Colors" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount of transparency of the console background. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Amount of transparency of the console background." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage = { "BackgroundOpacityPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, BackgroundOpacityPercentage), METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering" },
	};
#endif
	void Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_SetBit(void* Obj)
	{
		((UConsoleSettings*)Obj)->bOrderTopToBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom = { "bOrderTopToBottom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConsoleSettings), &Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "Comment", "/** Display the first line of any available help text in the auto-complete window, if a description isn't available */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Display the first line of any available help text in the auto-complete window, if a description isn't available" },
	};
#endif
	void Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_SetBit(void* Obj)
	{
		((UConsoleSettings*)Obj)->bDisplayHelpInAutoComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete = { "bDisplayHelpInAutoComplete", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConsoleSettings), &Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The color used for text input. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The color used for text input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor = { "InputColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, InputColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The color used for the previously typed commands history. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The color used for the previously typed commands history." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor = { "HistoryColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, HistoryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The autocomplete color used for executable commands. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for executable commands." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor = { "AutoCompleteCommandColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCommandColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The autocomplete color used for mutable CVars. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for mutable CVars." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor = { "AutoCompleteCVarColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCVarColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** The autocomplete color used for command descriptions and read-only CVars. */" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for command descriptions and read-only CVars." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor = { "AutoCompleteFadedColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleSettings, AutoCompleteFadedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bDisplayHelpInAutoComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleSettings_Statics::ClassParams = {
		&UConsoleSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsoleSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleSettings()
	{
		if (!Z_Registration_Info_UClass_UConsoleSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleSettings.OuterSingleton, Z_Construct_UClass_UConsoleSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsoleSettings.OuterSingleton;
	}
	template<> ENGINESETTINGS_API UClass* StaticClass<UConsoleSettings>()
	{
		return UConsoleSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleSettings);
	UConsoleSettings::~UConsoleSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ScriptStructInfo[] = {
		{ FAutoCompleteCommand::StaticStruct, Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewStructOps, TEXT("AutoCompleteCommand"), &Z_Registration_Info_UScriptStruct_AutoCompleteCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoCompleteCommand), 1172049669U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleSettings, UConsoleSettings::StaticClass, TEXT("UConsoleSettings"), &Z_Registration_Info_UClass_UConsoleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleSettings), 1827804722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_2239202320(TEXT("/Script/EngineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
