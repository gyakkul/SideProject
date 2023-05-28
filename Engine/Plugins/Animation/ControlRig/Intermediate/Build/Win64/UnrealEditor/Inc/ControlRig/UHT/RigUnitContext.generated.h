// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/RigUnitContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnitContext_generated_h
#error "RigUnitContext.generated.h already included, missing '#pragma once' in RigUnitContext.h"
#endif
#define CONTROLRIG_RigUnitContext_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigHierarchySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigHierarchySettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMExecuteContext Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigExecuteContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h


#define FOREACH_ENUM_ECONTROLRIGINTERACTIONTYPE(op) \
	op(EControlRigInteractionType::None) \
	op(EControlRigInteractionType::Translate) \
	op(EControlRigInteractionType::Rotate) \
	op(EControlRigInteractionType::Scale) \
	op(EControlRigInteractionType::All) 

enum class EControlRigInteractionType : uint8;
template<> struct TIsUEnumClass<EControlRigInteractionType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
