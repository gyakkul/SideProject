// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PythonScriptLibrary.h"
#include "PythonScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScriptLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptLibrary();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptLibrary_NoRegister();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope();
	PYTHONSCRIPTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPythonLogOutputEntry();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UPythonScriptLibrary::execExecutePythonCommandEx)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PythonCommand);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandResult);
		P_GET_TARRAY_REF(FPythonLogOutputEntry,Z_Param_Out_LogOutput);
		P_GET_ENUM(EPythonCommandExecutionMode,Z_Param_ExecutionMode);
		P_GET_ENUM(EPythonFileExecutionScope,Z_Param_FileExecutionScope);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPythonScriptLibrary::ExecutePythonCommandEx(Z_Param_PythonCommand,Z_Param_Out_CommandResult,Z_Param_Out_LogOutput,EPythonCommandExecutionMode(Z_Param_ExecutionMode),EPythonFileExecutionScope(Z_Param_FileExecutionScope));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPythonScriptLibrary::execExecutePythonCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPythonScriptLibrary::ExecutePythonCommand(Z_Param_PythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPythonScriptLibrary::execIsPythonAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPythonScriptLibrary::IsPythonAvailable();
		P_NATIVE_END;
	}
	void UPythonScriptLibrary::StaticRegisterNativesUPythonScriptLibrary()
	{
		UClass* Class = UPythonScriptLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePythonCommand", &UPythonScriptLibrary::execExecutePythonCommand },
			{ "ExecutePythonCommandEx", &UPythonScriptLibrary::execExecutePythonCommandEx },
			{ "ExecutePythonScript", &UPythonScriptLibrary::execExecutePythonScript },
			{ "IsPythonAvailable", &UPythonScriptLibrary::execIsPythonAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics
	{
		struct PythonScriptLibrary_eventExecutePythonCommand_Parms
		{
			FString PythonCommand;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonCommand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_PythonCommand_MetaData[] = {
		{ "MultiLine", "TRUE" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_PythonCommand = { "PythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonCommand_Parms, PythonCommand), METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_PythonCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_PythonCommand_MetaData)) };
	void Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PythonScriptLibrary_eventExecutePythonCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PythonScriptLibrary_eventExecutePythonCommand_Parms), &Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_PythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Execution" },
		{ "Comment", "/**\n\x09 * Execute the given Python command.\n\x09 * @param PythonCommand The command to run. This may be literal Python code, or a file (with optional arguments) that you want to run.\n\x09 * @return true if the command ran successfully, false if there were errors (the output log will show the errors).\n\x09 */" },
		{ "ModuleRelativePath", "Private/PythonScriptLibrary.h" },
		{ "ToolTip", "Execute the given Python command.\n@param PythonCommand The command to run. This may be literal Python code, or a file (with optional arguments) that you want to run.\n@return true if the command ran successfully, false if there were errors (the output log will show the errors)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonScriptLibrary, nullptr, "ExecutePythonCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::PythonScriptLibrary_eventExecutePythonCommand_Parms), Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics
	{
		struct PythonScriptLibrary_eventExecutePythonCommandEx_Parms
		{
			FString PythonCommand;
			FString CommandResult;
			TArray<FPythonLogOutputEntry> LogOutput;
			EPythonCommandExecutionMode ExecutionMode;
			EPythonFileExecutionScope FileExecutionScope;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonCommand;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LogOutput_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LogOutput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileExecutionScope_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileExecutionScope_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileExecutionScope;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_PythonCommand_MetaData[] = {
		{ "MultiLine", "TRUE" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_PythonCommand = { "PythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonCommandEx_Parms, PythonCommand), METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_PythonCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_PythonCommand_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_CommandResult = { "CommandResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonCommandEx_Parms, CommandResult), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_LogOutput_Inner = { "LogOutput", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPythonLogOutputEntry, METADATA_PARAMS(nullptr, 0) }; // 2150432524
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_LogOutput = { "LogOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonCommandEx_Parms, LogOutput), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2150432524
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonCommandEx_Parms, ExecutionMode), Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode_MetaData)) }; // 3143478472
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope = { "FileExecutionScope", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonCommandEx_Parms, FileExecutionScope), Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope_MetaData)) }; // 1966743409
	void Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PythonScriptLibrary_eventExecutePythonCommandEx_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PythonScriptLibrary_eventExecutePythonCommandEx_Parms), &Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_PythonCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_CommandResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_LogOutput_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_LogOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_FileExecutionScope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ExecutionMode,FileExecutionScope" },
		{ "Category", "Python|Execution" },
		{ "Comment", "/**\n\x09 * Execute the given Python command.\n\x09 * @param PythonCommand The command to run. This may be literal Python code, or a file (with optional arguments) that you want to run.\n\x09 * @param ExecutionMode Controls the mode used to execute the command.\n\x09 * @param FileExecutionScope Controls the scope used when executing Python files.\n\x09 * @param CommandResult The result of running the command. On success, for EvaluateStatement mode this will be the actual result of running the command, and will be None in all other cases. On failure, this will be the error information (typically a Python exception trace).\n\x09 * @param LogOutput The log output captured while running the command.\n\x09 * @return true if the command ran successfully, false if there were errors.\n\x09 */" },
		{ "CPP_Default_ExecutionMode", "ExecuteFile" },
		{ "CPP_Default_FileExecutionScope", "Private" },
		{ "DisplayName", "Execute Python Command (Advanced)" },
		{ "ModuleRelativePath", "Private/PythonScriptLibrary.h" },
		{ "ToolTip", "Execute the given Python command.\n@param PythonCommand The command to run. This may be literal Python code, or a file (with optional arguments) that you want to run.\n@param ExecutionMode Controls the mode used to execute the command.\n@param FileExecutionScope Controls the scope used when executing Python files.\n@param CommandResult The result of running the command. On success, for EvaluateStatement mode this will be the actual result of running the command, and will be None in all other cases. On failure, this will be the error information (typically a Python exception trace).\n@param LogOutput The log output captured while running the command.\n@return true if the command ran successfully, false if there were errors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonScriptLibrary, nullptr, "ExecutePythonCommandEx", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::PythonScriptLibrary_eventExecutePythonCommandEx_Parms), Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics
	{
		struct PythonScriptLibrary_eventExecutePythonScript_Parms
		{
			FString PythonScript;
			TArray<FString> PythonInputs;
			TArray<FString> PythonOutputs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonScript_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonScript;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PythonInputs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PythonOutputs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonScript_MetaData[] = {
		{ "MultiLine", "TRUE" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonScript = { "PythonScript", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonScript_Parms, PythonScript), METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonScript_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs_Inner = { "PythonInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs = { "PythonInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonScript_Parms, PythonInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs_Inner = { "PythonOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs = { "PythonOutputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PythonScriptLibrary_eventExecutePythonScript_Parms, PythonOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs_MetaData)) };
	void Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PythonScriptLibrary_eventExecutePythonScript_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PythonScriptLibrary_eventExecutePythonScript_Parms), &Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_PythonOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Python|Execution" },
		{ "Comment", "/**\n\x09 * Execute a Python script with argument marshaling.\n\x09 * @param PythonScript This literal Python code to run.\n\x09 * @param PythonInputs The variadic input argument names (internal; set by UK2Node_ExecutePythonScript).\n\x09 * @param PythonInputs The variadic output argument names (internal; set by UK2Node_ExecutePythonScript).\n\x09 * @return true if the script ran successfully, false if there were errors.\n\x09 */" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Private/PythonScriptLibrary.h" },
		{ "ToolTip", "Execute a Python script with argument marshaling.\n@param PythonScript This literal Python code to run.\n@param PythonInputs The variadic input argument names (internal; set by UK2Node_ExecutePythonScript).\n@param PythonInputs The variadic output argument names (internal; set by UK2Node_ExecutePythonScript).\n@return true if the script ran successfully, false if there were errors." },
		{ "Variadic", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonScriptLibrary, nullptr, "ExecutePythonScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::PythonScriptLibrary_eventExecutePythonScript_Parms), Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics
	{
		struct PythonScriptLibrary_eventIsPythonAvailable_Parms
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
	void Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PythonScriptLibrary_eventIsPythonAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PythonScriptLibrary_eventIsPythonAvailable_Parms), &Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Execution" },
		{ "Comment", "/**\n\x09 * Check to see whether Python support is available in the current build.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PythonScriptLibrary.h" },
		{ "ToolTip", "Check to see whether Python support is available in the current build." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPythonScriptLibrary, nullptr, "IsPythonAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::PythonScriptLibrary_eventIsPythonAvailable_Parms), Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonScriptLibrary);
	UClass* Z_Construct_UClass_UPythonScriptLibrary_NoRegister()
	{
		return UPythonScriptLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPythonScriptLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonScriptLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPythonScriptLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommand, "ExecutePythonCommand" }, // 3339180840
		{ &Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonCommandEx, "ExecutePythonCommandEx" }, // 2652034538
		{ &Z_Construct_UFunction_UPythonScriptLibrary_ExecutePythonScript, "ExecutePythonScript" }, // 1429546415
		{ &Z_Construct_UFunction_UPythonScriptLibrary_IsPythonAvailable, "IsPythonAvailable" }, // 1530574927
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonScriptLibrary.h" },
		{ "ModuleRelativePath", "Private/PythonScriptLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonScriptLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonScriptLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonScriptLibrary_Statics::ClassParams = {
		&UPythonScriptLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonScriptLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonScriptLibrary()
	{
		if (!Z_Registration_Info_UClass_UPythonScriptLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonScriptLibrary.OuterSingleton, Z_Construct_UClass_UPythonScriptLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonScriptLibrary.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonScriptLibrary>()
	{
		return UPythonScriptLibrary::StaticClass();
	}
	UPythonScriptLibrary::UPythonScriptLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonScriptLibrary);
	UPythonScriptLibrary::~UPythonScriptLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonScriptLibrary, UPythonScriptLibrary::StaticClass, TEXT("UPythonScriptLibrary"), &Z_Registration_Info_UClass_UPythonScriptLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonScriptLibrary), 1252347264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_1918096408(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
