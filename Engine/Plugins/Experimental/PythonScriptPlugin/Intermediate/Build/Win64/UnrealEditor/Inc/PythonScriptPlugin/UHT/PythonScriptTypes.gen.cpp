// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScriptTypes() {}
// Cross Module References
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType();
	PYTHONSCRIPTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPythonLogOutputEntry();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPythonLogOutputType;
	static UEnum* EPythonLogOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPythonLogOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPythonLogOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("EPythonLogOutputType"));
		}
		return Z_Registration_Info_UEnum_EPythonLogOutputType.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonLogOutputType>()
	{
		return EPythonLogOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::Enumerators[] = {
		{ "EPythonLogOutputType::Info", (int64)EPythonLogOutputType::Info },
		{ "EPythonLogOutputType::Warning", (int64)EPythonLogOutputType::Warning },
		{ "EPythonLogOutputType::Error", (int64)EPythonLogOutputType::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of log output that Python can give. */" },
		{ "Error.Comment", "/** This log was an error. */" },
		{ "Error.Name", "EPythonLogOutputType::Error" },
		{ "Error.ToolTip", "This log was an error." },
		{ "Info.Comment", "/** This log was informative. */" },
		{ "Info.Name", "EPythonLogOutputType::Info" },
		{ "Info.ToolTip", "This log was informative." },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "ToolTip", "Types of log output that Python can give." },
		{ "Warning.Comment", "/** This log was a warning. */" },
		{ "Warning.Name", "EPythonLogOutputType::Warning" },
		{ "Warning.ToolTip", "This log was a warning." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		"EPythonLogOutputType",
		"EPythonLogOutputType",
		Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType()
	{
		if (!Z_Registration_Info_UEnum_EPythonLogOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPythonLogOutputType.InnerSingleton, Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPythonLogOutputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPythonCommandFlags;
	static UEnum* EPythonCommandFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPythonCommandFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPythonCommandFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("EPythonCommandFlags"));
		}
		return Z_Registration_Info_UEnum_EPythonCommandFlags.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonCommandFlags>()
	{
		return EPythonCommandFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::Enumerators[] = {
		{ "EPythonCommandFlags::None", (int64)EPythonCommandFlags::None },
		{ "EPythonCommandFlags::Unattended", (int64)EPythonCommandFlags::Unattended },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Flags that can be specified when running Python commands. */" },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "None.Comment", "/** No special behavior. */" },
		{ "None.Name", "EPythonCommandFlags::None" },
		{ "None.ToolTip", "No special behavior." },
		{ "ToolTip", "Flags that can be specified when running Python commands." },
		{ "Unattended.Comment", "/** Run the Python command in \"unattended\" mode (GIsRunningUnattendedScript set to true), which will suppress certain pieces of UI. */" },
		{ "Unattended.Name", "EPythonCommandFlags::Unattended" },
		{ "Unattended.ToolTip", "Run the Python command in \"unattended\" mode (GIsRunningUnattendedScript set to true), which will suppress certain pieces of UI." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		"EPythonCommandFlags",
		"EPythonCommandFlags",
		Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags()
	{
		if (!Z_Registration_Info_UEnum_EPythonCommandFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPythonCommandFlags.InnerSingleton, Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPythonCommandFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPythonCommandExecutionMode;
	static UEnum* EPythonCommandExecutionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPythonCommandExecutionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPythonCommandExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("EPythonCommandExecutionMode"));
		}
		return Z_Registration_Info_UEnum_EPythonCommandExecutionMode.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonCommandExecutionMode>()
	{
		return EPythonCommandExecutionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::Enumerators[] = {
		{ "EPythonCommandExecutionMode::ExecuteFile", (int64)EPythonCommandExecutionMode::ExecuteFile },
		{ "EPythonCommandExecutionMode::ExecuteStatement", (int64)EPythonCommandExecutionMode::ExecuteStatement },
		{ "EPythonCommandExecutionMode::EvaluateStatement", (int64)EPythonCommandExecutionMode::EvaluateStatement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Controls the execution mode used for the Python command. */" },
		{ "EvaluateStatement.Comment", "/** Evaluate the Python command as a single statement. This will evaluate a single statement and return the result. This mode cannot run files. */" },
		{ "EvaluateStatement.Name", "EPythonCommandExecutionMode::EvaluateStatement" },
		{ "EvaluateStatement.ToolTip", "Evaluate the Python command as a single statement. This will evaluate a single statement and return the result. This mode cannot run files." },
		{ "ExecuteFile.Comment", "/** Execute the Python command as a file. This allows you to execute either a literal Python script containing multiple statements, or a file with optional arguments. */" },
		{ "ExecuteFile.Name", "EPythonCommandExecutionMode::ExecuteFile" },
		{ "ExecuteFile.ToolTip", "Execute the Python command as a file. This allows you to execute either a literal Python script containing multiple statements, or a file with optional arguments." },
		{ "ExecuteStatement.Comment", "/** Execute the Python command as a single statement. This will execute a single statement and print the result. This mode cannot run files. */" },
		{ "ExecuteStatement.Name", "EPythonCommandExecutionMode::ExecuteStatement" },
		{ "ExecuteStatement.ToolTip", "Execute the Python command as a single statement. This will execute a single statement and print the result. This mode cannot run files." },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "ToolTip", "Controls the execution mode used for the Python command." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		"EPythonCommandExecutionMode",
		"EPythonCommandExecutionMode",
		Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode()
	{
		if (!Z_Registration_Info_UEnum_EPythonCommandExecutionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPythonCommandExecutionMode.InnerSingleton, Z_Construct_UEnum_PythonScriptPlugin_EPythonCommandExecutionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPythonCommandExecutionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPythonFileExecutionScope;
	static UEnum* EPythonFileExecutionScope_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPythonFileExecutionScope.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPythonFileExecutionScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("EPythonFileExecutionScope"));
		}
		return Z_Registration_Info_UEnum_EPythonFileExecutionScope.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonFileExecutionScope>()
	{
		return EPythonFileExecutionScope_StaticEnum();
	}
	struct Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::Enumerators[] = {
		{ "EPythonFileExecutionScope::Private", (int64)EPythonFileExecutionScope::Private },
		{ "EPythonFileExecutionScope::Public", (int64)EPythonFileExecutionScope::Public },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Controls the scope used when executing Python files. */" },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "Private.Comment", "/** Execute the Python file with its own unique locals and globals dict to isolate any changes it makes to the environment (like imports). */" },
		{ "Private.Name", "EPythonFileExecutionScope::Private" },
		{ "Private.ToolTip", "Execute the Python file with its own unique locals and globals dict to isolate any changes it makes to the environment (like imports)." },
		{ "Public.Comment", "/** Execute the Python file with the shared locals and globals dict as used by the console, so that executing it behaves as if you'd ran the file contents directly in the console. */" },
		{ "Public.Name", "EPythonFileExecutionScope::Public" },
		{ "Public.ToolTip", "Execute the Python file with the shared locals and globals dict as used by the console, so that executing it behaves as if you'd ran the file contents directly in the console." },
		{ "ToolTip", "Controls the scope used when executing Python files." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		"EPythonFileExecutionScope",
		"EPythonFileExecutionScope",
		Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope()
	{
		if (!Z_Registration_Info_UEnum_EPythonFileExecutionScope.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPythonFileExecutionScope.InnerSingleton, Z_Construct_UEnum_PythonScriptPlugin_EPythonFileExecutionScope_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPythonFileExecutionScope.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PythonLogOutputEntry;
class UScriptStruct* FPythonLogOutputEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PythonLogOutputEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PythonLogOutputEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPythonLogOutputEntry, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("PythonLogOutputEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PythonLogOutputEntry.OuterSingleton;
}
template<> PYTHONSCRIPTPLUGIN_API UScriptStruct* StaticStruct<FPythonLogOutputEntry>()
{
	return FPythonLogOutputEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Log output entry captured from Python. */" },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "ToolTip", "Log output entry captured from Python." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPythonLogOutputEntry>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Python|Output" },
		{ "Comment", "/** The type of the log output. */" },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "ToolTip", "The type of the log output." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPythonLogOutputEntry, Type), Z_Construct_UEnum_PythonScriptPlugin_EPythonLogOutputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type_MetaData)) }; // 598745291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Python|Output" },
		{ "Comment", "/** The log output string. */" },
		{ "ModuleRelativePath", "Public/PythonScriptTypes.h" },
		{ "ToolTip", "The log output string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPythonLogOutputEntry, Output), METADATA_PARAMS(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		&NewStructOps,
		"PythonLogOutputEntry",
		sizeof(FPythonLogOutputEntry),
		alignof(FPythonLogOutputEntry),
		Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPythonLogOutputEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PythonLogOutputEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PythonLogOutputEntry.InnerSingleton, Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PythonLogOutputEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics::EnumInfo[] = {
		{ EPythonLogOutputType_StaticEnum, TEXT("EPythonLogOutputType"), &Z_Registration_Info_UEnum_EPythonLogOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 598745291U) },
		{ EPythonCommandFlags_StaticEnum, TEXT("EPythonCommandFlags"), &Z_Registration_Info_UEnum_EPythonCommandFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 68981662U) },
		{ EPythonCommandExecutionMode_StaticEnum, TEXT("EPythonCommandExecutionMode"), &Z_Registration_Info_UEnum_EPythonCommandExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3143478472U) },
		{ EPythonFileExecutionScope_StaticEnum, TEXT("EPythonFileExecutionScope"), &Z_Registration_Info_UEnum_EPythonFileExecutionScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1966743409U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics::ScriptStructInfo[] = {
		{ FPythonLogOutputEntry::StaticStruct, Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics::NewStructOps, TEXT("PythonLogOutputEntry"), &Z_Registration_Info_UScriptStruct_PythonLogOutputEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPythonLogOutputEntry), 2150432524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_4112843561(TEXT("/Script/PythonScriptPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
