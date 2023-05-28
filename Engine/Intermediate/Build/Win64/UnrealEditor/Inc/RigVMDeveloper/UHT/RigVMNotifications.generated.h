// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMNotifications.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMGraph;
enum class ERigVMGraphNotifType : uint8;
#ifdef RIGVMDEVELOPER_RigVMNotifications_generated_h
#error "RigVMNotifications.generated.h already included, missing '#pragma once' in RigVMNotifications.h"
#endif
#define RIGVMDEVELOPER_RigVMNotifications_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_63_DELEGATE \
RIGVMDEVELOPER_API void FRigVMGraphModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& RigVMGraphModifiedDynamicEvent, ERigVMGraphNotifType NotifType, URigVMGraph* Graph, UObject* Subject);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h


#define FOREACH_ENUM_ERIGVMGRAPHNOTIFTYPE(op) \
	op(ERigVMGraphNotifType::GraphChanged) \
	op(ERigVMGraphNotifType::NodeAdded) \
	op(ERigVMGraphNotifType::NodeRemoved) \
	op(ERigVMGraphNotifType::NodeSelected) \
	op(ERigVMGraphNotifType::NodeDeselected) \
	op(ERigVMGraphNotifType::NodeSelectionChanged) \
	op(ERigVMGraphNotifType::NodePositionChanged) \
	op(ERigVMGraphNotifType::NodeSizeChanged) \
	op(ERigVMGraphNotifType::NodeColorChanged) \
	op(ERigVMGraphNotifType::PinAdded) \
	op(ERigVMGraphNotifType::PinRemoved) \
	op(ERigVMGraphNotifType::PinRenamed) \
	op(ERigVMGraphNotifType::PinExpansionChanged) \
	op(ERigVMGraphNotifType::PinWatchedChanged) \
	op(ERigVMGraphNotifType::PinArraySizeChanged) \
	op(ERigVMGraphNotifType::PinDefaultValueChanged) \
	op(ERigVMGraphNotifType::PinDirectionChanged) \
	op(ERigVMGraphNotifType::PinTypeChanged) \
	op(ERigVMGraphNotifType::PinIndexChanged) \
	op(ERigVMGraphNotifType::LinkAdded) \
	op(ERigVMGraphNotifType::LinkRemoved) \
	op(ERigVMGraphNotifType::CommentTextChanged) \
	op(ERigVMGraphNotifType::RerouteCompactnessChanged) \
	op(ERigVMGraphNotifType::VariableAdded) \
	op(ERigVMGraphNotifType::VariableRemoved) \
	op(ERigVMGraphNotifType::VariableRenamed) \
	op(ERigVMGraphNotifType::InteractionBracketOpened) \
	op(ERigVMGraphNotifType::InteractionBracketClosed) \
	op(ERigVMGraphNotifType::InteractionBracketCanceled) \
	op(ERigVMGraphNotifType::PinBoundVariableChanged) \
	op(ERigVMGraphNotifType::NodeRenamed) \
	op(ERigVMGraphNotifType::NodeReferenceChanged) \
	op(ERigVMGraphNotifType::NodeCategoryChanged) \
	op(ERigVMGraphNotifType::NodeKeywordsChanged) \
	op(ERigVMGraphNotifType::NodeDescriptionChanged) \
	op(ERigVMGraphNotifType::VariableRemappingChanged) \
	op(ERigVMGraphNotifType::LibraryTemplateChanged) \
	op(ERigVMGraphNotifType::FunctionAccessChanged) \
	op(ERigVMGraphNotifType::Invalid) 

enum class ERigVMGraphNotifType : uint8;
template<> struct TIsUEnumClass<ERigVMGraphNotifType> { enum { Value = true }; };
template<> RIGVMDEVELOPER_API UEnum* StaticEnum<ERigVMGraphNotifType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
