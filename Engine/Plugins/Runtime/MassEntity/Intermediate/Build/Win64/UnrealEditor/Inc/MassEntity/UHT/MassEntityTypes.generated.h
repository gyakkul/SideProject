// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassEntityTypes_generated_h
#error "MassEntityTypes.generated.h already included, missing '#pragma once' in MassEntityTypes.h"
#endif
#define MASSENTITY_MassEntityTypes_generated_h

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassFragment_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassFragment>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTag_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassTag>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassChunkFragment_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassChunkFragment>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSharedFragment_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassSharedFragment>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassEntityHandle_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassEntityHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h


#define FOREACH_ENUM_EMASSOBSERVEDOPERATION(op) \
	op(EMassObservedOperation::Add) \
	op(EMassObservedOperation::Remove) 

enum class EMassObservedOperation : uint8;
template<> struct TIsUEnumClass<EMassObservedOperation> { enum { Value = true }; };
template<> MASSENTITY_API UEnum* StaticEnum<EMassObservedOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
