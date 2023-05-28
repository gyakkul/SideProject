// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigSpaceHierarchy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigSpaceHierarchy_generated_h
#error "RigSpaceHierarchy.generated.h already included, missing '#pragma once' in RigSpaceHierarchy.h"
#endif
#define CONTROLRIG_RigSpaceHierarchy_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigSpace>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigSpaceHierarchy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h


#define FOREACH_ENUM_ERIGSPACETYPE(op) \
	op(ERigSpaceType::Global) \
	op(ERigSpaceType::Bone) \
	op(ERigSpaceType::Control) \
	op(ERigSpaceType::Space) 

enum class ERigSpaceType : uint8;
template<> struct TIsUEnumClass<ERigSpaceType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigSpaceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
