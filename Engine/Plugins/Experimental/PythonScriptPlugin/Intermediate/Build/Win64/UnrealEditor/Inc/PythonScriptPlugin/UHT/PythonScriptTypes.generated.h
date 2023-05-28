// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PythonScriptTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PYTHONSCRIPTPLUGIN_PythonScriptTypes_generated_h
#error "PythonScriptTypes.generated.h already included, missing '#pragma once' in PythonScriptTypes.h"
#endif
#define PYTHONSCRIPTPLUGIN_PythonScriptTypes_generated_h

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPythonLogOutputEntry_Statics; \
	PYTHONSCRIPTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PYTHONSCRIPTPLUGIN_API UScriptStruct* StaticStruct<struct FPythonLogOutputEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Public_PythonScriptTypes_h


#define FOREACH_ENUM_EPYTHONLOGOUTPUTTYPE(op) \
	op(EPythonLogOutputType::Info) \
	op(EPythonLogOutputType::Warning) \
	op(EPythonLogOutputType::Error) 

enum class EPythonLogOutputType : uint8;
template<> struct TIsUEnumClass<EPythonLogOutputType> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonLogOutputType>();

#define FOREACH_ENUM_EPYTHONCOMMANDFLAGS(op) \
	op(EPythonCommandFlags::None) \
	op(EPythonCommandFlags::Unattended) 

enum class EPythonCommandFlags : uint8;
template<> struct TIsUEnumClass<EPythonCommandFlags> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonCommandFlags>();

#define FOREACH_ENUM_EPYTHONCOMMANDEXECUTIONMODE(op) \
	op(EPythonCommandExecutionMode::ExecuteFile) \
	op(EPythonCommandExecutionMode::ExecuteStatement) \
	op(EPythonCommandExecutionMode::EvaluateStatement) 

enum class EPythonCommandExecutionMode : uint8;
template<> struct TIsUEnumClass<EPythonCommandExecutionMode> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonCommandExecutionMode>();

#define FOREACH_ENUM_EPYTHONFILEEXECUTIONSCOPE(op) \
	op(EPythonFileExecutionScope::Private) \
	op(EPythonFileExecutionScope::Public) 

enum class EPythonFileExecutionScope : uint8;
template<> struct TIsUEnumClass<EPythonFileExecutionScope> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPythonFileExecutionScope>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
