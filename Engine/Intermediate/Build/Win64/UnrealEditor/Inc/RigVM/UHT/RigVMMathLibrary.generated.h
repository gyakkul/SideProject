// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMMathLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMMathLibrary_generated_h
#error "RigVMMathLibrary.generated.h already included, missing '#pragma once' in RigVMMathLibrary.h"
#endif
#define RIGVM_RigVMMathLibrary_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFourPointBezier>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMMirrorSettings>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSimPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMSimPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h


#define FOREACH_ENUM_ERIGVMANIMEASINGTYPE(op) \
	op(ERigVMAnimEasingType::Linear) \
	op(ERigVMAnimEasingType::QuadraticEaseIn) \
	op(ERigVMAnimEasingType::QuadraticEaseOut) \
	op(ERigVMAnimEasingType::QuadraticEaseInOut) \
	op(ERigVMAnimEasingType::CubicEaseIn) \
	op(ERigVMAnimEasingType::CubicEaseOut) \
	op(ERigVMAnimEasingType::CubicEaseInOut) \
	op(ERigVMAnimEasingType::QuarticEaseIn) \
	op(ERigVMAnimEasingType::QuarticEaseOut) \
	op(ERigVMAnimEasingType::QuarticEaseInOut) \
	op(ERigVMAnimEasingType::QuinticEaseIn) \
	op(ERigVMAnimEasingType::QuinticEaseOut) \
	op(ERigVMAnimEasingType::QuinticEaseInOut) \
	op(ERigVMAnimEasingType::SineEaseIn) \
	op(ERigVMAnimEasingType::SineEaseOut) \
	op(ERigVMAnimEasingType::SineEaseInOut) \
	op(ERigVMAnimEasingType::CircularEaseIn) \
	op(ERigVMAnimEasingType::CircularEaseOut) \
	op(ERigVMAnimEasingType::CircularEaseInOut) \
	op(ERigVMAnimEasingType::ExponentialEaseIn) \
	op(ERigVMAnimEasingType::ExponentialEaseOut) \
	op(ERigVMAnimEasingType::ExponentialEaseInOut) \
	op(ERigVMAnimEasingType::ElasticEaseIn) \
	op(ERigVMAnimEasingType::ElasticEaseOut) \
	op(ERigVMAnimEasingType::ElasticEaseInOut) \
	op(ERigVMAnimEasingType::BackEaseIn) \
	op(ERigVMAnimEasingType::BackEaseOut) \
	op(ERigVMAnimEasingType::BackEaseInOut) \
	op(ERigVMAnimEasingType::BounceEaseIn) \
	op(ERigVMAnimEasingType::BounceEaseOut) \
	op(ERigVMAnimEasingType::BounceEaseInOut) 

enum class ERigVMAnimEasingType : uint8;
template<> struct TIsUEnumClass<ERigVMAnimEasingType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMAnimEasingType>();

#define FOREACH_ENUM_ERIGVMSIMPOINTINTEGRATETYPE(op) \
	op(ERigVMSimPointIntegrateType::Verlet) \
	op(ERigVMSimPointIntegrateType::SemiExplicitEuler) 

enum class ERigVMSimPointIntegrateType : uint8;
template<> struct TIsUEnumClass<ERigVMSimPointIntegrateType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMSimPointIntegrateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
