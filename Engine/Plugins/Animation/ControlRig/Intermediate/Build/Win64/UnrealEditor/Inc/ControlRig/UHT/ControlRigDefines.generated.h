// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigDefines.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigDefines_generated_h
#error "ControlRigDefines.generated.h already included, missing '#pragma once' in ControlRigDefines.h"
#endif
#define CONTROLRIG_ControlRigDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h


#define FOREACH_ENUM_ETRANSFORMSPACEMODE(op) \
	op(ETransformSpaceMode::LocalSpace) \
	op(ETransformSpaceMode::GlobalSpace) \
	op(ETransformSpaceMode::BaseSpace) \
	op(ETransformSpaceMode::BaseJoint) \
	op(ETransformSpaceMode::Max) 

enum class ETransformSpaceMode : uint8;
template<> struct TIsUEnumClass<ETransformSpaceMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ETransformSpaceMode>();

#define FOREACH_ENUM_ETRANSFORMGETTERTYPE(op) \
	op(ETransformGetterType::Initial) \
	op(ETransformGetterType::Current) \
	op(ETransformGetterType::Max) 

enum class ETransformGetterType : uint8;
template<> struct TIsUEnumClass<ETransformGetterType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ETransformGetterType>();

#define FOREACH_ENUM_ERIGEXECUTIONTYPE(op) \
	op(ERigExecutionType::Runtime) \
	op(ERigExecutionType::Editing) \
	op(ERigExecutionType::Max) 

enum class ERigExecutionType : uint8;
template<> struct TIsUEnumClass<ERigExecutionType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigExecutionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
