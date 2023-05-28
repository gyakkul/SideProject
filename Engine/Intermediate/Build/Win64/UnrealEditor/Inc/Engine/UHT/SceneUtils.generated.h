// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SceneUtils_generated_h
#error "SceneUtils.generated.h already included, missing '#pragma once' in SceneUtils.h"
#endif
#define ENGINE_SceneUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_SceneUtils_h


#define FOREACH_ENUM_EANTIALIASINGMETHOD(op) \
	op(AAM_None) \
	op(AAM_FXAA) \
	op(AAM_TemporalAA) \
	op(AAM_MSAA) \
	op(AAM_TSR) 

enum EAntiAliasingMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EAntiAliasingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
