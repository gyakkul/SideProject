// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosEngineInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_ChaosEngineInterface_generated_h
#error "ChaosEngineInterface.generated.h already included, missing '#pragma once' in ChaosEngineInterface.h"
#endif
#define PHYSICSCORE_ChaosEngineInterface_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosEngineInterface_h


#define FOREACH_ENUM_EPHYSICALSURFACE(op) \
	op(SurfaceType_Default) \
	op(SurfaceType1) \
	op(SurfaceType2) \
	op(SurfaceType3) \
	op(SurfaceType4) \
	op(SurfaceType5) \
	op(SurfaceType6) \
	op(SurfaceType7) \
	op(SurfaceType8) \
	op(SurfaceType9) \
	op(SurfaceType10) \
	op(SurfaceType11) \
	op(SurfaceType12) \
	op(SurfaceType13) \
	op(SurfaceType14) \
	op(SurfaceType15) \
	op(SurfaceType16) \
	op(SurfaceType17) \
	op(SurfaceType18) \
	op(SurfaceType19) \
	op(SurfaceType20) \
	op(SurfaceType21) \
	op(SurfaceType22) \
	op(SurfaceType23) \
	op(SurfaceType24) \
	op(SurfaceType25) \
	op(SurfaceType26) \
	op(SurfaceType27) \
	op(SurfaceType28) \
	op(SurfaceType29) \
	op(SurfaceType30) \
	op(SurfaceType31) \
	op(SurfaceType32) \
	op(SurfaceType33) \
	op(SurfaceType34) \
	op(SurfaceType35) \
	op(SurfaceType36) \
	op(SurfaceType37) \
	op(SurfaceType38) \
	op(SurfaceType39) \
	op(SurfaceType40) \
	op(SurfaceType41) \
	op(SurfaceType42) \
	op(SurfaceType43) \
	op(SurfaceType44) \
	op(SurfaceType45) \
	op(SurfaceType46) \
	op(SurfaceType47) \
	op(SurfaceType48) \
	op(SurfaceType49) \
	op(SurfaceType50) \
	op(SurfaceType51) \
	op(SurfaceType52) \
	op(SurfaceType53) \
	op(SurfaceType54) \
	op(SurfaceType55) \
	op(SurfaceType56) \
	op(SurfaceType57) \
	op(SurfaceType58) \
	op(SurfaceType59) \
	op(SurfaceType60) \
	op(SurfaceType61) \
	op(SurfaceType62) \
	op(SurfaceType_Max) 

enum EPhysicalSurface : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicalSurface>();

#define FOREACH_ENUM_ERADIALIMPULSEFALLOFF(op) \
	op(RIF_Constant) \
	op(RIF_Linear) 

enum ERadialImpulseFalloff : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<ERadialImpulseFalloff>();

#define FOREACH_ENUM_ESLEEPFAMILY(op) \
	op(ESleepFamily::Normal) \
	op(ESleepFamily::Sensitive) \
	op(ESleepFamily::Custom) 

enum class ESleepFamily : uint8;
template<> struct TIsUEnumClass<ESleepFamily> { enum { Value = true }; };
template<> PHYSICSCORE_API UEnum* StaticEnum<ESleepFamily>();

#define FOREACH_ENUM_EANGULARCONSTRAINTMOTION(op) \
	op(ACM_Free) \
	op(ACM_Limited) \
	op(ACM_Locked) 

enum EAngularConstraintMotion : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<EAngularConstraintMotion>();

#define FOREACH_ENUM_ECONSTRAINTFRAME(op) \
	op(EConstraintFrame::Frame1) \
	op(EConstraintFrame::Frame2) 

namespace EConstraintFrame { enum Type : int; }
template<> PHYSICSCORE_API UEnum* StaticEnum<EConstraintFrame::Type>();

#define FOREACH_ENUM_ECONSTRAINTPLASTICITYTYPE(op) \
	op(CCPT_Free) \
	op(CCPT_Shrink) \
	op(CCPT_Grow) 

enum EConstraintPlasticityType : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<EConstraintPlasticityType>();

#define FOREACH_ENUM_ELINEARCONSTRAINTMOTION(op) \
	op(LCM_Free) \
	op(LCM_Limited) \
	op(LCM_Locked) 

enum ELinearConstraintMotion : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<ELinearConstraintMotion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
