// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerTypes_generated_h
#error "GameplayDebuggerTypes.generated.h already included, missing '#pragma once' in GameplayDebuggerTypes.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerTypes_generated_h

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerShape_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerShape>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerDataPackHeader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerTypes_h


#define FOREACH_ENUM_EGAMEPLAYDEBUGGERSHAPE(op) \
	op(EGameplayDebuggerShape::Invalid) \
	op(EGameplayDebuggerShape::Point) \
	op(EGameplayDebuggerShape::Segment) \
	op(EGameplayDebuggerShape::Box) \
	op(EGameplayDebuggerShape::Cone) \
	op(EGameplayDebuggerShape::Cylinder) \
	op(EGameplayDebuggerShape::Circle) \
	op(EGameplayDebuggerShape::Capsule) \
	op(EGameplayDebuggerShape::Polygon) \
	op(EGameplayDebuggerShape::Arrow) 

enum class EGameplayDebuggerShape : uint8;
template<> struct TIsUEnumClass<EGameplayDebuggerShape> { enum { Value = true }; };
template<> GAMEPLAYDEBUGGER_API UEnum* StaticEnum<EGameplayDebuggerShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
