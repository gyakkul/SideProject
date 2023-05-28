// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRepresentationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSREPRESENTATION_MassRepresentationTypes_generated_h
#error "MassRepresentationTypes.generated.h already included, missing '#pragma once' in MassRepresentationTypes.h"
#endif
#define MASSREPRESENTATION_MassRepresentationTypes_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationMeshDesc_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct();


template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<struct FStaticMeshInstanceVisualizationMeshDesc>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc_Statics; \
	MASSREPRESENTATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<struct FStaticMeshInstanceVisualizationDesc>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FISMCSharedData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<struct FISMCSharedData>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassLODSignificanceRange_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<struct FMassLODSignificanceRange>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h_211_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<struct FMassInstancedStaticMeshInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationTypes_h


#define FOREACH_ENUM_EMASSREPRESENTATIONTYPE(op) \
	op(EMassRepresentationType::HighResSpawnedActor) \
	op(EMassRepresentationType::LowResSpawnedActor) \
	op(EMassRepresentationType::StaticMeshInstance) \
	op(EMassRepresentationType::None) 

enum class EMassRepresentationType : uint8;
template<> struct TIsUEnumClass<EMassRepresentationType> { enum { Value = true }; };
template<> MASSREPRESENTATION_API UEnum* StaticEnum<EMassRepresentationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
