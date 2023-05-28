// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICommandsScriptingSubsystem.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUICommandsScriptingSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	SLATESCRIPTINGCOMMANDS_API UClass* Z_Construct_UClass_UUICommandsScriptingSubsystem();
	SLATESCRIPTINGCOMMANDS_API UClass* Z_Construct_UClass_UUICommandsScriptingSubsystem_NoRegister();
	SLATESCRIPTINGCOMMANDS_API UFunction* Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature();
	SLATESCRIPTINGCOMMANDS_API UFunction* Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature();
	SLATESCRIPTINGCOMMANDS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommand();
	SLATESCRIPTINGCOMMANDS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommandInfo();
	SLATESCRIPTINGCOMMANDS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommandsContext();
	SLATESCRIPTINGCOMMANDS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommandSet();
	UPackage* Z_Construct_UPackage__Script_SlateScriptingCommands();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptingCommandInfo;
class UScriptStruct* FScriptingCommandInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptingCommandInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptingCommandInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptingCommandInfo, (UObject*)Z_Construct_UPackage__Script_SlateScriptingCommands(), TEXT("ScriptingCommandInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptingCommandInfo.OuterSingleton;
}
template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<FScriptingCommandInfo>()
{
	return FScriptingCommandInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputChord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The data defining a scripting command. At the exception of its delegates.\n */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The data defining a scripting command. At the exception of its delegates." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptingCommandInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_ContextName_MetaData[] = {
		{ "Category", "Editor Scripting | Commands" },
		{ "Comment", "/** The editor context this command is bound to */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The editor context this command is bound to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptingCommandInfo, ContextName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_ContextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_ContextName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Set_MetaData[] = {
		{ "Category", "Editor Scripting | Commands" },
		{ "Comment", "/** The command set this command belongs to. This is to avoid conflicts and could refer to the owner of the command */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The command set this command belongs to. This is to avoid conflicts and could refer to the owner of the command" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptingCommandInfo, Set), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Set_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Editor Scripting | Commands" },
		{ "Comment", "/** The command name. Must be unique in its set. */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The command name. Must be unique in its set." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptingCommandInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Editor Scripting | Commands" },
		{ "Comment", "/** The command label or what name will be displayed for it */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The command label or what name will be displayed for it" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptingCommandInfo, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Editor Scripting | Commands" },
		{ "Comment", "/** The description of the command */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The description of the command" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptingCommandInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_InputChord_MetaData[] = {
		{ "Category", "Editor Scripting | Commands" },
		{ "Comment", "/** The input chord to bound to the command */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The input chord to bound to the command" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptingCommandInfo, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_InputChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_InputChord_MetaData)) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_ContextName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewProp_InputChord,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateScriptingCommands,
		nullptr,
		&NewStructOps,
		"ScriptingCommandInfo",
		sizeof(FScriptingCommandInfo),
		alignof(FScriptingCommandInfo),
		Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommandInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptingCommandInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptingCommandInfo.InnerSingleton, Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptingCommandInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics
	{
		struct _Script_SlateScriptingCommands_eventExecuteCommand_Parms
		{
			FScriptingCommandInfo CommandInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SlateScriptingCommands_eventExecuteCommand_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::NewProp_CommandInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exposing FExecuteAction as dynamic */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Exposing FExecuteAction as dynamic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SlateScriptingCommands, nullptr, "ExecuteCommand__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::_Script_SlateScriptingCommands_eventExecuteCommand_Parms), Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FExecuteCommand_DelegateWrapper(const FScriptDelegate& ExecuteCommand, FScriptingCommandInfo CommandInfo)
{
	struct _Script_SlateScriptingCommands_eventExecuteCommand_Parms
	{
		FScriptingCommandInfo CommandInfo;
	};
	_Script_SlateScriptingCommands_eventExecuteCommand_Parms Parms;
	Parms.CommandInfo=CommandInfo;
	ExecuteCommand.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics
	{
		struct _Script_SlateScriptingCommands_eventCanExecuteCommand_Parms
		{
			FScriptingCommandInfo CommandInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SlateScriptingCommands_eventCanExecuteCommand_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	void Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_SlateScriptingCommands_eventCanExecuteCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SlateScriptingCommands_eventCanExecuteCommand_Parms), &Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::NewProp_CommandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exposing FCanExecuteAction as dynamic */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Exposing FCanExecuteAction as dynamic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SlateScriptingCommands, nullptr, "CanExecuteCommand__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::_Script_SlateScriptingCommands_eventCanExecuteCommand_Parms), Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FCanExecuteCommand_DelegateWrapper(const FScriptDelegate& CanExecuteCommand, FScriptingCommandInfo CommandInfo)
{
	struct _Script_SlateScriptingCommands_eventCanExecuteCommand_Parms
	{
		FScriptingCommandInfo CommandInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_SlateScriptingCommands_eventCanExecuteCommand_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_SlateScriptingCommands_eventCanExecuteCommand_Parms Parms;
	Parms.CommandInfo=CommandInfo;
	CanExecuteCommand.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptingCommand;
class UScriptStruct* FScriptingCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptingCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptingCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptingCommand, (UObject*)Z_Construct_UPackage__Script_SlateScriptingCommands(), TEXT("ScriptingCommand"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptingCommand.OuterSingleton;
}
template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<FScriptingCommand>()
{
	return FScriptingCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptingCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * All the internal data related to a scripting command as well as methods to easily expose the command to the binding manager\n */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "All the internal data related to a scripting command as well as methods to easily expose the command to the binding manager" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptingCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptingCommand>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptingCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateScriptingCommands,
		nullptr,
		&NewStructOps,
		"ScriptingCommand",
		sizeof(FScriptingCommand),
		alignof(FScriptingCommand),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptingCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptingCommand.InnerSingleton, Z_Construct_UScriptStruct_FScriptingCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptingCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptingCommandsContext;
class UScriptStruct* FScriptingCommandsContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptingCommandsContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptingCommandsContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptingCommandsContext, (UObject*)Z_Construct_UPackage__Script_SlateScriptingCommands(), TEXT("ScriptingCommandsContext"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptingCommandsContext.OuterSingleton;
}
template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<FScriptingCommandsContext>()
{
	return FScriptingCommandsContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The list of commands and UI Command Lists associated with a context.\n * This enables easier management of commands within registered contexts and their UI Command Lists.\n */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The list of commands and UI Command Lists associated with a context.\nThis enables easier management of commands within registered contexts and their UI Command Lists." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptingCommandsContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateScriptingCommands,
		nullptr,
		&NewStructOps,
		"ScriptingCommandsContext",
		sizeof(FScriptingCommandsContext),
		alignof(FScriptingCommandsContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommandsContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptingCommandsContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptingCommandsContext.InnerSingleton, Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptingCommandsContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptingCommandSet;
class UScriptStruct* FScriptingCommandSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptingCommandSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptingCommandSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptingCommandSet, (UObject*)Z_Construct_UPackage__Script_SlateScriptingCommands(), TEXT("ScriptingCommandSet"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptingCommandSet.OuterSingleton;
}
template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<FScriptingCommandSet>()
{
	return FScriptingCommandSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptingCommandSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * To avoid conflicts between scripts, each command is associated to a command set which must be registered manually.\n */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "To avoid conflicts between scripts, each command is associated to a command set which must be registered manually." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptingCommandSet>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateScriptingCommands,
		nullptr,
		&NewStructOps,
		"ScriptingCommandSet",
		sizeof(FScriptingCommandSet),
		alignof(FScriptingCommandSet),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptingCommandSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptingCommandSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptingCommandSet.InnerSingleton, Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptingCommandSet.InnerSingleton;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execDefaultCanExecuteAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DefaultCanExecuteAction(Z_Param_SetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execHandleCanExecuteAction)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCanExecuteAction);
		P_GET_STRUCT(FScriptingCommandInfo,Z_Param_CommandInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleCanExecuteAction(FCanExecuteCommand(Z_Param_OnCanExecuteAction),Z_Param_CommandInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execHandleExecuteAction)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnExecuteAction);
		P_GET_STRUCT(FScriptingCommandInfo,Z_Param_CommandInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUICommandsScriptingSubsystem::HandleExecuteAction(FExecuteCommand(Z_Param_OnExecuteAction),Z_Param_CommandInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execIsInputChordMapped)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ContextName);
		P_GET_STRUCT(FInputChord,Z_Param_InputChord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputChordMapped(Z_Param_ContextName,Z_Param_InputChord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execGetBindingCountForContext)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ContextName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBindingCountForContext(Z_Param_ContextName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execIsContextRegistered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ContextName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContextRegistered(Z_Param_ContextName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execGetAvailableContexts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAvailableContexts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execCanSetExecuteCommands)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSetExecuteCommands(Z_Param_SetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execSetCanSetExecuteCommands)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SetName);
		P_GET_UBOOL(Z_Param_bShouldExecuteCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanSetExecuteCommands(Z_Param_SetName,Z_Param_bShouldExecuteCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execUnregisterCommandSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterCommandSet(Z_Param_SetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execIsCommandSetRegistered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCommandSetRegistered(Z_Param_SetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execRegisterCommandSet)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterCommandSet(Z_Param_SetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execUnregisterAllSets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterAllSets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execSetCanExecuteCommands)
	{
		P_GET_UBOOL(Z_Param_bShouldExecuteCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanExecuteCommands(Z_Param_bShouldExecuteCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execCanExecuteCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecuteCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execGetRegisteredCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptingCommandInfo>*)Z_Param__Result=P_THIS->GetRegisteredCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execIsCommandRegistered)
	{
		P_GET_STRUCT(FScriptingCommandInfo,Z_Param_CommandInfo);
		P_GET_UBOOL(Z_Param_bCheckInputChord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCommandRegistered(Z_Param_CommandInfo,Z_Param_bCheckInputChord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execUnregisterCommand)
	{
		P_GET_STRUCT(FScriptingCommandInfo,Z_Param_CommandInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterCommand(Z_Param_CommandInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execRegisterCommandChecked)
	{
		P_GET_STRUCT(FScriptingCommandInfo,Z_Param_CommandInfo);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnExecuteCommand);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCanExecuteCommand);
		P_GET_UBOOL(Z_Param_bOverrideExisting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterCommandChecked(Z_Param_CommandInfo,FExecuteCommand(Z_Param_OnExecuteCommand),FCanExecuteCommand(Z_Param_OnCanExecuteCommand),Z_Param_bOverrideExisting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUICommandsScriptingSubsystem::execRegisterCommand)
	{
		P_GET_STRUCT(FScriptingCommandInfo,Z_Param_CommandInfo);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnExecuteCommand);
		P_GET_UBOOL(Z_Param_bOverrideExisting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterCommand(Z_Param_CommandInfo,FExecuteCommand(Z_Param_OnExecuteCommand),Z_Param_bOverrideExisting);
		P_NATIVE_END;
	}
	void UUICommandsScriptingSubsystem::StaticRegisterNativesUUICommandsScriptingSubsystem()
	{
		UClass* Class = UUICommandsScriptingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanExecuteCommands", &UUICommandsScriptingSubsystem::execCanExecuteCommands },
			{ "CanSetExecuteCommands", &UUICommandsScriptingSubsystem::execCanSetExecuteCommands },
			{ "DefaultCanExecuteAction", &UUICommandsScriptingSubsystem::execDefaultCanExecuteAction },
			{ "GetAvailableContexts", &UUICommandsScriptingSubsystem::execGetAvailableContexts },
			{ "GetBindingCountForContext", &UUICommandsScriptingSubsystem::execGetBindingCountForContext },
			{ "GetRegisteredCommands", &UUICommandsScriptingSubsystem::execGetRegisteredCommands },
			{ "HandleCanExecuteAction", &UUICommandsScriptingSubsystem::execHandleCanExecuteAction },
			{ "HandleExecuteAction", &UUICommandsScriptingSubsystem::execHandleExecuteAction },
			{ "IsCommandRegistered", &UUICommandsScriptingSubsystem::execIsCommandRegistered },
			{ "IsCommandSetRegistered", &UUICommandsScriptingSubsystem::execIsCommandSetRegistered },
			{ "IsContextRegistered", &UUICommandsScriptingSubsystem::execIsContextRegistered },
			{ "IsInputChordMapped", &UUICommandsScriptingSubsystem::execIsInputChordMapped },
			{ "RegisterCommand", &UUICommandsScriptingSubsystem::execRegisterCommand },
			{ "RegisterCommandChecked", &UUICommandsScriptingSubsystem::execRegisterCommandChecked },
			{ "RegisterCommandSet", &UUICommandsScriptingSubsystem::execRegisterCommandSet },
			{ "SetCanExecuteCommands", &UUICommandsScriptingSubsystem::execSetCanExecuteCommands },
			{ "SetCanSetExecuteCommands", &UUICommandsScriptingSubsystem::execSetCanSetExecuteCommands },
			{ "UnregisterAllSets", &UUICommandsScriptingSubsystem::execUnregisterAllSets },
			{ "UnregisterCommand", &UUICommandsScriptingSubsystem::execUnregisterCommand },
			{ "UnregisterCommandSet", &UUICommandsScriptingSubsystem::execUnregisterCommandSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics
	{
		struct UICommandsScriptingSubsystem_eventCanExecuteCommands_Parms
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
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventCanExecuteCommands_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventCanExecuteCommands_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Global" },
		{ "Comment", "/** Checks whether commands registered in the subsystem can be executed */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Checks whether commands registered in the subsystem can be executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "CanExecuteCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::UICommandsScriptingSubsystem_eventCanExecuteCommands_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics
	{
		struct UICommandsScriptingSubsystem_eventCanSetExecuteCommands_Parms
		{
			FName SetName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_SetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventCanSetExecuteCommands_Parms, SetName), METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_SetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_SetName_MetaData)) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventCanSetExecuteCommands_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventCanSetExecuteCommands_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_SetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Sets" },
		{ "Comment", "/** Checks whether commands in the given set can be executed. This will also check CanExecuteCommands at a global scope */" },
		{ "DisplayName", "Can Execute Commands" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Checks whether commands in the given set can be executed. This will also check CanExecuteCommands at a global scope" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "CanSetExecuteCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::UICommandsScriptingSubsystem_eventCanSetExecuteCommands_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics
	{
		struct UICommandsScriptingSubsystem_eventDefaultCanExecuteAction_Parms
		{
			FName SetName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventDefaultCanExecuteAction_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventDefaultCanExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventDefaultCanExecuteAction_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::NewProp_SetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * The default delegate to check if a command can be executed (when the user does not provide a specific delegate).\n\x09 * @return true if the given set and all subsystem commands are enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The default delegate to check if a command can be executed (when the user does not provide a specific delegate).\n@return true if the given set and all subsystem commands are enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "DefaultCanExecuteAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::UICommandsScriptingSubsystem_eventDefaultCanExecuteAction_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics
	{
		struct UICommandsScriptingSubsystem_eventGetAvailableContexts_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventGetAvailableContexts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Contexts" },
		{ "Comment", "/**\n\x09 * Retrieves the list of names for all contexts currently registered in the subsystem.\n\x09 * This does not check whether the contexts are bound to any UI Command List. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Retrieves the list of names for all contexts currently registered in the subsystem.\nThis does not check whether the contexts are bound to any UI Command List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "GetAvailableContexts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::UICommandsScriptingSubsystem_eventGetAvailableContexts_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics
	{
		struct UICommandsScriptingSubsystem_eventGetBindingCountForContext_Parms
		{
			FName ContextName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventGetBindingCountForContext_Parms, ContextName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventGetBindingCountForContext_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::NewProp_ContextName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Contexts" },
		{ "Comment", "/**\n\x09 * Retrieves the number of UI Command Lists registered within this context through the subsystem.\n\x09 * UI Command Lists are typically used to bind the list of commands associated with a single UI (i.e. a single viewport).\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Retrieves the number of UI Command Lists registered within this context through the subsystem.\nUI Command Lists are typically used to bind the list of commands associated with a single UI (i.e. a single viewport)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "GetBindingCountForContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::UICommandsScriptingSubsystem_eventGetBindingCountForContext_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics
	{
		struct UICommandsScriptingSubsystem_eventGetRegisteredCommands_Parms
		{
			TArray<FScriptingCommandInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventGetRegisteredCommands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 183492535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Global" },
		{ "Comment", "/** Retrieves the list of command info for all commands currently registered in the subsystem */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Retrieves the list of command info for all commands currently registered in the subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "GetRegisteredCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::UICommandsScriptingSubsystem_eventGetRegisteredCommands_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics
	{
		struct UICommandsScriptingSubsystem_eventHandleCanExecuteAction_Parms
		{
			FScriptDelegate OnCanExecuteAction;
			FScriptingCommandInfo CommandInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCanExecuteAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_OnCanExecuteAction = { "OnCanExecuteAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventHandleCanExecuteAction_Parms, OnCanExecuteAction), Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2314382687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_CommandInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventHandleCanExecuteAction_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_CommandInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_CommandInfo_MetaData)) }; // 183492535
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventHandleCanExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventHandleCanExecuteAction_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_OnCanExecuteAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_CommandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * The delegate used to check whether a command can be executed.\n\x09 * @return true if the given delegate returns true and the given set and all subsystem commands are enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The delegate used to check whether a command can be executed.\n@return true if the given delegate returns true and the given set and all subsystem commands are enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "HandleCanExecuteAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::UICommandsScriptingSubsystem_eventHandleCanExecuteAction_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics
	{
		struct UICommandsScriptingSubsystem_eventHandleExecuteAction_Parms
		{
			FScriptDelegate OnExecuteAction;
			FScriptingCommandInfo CommandInfo;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnExecuteAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_OnExecuteAction = { "OnExecuteAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventHandleExecuteAction_Parms, OnExecuteAction), Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4029008274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_CommandInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventHandleExecuteAction_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_CommandInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_CommandInfo_MetaData)) }; // 183492535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_OnExecuteAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::NewProp_CommandInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** The delegate bound to registered commands. It will broadcast back to the given dynamic delegate */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "The delegate bound to registered commands. It will broadcast back to the given dynamic delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "HandleExecuteAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::UICommandsScriptingSubsystem_eventHandleExecuteAction_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics
	{
		struct UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms
		{
			FScriptingCommandInfo CommandInfo;
			bool bCheckInputChord;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static void NewProp_bCheckInputChord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckInputChord;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_bCheckInputChord_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms*)Obj)->bCheckInputChord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_bCheckInputChord = { "bCheckInputChord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_bCheckInputChord_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_CommandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_bCheckInputChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands |" },
		{ "Comment", "/** Checks whether the given command is registered within the subsystem. Using name, set and context for comparison */" },
		{ "CPP_Default_bCheckInputChord", "true" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Checks whether the given command is registered within the subsystem. Using name, set and context for comparison" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "IsCommandRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::UICommandsScriptingSubsystem_eventIsCommandRegistered_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics
	{
		struct UICommandsScriptingSubsystem_eventIsCommandSetRegistered_Parms
		{
			FName SetName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventIsCommandSetRegistered_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventIsCommandSetRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventIsCommandSetRegistered_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::NewProp_SetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Sets" },
		{ "Comment", "/** Checks whether the given set is currently registered in the subsystem */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Checks whether the given set is currently registered in the subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "IsCommandSetRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::UICommandsScriptingSubsystem_eventIsCommandSetRegistered_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics
	{
		struct UICommandsScriptingSubsystem_eventIsContextRegistered_Parms
		{
			FName ContextName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventIsContextRegistered_Parms, ContextName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventIsContextRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventIsContextRegistered_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::NewProp_ContextName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Contexts" },
		{ "Comment", "/**\n\x09 * Checks whether the context with the given name is currently registered in the subsystem\n\x09 * This does not check whether the context is bound to any UI Command List. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Checks whether the context with the given name is currently registered in the subsystem\nThis does not check whether the context is bound to any UI Command List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "IsContextRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::UICommandsScriptingSubsystem_eventIsContextRegistered_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics
	{
		struct UICommandsScriptingSubsystem_eventIsInputChordMapped_Parms
		{
			FName ContextName;
			FInputChord InputChord;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputChord;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_ContextName = { "ContextName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventIsInputChordMapped_Parms, ContextName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventIsInputChordMapped_Parms, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventIsInputChordMapped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventIsInputChordMapped_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_ContextName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_InputChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Contexts" },
		{ "Comment", "/**\n\x09 * Checks whether the given input chord is already mapped to a command in the given context.\n\x09 * This includes commands not registered through the subsystem.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Checks whether the given input chord is already mapped to a command in the given context.\nThis includes commands not registered through the subsystem." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "IsInputChordMapped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::UICommandsScriptingSubsystem_eventIsInputChordMapped_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics
	{
		struct UICommandsScriptingSubsystem_eventRegisterCommand_Parms
		{
			FScriptingCommandInfo CommandInfo;
			FScriptDelegate OnExecuteCommand;
			bool bOverrideExisting;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnExecuteCommand;
		static void NewProp_bOverrideExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideExisting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventRegisterCommand_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_OnExecuteCommand = { "OnExecuteCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventRegisterCommand_Parms, OnExecuteCommand), Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4029008274
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_bOverrideExisting_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventRegisterCommand_Parms*)Obj)->bOverrideExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_bOverrideExisting = { "bOverrideExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventRegisterCommand_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_bOverrideExisting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventRegisterCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventRegisterCommand_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_CommandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_OnExecuteCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_bOverrideExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands |" },
		{ "Comment", "/**\n\x09 * Registers a command within the given context and set.\n\x09 * The set must be registered beforehand.\n\x09 * @param\x09""CommandInfo\x09\x09\x09The command infos such as name, label, description and input chord.\n\x09 * @param\x09OnExecuteCommand\x09The delegate to be executed for handling this command.\n\x09 * @param\x09""bOverrideExisting\x09Whether existing command with matching context, set and name should be overriden\n\x09 * @return Whether the command was succesfully registered\n\x09 */" },
		{ "CPP_Default_bOverrideExisting", "false" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Registers a command within the given context and set.\nThe set must be registered beforehand.\n@param       CommandInfo                     The command infos such as name, label, description and input chord.\n@param       OnExecuteCommand        The delegate to be executed for handling this command.\n@param       bOverrideExisting       Whether existing command with matching context, set and name should be overriden\n@return Whether the command was succesfully registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "RegisterCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::UICommandsScriptingSubsystem_eventRegisterCommand_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics
	{
		struct UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms
		{
			FScriptingCommandInfo CommandInfo;
			FScriptDelegate OnExecuteCommand;
			FScriptDelegate OnCanExecuteCommand;
			bool bOverrideExisting;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnExecuteCommand;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCanExecuteCommand;
		static void NewProp_bOverrideExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideExisting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_OnExecuteCommand = { "OnExecuteCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms, OnExecuteCommand), Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4029008274
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_OnCanExecuteCommand = { "OnCanExecuteCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms, OnCanExecuteCommand), Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2314382687
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_bOverrideExisting_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms*)Obj)->bOverrideExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_bOverrideExisting = { "bOverrideExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_bOverrideExisting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_CommandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_OnExecuteCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_OnCanExecuteCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_bOverrideExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands |" },
		{ "Comment", "/**\n\x09 * Registers a command within the given context and set.\n\x09 * The set must be registered beforehand.\n\x09 * @param\x09""CommandInfo\x09\x09\x09\x09The command infos such as name, label, description and input chord.\n\x09 * @param\x09OnExecuteCommand \x09\x09The delegate to be executed for handling this command.\n\x09 * @param\x09OnCanExecuteCommand \x09The delegate to be executed for checking if this command can be executed.\n\x09 * @param\x09""bOverrideExisting\x09\x09Whether existing command with matching context, set and name should be overriden\n\x09 * @return Whether the command was successfully registered\n\x09 */" },
		{ "CPP_Default_bOverrideExisting", "false" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Registers a command within the given context and set.\nThe set must be registered beforehand.\n@param       CommandInfo                             The command infos such as name, label, description and input chord.\n@param       OnExecuteCommand                The delegate to be executed for handling this command.\n@param       OnCanExecuteCommand     The delegate to be executed for checking if this command can be executed.\n@param       bOverrideExisting               Whether existing command with matching context, set and name should be overriden\n@return Whether the command was successfully registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "RegisterCommandChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::UICommandsScriptingSubsystem_eventRegisterCommandChecked_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics
	{
		struct UICommandsScriptingSubsystem_eventRegisterCommandSet_Parms
		{
			FName SetName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventRegisterCommandSet_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventRegisterCommandSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventRegisterCommandSet_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::NewProp_SetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Sets" },
		{ "Comment", "/**\n\x09 * Registers a new command set\n\x09 * @return Whether the set did not already exist and was successfully registered\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Registers a new command set\n@return Whether the set did not already exist and was successfully registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "RegisterCommandSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::UICommandsScriptingSubsystem_eventRegisterCommandSet_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics
	{
		struct UICommandsScriptingSubsystem_eventSetCanExecuteCommands_Parms
		{
			bool bShouldExecuteCommands;
		};
		static void NewProp_bShouldExecuteCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldExecuteCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::NewProp_bShouldExecuteCommands_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventSetCanExecuteCommands_Parms*)Obj)->bShouldExecuteCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::NewProp_bShouldExecuteCommands = { "bShouldExecuteCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventSetCanExecuteCommands_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::NewProp_bShouldExecuteCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::NewProp_bShouldExecuteCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Global" },
		{ "Comment", "/** Sets whether commands registered in the subsystem can be executed */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Sets whether commands registered in the subsystem can be executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "SetCanExecuteCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::UICommandsScriptingSubsystem_eventSetCanExecuteCommands_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics
	{
		struct UICommandsScriptingSubsystem_eventSetCanSetExecuteCommands_Parms
		{
			FName SetName;
			bool bShouldExecuteCommands;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
		static void NewProp_bShouldExecuteCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldExecuteCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventSetCanSetExecuteCommands_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::NewProp_bShouldExecuteCommands_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventSetCanSetExecuteCommands_Parms*)Obj)->bShouldExecuteCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::NewProp_bShouldExecuteCommands = { "bShouldExecuteCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventSetCanSetExecuteCommands_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::NewProp_bShouldExecuteCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::NewProp_SetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::NewProp_bShouldExecuteCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Sets" },
		{ "Comment", "/** Enables or disables execution of commands registered within the given set */" },
		{ "DisplayName", "Set Can Execute Commands" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Enables or disables execution of commands registered within the given set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "SetCanSetExecuteCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::UICommandsScriptingSubsystem_eventSetCanSetExecuteCommands_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Global" },
		{ "Comment", "/**\n\x09 * Unregisters all commands dynamically registered within all contexts and sets.\n\x09 * @warning this will unregister all commands currently registered by this subsystem\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Unregisters all commands dynamically registered within all contexts and sets.\n@warning this will unregister all commands currently registered by this subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "UnregisterAllSets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics
	{
		struct UICommandsScriptingSubsystem_eventUnregisterCommand_Parms
		{
			FScriptingCommandInfo CommandInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommandInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::NewProp_CommandInfo = { "CommandInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventUnregisterCommand_Parms, CommandInfo), Z_Construct_UScriptStruct_FScriptingCommandInfo, METADATA_PARAMS(nullptr, 0) }; // 183492535
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventUnregisterCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventUnregisterCommand_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::NewProp_CommandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands |" },
		{ "Comment", "/**\n\x09 * Unregisters a command previously registered. The command name, set and context will be used for comparison.\n\x09 * @return Whether the command was successfully unregistered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Unregisters a command previously registered. The command name, set and context will be used for comparison.\n@return Whether the command was successfully unregistered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "UnregisterCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::UICommandsScriptingSubsystem_eventUnregisterCommand_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics
	{
		struct UICommandsScriptingSubsystem_eventUnregisterCommandSet_Parms
		{
			FName SetName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UICommandsScriptingSubsystem_eventUnregisterCommandSet_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UICommandsScriptingSubsystem_eventUnregisterCommandSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UICommandsScriptingSubsystem_eventUnregisterCommandSet_Parms), &Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::NewProp_SetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Commands | Sets" },
		{ "Comment", "/**\n\x09 * Unregisters the corresponding command set with all commands registered within it\n\x09 * @return Whether the command set existed and was successfully unregistered\n\x09 */" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "Unregisters the corresponding command set with all commands registered within it\n@return Whether the command set existed and was successfully unregistered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUICommandsScriptingSubsystem, nullptr, "UnregisterCommandSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::UICommandsScriptingSubsystem_eventUnregisterCommandSet_Parms), Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUICommandsScriptingSubsystem);
	UClass* Z_Construct_UClass_UUICommandsScriptingSubsystem_NoRegister()
	{
		return UUICommandsScriptingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateScriptingCommands,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanExecuteCommands, "CanExecuteCommands" }, // 2649008805
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_CanSetExecuteCommands, "CanSetExecuteCommands" }, // 3885131753
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_DefaultCanExecuteAction, "DefaultCanExecuteAction" }, // 1943880065
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetAvailableContexts, "GetAvailableContexts" }, // 1241679469
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetBindingCountForContext, "GetBindingCountForContext" }, // 250955837
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_GetRegisteredCommands, "GetRegisteredCommands" }, // 1439193545
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleCanExecuteAction, "HandleCanExecuteAction" }, // 1566337176
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_HandleExecuteAction, "HandleExecuteAction" }, // 1749850958
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandRegistered, "IsCommandRegistered" }, // 3346209030
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsCommandSetRegistered, "IsCommandSetRegistered" }, // 3515309239
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsContextRegistered, "IsContextRegistered" }, // 45203097
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_IsInputChordMapped, "IsInputChordMapped" }, // 2307406752
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommand, "RegisterCommand" }, // 1384467807
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandChecked, "RegisterCommandChecked" }, // 3972658674
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_RegisterCommandSet, "RegisterCommandSet" }, // 4067222354
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanExecuteCommands, "SetCanExecuteCommands" }, // 415163809
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_SetCanSetExecuteCommands, "SetCanSetExecuteCommands" }, // 3799595790
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterAllSets, "UnregisterAllSets" }, // 3163182574
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommand, "UnregisterCommand" }, // 2511467789
		{ &Z_Construct_UFunction_UUICommandsScriptingSubsystem_UnregisterCommandSet, "UnregisterCommandSet" }, // 1357580483
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorInputSubsystem\n * Subsystem for dynamically registering editor commands through scripting\n */" },
		{ "IncludePath", "UICommandsScriptingSubsystem.h" },
		{ "ModuleRelativePath", "Public/UICommandsScriptingSubsystem.h" },
		{ "ToolTip", "UEditorInputSubsystem\nSubsystem for dynamically registering editor commands through scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUICommandsScriptingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::ClassParams = {
		&UUICommandsScriptingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUICommandsScriptingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUICommandsScriptingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUICommandsScriptingSubsystem.OuterSingleton, Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUICommandsScriptingSubsystem.OuterSingleton;
	}
	template<> SLATESCRIPTINGCOMMANDS_API UClass* StaticClass<UUICommandsScriptingSubsystem>()
	{
		return UUICommandsScriptingSubsystem::StaticClass();
	}
	UUICommandsScriptingSubsystem::UUICommandsScriptingSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUICommandsScriptingSubsystem);
	UUICommandsScriptingSubsystem::~UUICommandsScriptingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FScriptingCommandInfo::StaticStruct, Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics::NewStructOps, TEXT("ScriptingCommandInfo"), &Z_Registration_Info_UScriptStruct_ScriptingCommandInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptingCommandInfo), 183492535U) },
		{ FScriptingCommand::StaticStruct, Z_Construct_UScriptStruct_FScriptingCommand_Statics::NewStructOps, TEXT("ScriptingCommand"), &Z_Registration_Info_UScriptStruct_ScriptingCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptingCommand), 84279641U) },
		{ FScriptingCommandsContext::StaticStruct, Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics::NewStructOps, TEXT("ScriptingCommandsContext"), &Z_Registration_Info_UScriptStruct_ScriptingCommandsContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptingCommandsContext), 3686554627U) },
		{ FScriptingCommandSet::StaticStruct, Z_Construct_UScriptStruct_FScriptingCommandSet_Statics::NewStructOps, TEXT("ScriptingCommandSet"), &Z_Registration_Info_UScriptStruct_ScriptingCommandSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptingCommandSet), 2288842597U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUICommandsScriptingSubsystem, UUICommandsScriptingSubsystem::StaticClass, TEXT("UUICommandsScriptingSubsystem"), &Z_Registration_Info_UClass_UUICommandsScriptingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUICommandsScriptingSubsystem), 3812208781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_2752293471(TEXT("/Script/SlateScriptingCommands"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
