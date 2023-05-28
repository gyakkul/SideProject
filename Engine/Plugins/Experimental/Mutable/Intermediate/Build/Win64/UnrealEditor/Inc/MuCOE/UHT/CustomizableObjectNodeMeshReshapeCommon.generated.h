// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshapeCommon_generated_h
#error "CustomizableObjectNodeMeshReshapeCommon.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMeshReshapeCommon.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshapeCommon_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<struct FMeshReshapeBoneReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h


#define FOREACH_ENUM_EBONEDEFORMSELECTIONMETHOD(op) \
	op(EBoneDeformSelectionMethod::ONLY_SELECTED) \
	op(EBoneDeformSelectionMethod::ALL_BUT_SELECTED) \
	op(EBoneDeformSelectionMethod::DEFORM_REF_SKELETON) \
	op(EBoneDeformSelectionMethod::DEFORM_NONE_REF_SKELETON) 

enum class EBoneDeformSelectionMethod : uint8;
template<> struct TIsUEnumClass<EBoneDeformSelectionMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EBoneDeformSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
