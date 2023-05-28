// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealUSDWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALUSDWRAPPER_UnrealUSDWrapper_generated_h
#error "UnrealUSDWrapper.generated.h already included, missing '#pragma once' in UnrealUSDWrapper.h"
#endif
#define UNREALUSDWRAPPER_UnrealUSDWrapper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h


#define FOREACH_ENUM_EUSDPURPOSE(op) \
	op(EUsdPurpose::Default) \
	op(EUsdPurpose::Proxy) \
	op(EUsdPurpose::Render) \
	op(EUsdPurpose::Guide) 

enum class EUsdPurpose : int32;
template<> struct TIsUEnumClass<EUsdPurpose> { enum { Value = true }; };
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdPurpose>();

#define FOREACH_ENUM_EUSDDEFAULTKIND(op) \
	op(EUsdDefaultKind::None) \
	op(EUsdDefaultKind::Model) \
	op(EUsdDefaultKind::Component) \
	op(EUsdDefaultKind::Group) \
	op(EUsdDefaultKind::Assembly) \
	op(EUsdDefaultKind::Subcomponent) 

enum class EUsdDefaultKind : int32;
template<> struct TIsUEnumClass<EUsdDefaultKind> { enum { Value = true }; };
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdDefaultKind>();

#define FOREACH_ENUM_EUSDINITIALLOADSET(op) \
	op(EUsdInitialLoadSet::LoadAll) \
	op(EUsdInitialLoadSet::LoadNone) 

enum class EUsdInitialLoadSet : uint8;
template<> struct TIsUEnumClass<EUsdInitialLoadSet> { enum { Value = true }; };
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdInitialLoadSet>();

#define FOREACH_ENUM_EUSDINTERPOLATIONTYPE(op) \
	op(EUsdInterpolationType::Held) \
	op(EUsdInterpolationType::Linear) 

enum class EUsdInterpolationType : uint8;
template<> struct TIsUEnumClass<EUsdInterpolationType> { enum { Value = true }; };
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdInterpolationType>();

#define FOREACH_ENUM_EUSDROOTMOTIONHANDLING(op) \
	op(EUsdRootMotionHandling::NoAdditionalRootMotion) \
	op(EUsdRootMotionHandling::UseMotionFromSkelRoot) \
	op(EUsdRootMotionHandling::UseMotionFromSkeleton) 

enum class EUsdRootMotionHandling;
template<> struct TIsUEnumClass<EUsdRootMotionHandling> { enum { Value = true }; };
template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdRootMotionHandling>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
