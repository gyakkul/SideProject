// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCommands.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassCommands_generated_h
#error "MassCommands.generated.h already included, missing '#pragma once' in MassCommands.h"
#endif
#define MASSENTITY_MassCommands_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassCommands_h


#define FOREACH_ENUM_EMASSCOMMANDOPERATIONTYPE(op) \
	op(EMassCommandOperationType::None) \
	op(EMassCommandOperationType::Create) \
	op(EMassCommandOperationType::Add) \
	op(EMassCommandOperationType::Remove) \
	op(EMassCommandOperationType::ChangeComposition) \
	op(EMassCommandOperationType::Set) \
	op(EMassCommandOperationType::Destroy) 

enum class EMassCommandOperationType : uint8;
template<> struct TIsUEnumClass<EMassCommandOperationType> { enum { Value = true }; };
template<> MASSENTITY_API UEnum* StaticEnum<EMassCommandOperationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
