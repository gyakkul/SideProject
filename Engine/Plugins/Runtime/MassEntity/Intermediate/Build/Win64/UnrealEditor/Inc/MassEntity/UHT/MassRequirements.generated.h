// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRequirements.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassRequirements_generated_h
#error "MassRequirements.generated.h already included, missing '#pragma once' in MassRequirements.h"
#endif
#define MASSENTITY_MassRequirements_generated_h

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassRequirements_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSubsystemRequirements_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassSubsystemRequirements>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassRequirements_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassFragmentRequirements_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassFragmentRequirements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassRequirements_h


#define FOREACH_ENUM_EMASSFRAGMENTACCESS(op) \
	op(EMassFragmentAccess::None) \
	op(EMassFragmentAccess::ReadOnly) \
	op(EMassFragmentAccess::ReadWrite) 

enum class EMassFragmentAccess : uint8;
template<> struct TIsUEnumClass<EMassFragmentAccess> { enum { Value = true }; };
template<> MASSENTITY_API UEnum* StaticEnum<EMassFragmentAccess>();

#define FOREACH_ENUM_EMASSFRAGMENTPRESENCE(op) \
	op(EMassFragmentPresence::All) \
	op(EMassFragmentPresence::Any) \
	op(EMassFragmentPresence::None) \
	op(EMassFragmentPresence::Optional) 

enum class EMassFragmentPresence : uint8;
template<> struct TIsUEnumClass<EMassFragmentPresence> { enum { Value = true }; };
template<> MASSENTITY_API UEnum* StaticEnum<EMassFragmentPresence>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
