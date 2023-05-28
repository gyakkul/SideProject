// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialDomain.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialDomain_generated_h
#error "MaterialDomain.generated.h already included, missing '#pragma once' in MaterialDomain.h"
#endif
#define ENGINE_MaterialDomain_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MaterialDomain_h


#define FOREACH_ENUM_EMATERIALDOMAIN(op) \
	op(MD_Surface) \
	op(MD_DeferredDecal) \
	op(MD_LightFunction) \
	op(MD_Volume) \
	op(MD_PostProcess) \
	op(MD_UI) \
	op(MD_RuntimeVirtualTexture) 

enum EMaterialDomain : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialDomain>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
