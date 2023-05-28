// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigHierarchyDefines.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigHierarchyDefines_generated_h
#error "RigHierarchyDefines.generated.h already included, missing '#pragma once' in RigHierarchyDefines.h"
#endif
#define CONTROLRIG_RigHierarchyDefines_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigControlLimitEnabled>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigControlValueStorage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigControlValueStorage>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_389_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigControlValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigControlValue>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_1368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigControlModifiedContext>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_1429_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigElementKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigElementKey>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_1563_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigElementKeyCollection>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_1712_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigElement>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_1740_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigEventContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigEventContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h


#define FOREACH_ENUM_ERIGELEMENTTYPE(op) \
	op(ERigElementType::None) \
	op(ERigElementType::Bone) \
	op(ERigElementType::Null) \
	op(ERigElementType::Space) \
	op(ERigElementType::Control) \
	op(ERigElementType::Curve) \
	op(ERigElementType::RigidBody) \
	op(ERigElementType::Reference) \
	op(ERigElementType::Last) \
	op(ERigElementType::All) \
	op(ERigElementType::ToResetAfterConstructionEvent) 

enum class ERigElementType : uint8;
template<> struct TIsUEnumClass<ERigElementType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigElementType>();

#define FOREACH_ENUM_ERIGBONETYPE(op) \
	op(ERigBoneType::Imported) \
	op(ERigBoneType::User) 

enum class ERigBoneType : uint8;
template<> struct TIsUEnumClass<ERigBoneType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigBoneType>();

#define FOREACH_ENUM_ERIGMETADATATYPE(op) \
	op(ERigMetadataType::Bool) \
	op(ERigMetadataType::BoolArray) \
	op(ERigMetadataType::Float) \
	op(ERigMetadataType::FloatArray) \
	op(ERigMetadataType::Int32) \
	op(ERigMetadataType::Int32Array) \
	op(ERigMetadataType::Name) \
	op(ERigMetadataType::NameArray) \
	op(ERigMetadataType::Vector) \
	op(ERigMetadataType::VectorArray) \
	op(ERigMetadataType::Rotator) \
	op(ERigMetadataType::RotatorArray) \
	op(ERigMetadataType::Quat) \
	op(ERigMetadataType::QuatArray) \
	op(ERigMetadataType::Transform) \
	op(ERigMetadataType::TransformArray) \
	op(ERigMetadataType::LinearColor) \
	op(ERigMetadataType::LinearColorArray) \
	op(ERigMetadataType::RigElementKey) \
	op(ERigMetadataType::RigElementKeyArray) \
	op(ERigMetadataType::Invalid) 

enum class ERigMetadataType : uint8;
template<> struct TIsUEnumClass<ERigMetadataType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigMetadataType>();

#define FOREACH_ENUM_ERIGHIERARCHYNOTIFICATION(op) \
	op(ERigHierarchyNotification::ElementAdded) \
	op(ERigHierarchyNotification::ElementRemoved) \
	op(ERigHierarchyNotification::ElementRenamed) \
	op(ERigHierarchyNotification::ElementSelected) \
	op(ERigHierarchyNotification::ElementDeselected) \
	op(ERigHierarchyNotification::ParentChanged) \
	op(ERigHierarchyNotification::HierarchyReset) \
	op(ERigHierarchyNotification::ControlSettingChanged) \
	op(ERigHierarchyNotification::ControlVisibilityChanged) \
	op(ERigHierarchyNotification::ControlDrivenListChanged) \
	op(ERigHierarchyNotification::ControlShapeTransformChanged) \
	op(ERigHierarchyNotification::ParentWeightsChanged) \
	op(ERigHierarchyNotification::InteractionBracketOpened) \
	op(ERigHierarchyNotification::InteractionBracketClosed) \
	op(ERigHierarchyNotification::ElementReordered) \
	op(ERigHierarchyNotification::Max) 

enum class ERigHierarchyNotification : uint8;
template<> struct TIsUEnumClass<ERigHierarchyNotification> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigHierarchyNotification>();

#define FOREACH_ENUM_ERIGEVENT(op) \
	op(ERigEvent::None) \
	op(ERigEvent::RequestAutoKey) \
	op(ERigEvent::OpenUndoBracket) \
	op(ERigEvent::CloseUndoBracket) \
	op(ERigEvent::Max) 

enum class ERigEvent : uint8;
template<> struct TIsUEnumClass<ERigEvent> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigEvent>();

#define FOREACH_ENUM_ECONTROLRIGSETKEY(op) \
	op(EControlRigSetKey::DoNotCare) \
	op(EControlRigSetKey::Always) \
	op(EControlRigSetKey::Never) 

enum class EControlRigSetKey : uint8;
template<> struct TIsUEnumClass<EControlRigSetKey> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigSetKey>();

#define FOREACH_ENUM_ERIGCONTROLTYPE(op) \
	op(ERigControlType::Bool) \
	op(ERigControlType::Float) \
	op(ERigControlType::Integer) \
	op(ERigControlType::Vector2D) \
	op(ERigControlType::Position) \
	op(ERigControlType::Scale) \
	op(ERigControlType::Rotator) \
	op(ERigControlType::Transform) \
	op(ERigControlType::TransformNoScale) \
	op(ERigControlType::EulerTransform) 

enum class ERigControlType : uint8;
template<> struct TIsUEnumClass<ERigControlType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlType>();

#define FOREACH_ENUM_ERIGCONTROLANIMATIONTYPE(op) \
	op(ERigControlAnimationType::AnimationControl) \
	op(ERigControlAnimationType::AnimationChannel) \
	op(ERigControlAnimationType::ProxyControl) \
	op(ERigControlAnimationType::VisualCue) 

enum class ERigControlAnimationType : uint8;
template<> struct TIsUEnumClass<ERigControlAnimationType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlAnimationType>();

#define FOREACH_ENUM_ERIGCONTROLVALUETYPE(op) \
	op(ERigControlValueType::Initial) \
	op(ERigControlValueType::Current) \
	op(ERigControlValueType::Minimum) \
	op(ERigControlValueType::Maximum) 

enum class ERigControlValueType : uint8;
template<> struct TIsUEnumClass<ERigControlValueType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlValueType>();

#define FOREACH_ENUM_ERIGCONTROLVISIBILITY(op) \
	op(ERigControlVisibility::UserDefined) \
	op(ERigControlVisibility::BasedOnSelection) 

enum class ERigControlVisibility : uint8;
template<> struct TIsUEnumClass<ERigControlVisibility> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlVisibility>();

#define FOREACH_ENUM_ERIGCONTROLAXIS(op) \
	op(ERigControlAxis::X) \
	op(ERigControlAxis::Y) \
	op(ERigControlAxis::Z) 

enum class ERigControlAxis : uint8;
template<> struct TIsUEnumClass<ERigControlAxis> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
