// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassGameplayDebugTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSGAMEPLAYDEBUG_MassGameplayDebugTypes_generated_h
#error "MassGameplayDebugTypes.generated.h already included, missing '#pragma once' in MassGameplayDebugTypes.h"
#endif
#define MASSGAMEPLAYDEBUG_MassGameplayDebugTypes_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimDebugDataRow_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<struct FSimDebugDataRow>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimDebugVisFragment_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<struct FSimDebugVisFragment>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataFragment_DebugVis_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<struct FDataFragment_DebugVis>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassDebuggableTag_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<struct FMassDebuggableTag>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgentDebugVisualization_Statics; \
	MASSGAMEPLAYDEBUG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MASSGAMEPLAYDEBUG_API UScriptStruct* StaticStruct<struct FAgentDebugVisualization>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassGameplayDebugTypes_h


#define FOREACH_ENUM_EMASSENTITYDEBUGSHAPE(op) \
	op(EMassEntityDebugShape::Box) \
	op(EMassEntityDebugShape::Cone) \
	op(EMassEntityDebugShape::Cylinder) \
	op(EMassEntityDebugShape::Capsule) 

enum class EMassEntityDebugShape : uint8;
template<> struct TIsUEnumClass<EMassEntityDebugShape> { enum { Value = true }; };
template<> MASSGAMEPLAYDEBUG_API UEnum* StaticEnum<EMassEntityDebugShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
