// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/RigUnit_HighlevelBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_HighlevelBase_generated_h
#error "RigUnit_HighlevelBase.generated.h already included, missing '#pragma once' in RigUnit_HighlevelBase.h"
#endif
#define CONTROLRIG_RigUnit_HighlevelBase_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HighlevelBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HighlevelBaseMutable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h


#define FOREACH_ENUM_ECONTROLRIGVECTORKIND(op) \
	op(EControlRigVectorKind::Direction) \
	op(EControlRigVectorKind::Location) 

enum class EControlRigVectorKind : uint8;
template<> struct TIsUEnumClass<EControlRigVectorKind> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigVectorKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
