// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_IKRetargetSettings_generated_h
#error "IKRetargetSettings.generated.h already included, missing '#pragma once' in IKRetargetSettings.h"
#endif
#define IKRIG_IKRetargetSettings_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FTargetChainSpeedPlantSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FTargetChainFKSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FTargetChainIKSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetChainSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FTargetChainSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetRootSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FTargetRootSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FRetargetGlobalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h


#define FOREACH_ENUM_ERETARGETTRANSLATIONMODE(op) \
	op(ERetargetTranslationMode::None) \
	op(ERetargetTranslationMode::GloballyScaled) \
	op(ERetargetTranslationMode::Absolute) 

enum class ERetargetTranslationMode : uint8;
template<> struct TIsUEnumClass<ERetargetTranslationMode> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<ERetargetTranslationMode>();

#define FOREACH_ENUM_ERETARGETROTATIONMODE(op) \
	op(ERetargetRotationMode::Interpolated) \
	op(ERetargetRotationMode::OneToOne) \
	op(ERetargetRotationMode::OneToOneReversed) \
	op(ERetargetRotationMode::None) 

enum class ERetargetRotationMode : uint8;
template<> struct TIsUEnumClass<ERetargetRotationMode> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<ERetargetRotationMode>();

#define FOREACH_ENUM_EBASICAXIS(op) \
	op(EBasicAxis::X) \
	op(EBasicAxis::Y) \
	op(EBasicAxis::Z) \
	op(EBasicAxis::NegX) \
	op(EBasicAxis::NegY) \
	op(EBasicAxis::NegZ) 

enum class EBasicAxis;
template<> struct TIsUEnumClass<EBasicAxis> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<EBasicAxis>();

#define FOREACH_ENUM_EWARPINGDIRECTIONSOURCE(op) \
	op(EWarpingDirectionSource::Goals) \
	op(EWarpingDirectionSource::Chain) 

enum class EWarpingDirectionSource;
template<> struct TIsUEnumClass<EWarpingDirectionSource> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<EWarpingDirectionSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
