// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshEditorSubsystemHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATICMESHEDITOR_StaticMeshEditorSubsystemHelpers_generated_h
#error "StaticMeshEditorSubsystemHelpers.generated.h already included, missing '#pragma once' in StaticMeshEditorSubsystemHelpers.h"
#endif
#define STATICMESHEDITOR_StaticMeshEditorSubsystemHelpers_generated_h

#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<struct FStaticMeshReductionSettings>();

#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<struct FStaticMeshReductionOptions>();

#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct();


template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<struct FJoinStaticMeshActorsOptions>();

#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FJoinStaticMeshActorsOptions Super;


template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<struct FMergeStaticMeshActorsOptions>();

#define FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics; \
	STATICMESHEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FJoinStaticMeshActorsOptions Super;


template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<struct FCreateProxyMeshActorOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h


#define FOREACH_ENUM_ESCRIPTCOLLISIONSHAPETYPE(op) \
	op(EScriptCollisionShapeType::Box) \
	op(EScriptCollisionShapeType::Sphere) \
	op(EScriptCollisionShapeType::Capsule) \
	op(EScriptCollisionShapeType::NDOP10_X) \
	op(EScriptCollisionShapeType::NDOP10_Y) \
	op(EScriptCollisionShapeType::NDOP10_Z) \
	op(EScriptCollisionShapeType::NDOP18) \
	op(EScriptCollisionShapeType::NDOP26) 

enum class EScriptCollisionShapeType : uint8;
template<> struct TIsUEnumClass<EScriptCollisionShapeType> { enum { Value = true }; };
template<> STATICMESHEDITOR_API UEnum* StaticEnum<EScriptCollisionShapeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
