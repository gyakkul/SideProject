// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/RootMotionSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RootMotionSource_generated_h
#error "RootMotionSource.generated.h already included, missing '#pragma once' in RootMotionSource.h"
#endif
#define ENGINE_RootMotionSource_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSourceStatus>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSourceSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionFinishVelocitySettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_412_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_ConstantForce>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_463_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_RadialForce>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_538_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_MoveToForce>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_602_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_MoveToDynamicForce>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_672_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRootMotionSource Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSource_JumpForce>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_745_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionSourceGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h


#define FOREACH_ENUM_EROOTMOTIONACCUMULATEMODE(op) \
	op(ERootMotionAccumulateMode::Override) \
	op(ERootMotionAccumulateMode::Additive) 

enum class ERootMotionAccumulateMode : uint8;
template<> struct TIsUEnumClass<ERootMotionAccumulateMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERootMotionAccumulateMode>();

#define FOREACH_ENUM_EROOTMOTIONSOURCESTATUSFLAGS(op) \
	op(ERootMotionSourceStatusFlags::Prepared) \
	op(ERootMotionSourceStatusFlags::Finished) \
	op(ERootMotionSourceStatusFlags::MarkedForRemoval) 

enum class ERootMotionSourceStatusFlags : uint8;
template<> struct TIsUEnumClass<ERootMotionSourceStatusFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceStatusFlags>();

#define FOREACH_ENUM_EROOTMOTIONSOURCESETTINGSFLAGS(op) \
	op(ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck) \
	op(ERootMotionSourceSettingsFlags::DisablePartialEndTick) \
	op(ERootMotionSourceSettingsFlags::IgnoreZAccumulate) 

enum class ERootMotionSourceSettingsFlags : uint8;
template<> struct TIsUEnumClass<ERootMotionSourceSettingsFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceSettingsFlags>();

#define FOREACH_ENUM_EROOTMOTIONFINISHVELOCITYMODE(op) \
	op(ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity) \
	op(ERootMotionFinishVelocityMode::SetVelocity) \
	op(ERootMotionFinishVelocityMode::ClampVelocity) 

enum class ERootMotionFinishVelocityMode : uint8;
template<> struct TIsUEnumClass<ERootMotionFinishVelocityMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERootMotionFinishVelocityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
