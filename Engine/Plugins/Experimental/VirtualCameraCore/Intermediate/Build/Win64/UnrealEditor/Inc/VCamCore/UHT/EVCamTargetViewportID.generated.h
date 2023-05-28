// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EVCamTargetViewportID.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VCAMCORE_EVCamTargetViewportID_generated_h
#error "EVCamTargetViewportID.generated.h already included, missing '#pragma once' in EVCamTargetViewportID.h"
#endif
#define VCAMCORE_EVCamTargetViewportID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h


#define FOREACH_ENUM_EVCAMTARGETVIEWPORTID(op) \
	op(EVCamTargetViewportID::Viewport1) \
	op(EVCamTargetViewportID::Viewport2) \
	op(EVCamTargetViewportID::Viewport3) \
	op(EVCamTargetViewportID::Viewport4) \
	op(EVCamTargetViewportID::Count) 

enum class EVCamTargetViewportID : uint8;
template<> struct TIsUEnumClass<EVCamTargetViewportID> { enum { Value = true }; };
template<> VCAMCORE_API UEnum* StaticEnum<EVCamTargetViewportID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
