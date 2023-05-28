// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Constraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_Constraint_generated_h
#error "Constraint.generated.h already included, missing '#pragma once' in Constraint.h"
#endif
#define ANIMATIONCORE_Constraint_generated_h

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FFilterOptionPerAxis>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FTransformFilter>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintDescription>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintOffset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintOffset>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_281_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FTransformConstraint>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_341_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintDescriptionEx>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_416_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FTransformConstraintDescription>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_461_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FAimConstraintDescription>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_506_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintDescriptor>();

#define FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_683_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FConstraintData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h


#define FOREACH_ENUM_ECONSTRAINTTYPE(op) \
	op(EConstraintType::Transform) \
	op(EConstraintType::Aim) 

enum class EConstraintType : uint8;
template<> struct TIsUEnumClass<EConstraintType> { enum { Value = true }; };
template<> ANIMATIONCORE_API UEnum* StaticEnum<EConstraintType>();

#define FOREACH_ENUM_ETRANSFORMCONSTRAINTTYPE(op) \
	op(ETransformConstraintType::Translation) \
	op(ETransformConstraintType::Rotation) \
	op(ETransformConstraintType::Scale) \
	op(ETransformConstraintType::Parent) \
	op(ETransformConstraintType::LookAt) 

enum class ETransformConstraintType : uint8;
template<> struct TIsUEnumClass<ETransformConstraintType> { enum { Value = true }; };
template<> ANIMATIONCORE_API UEnum* StaticEnum<ETransformConstraintType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
