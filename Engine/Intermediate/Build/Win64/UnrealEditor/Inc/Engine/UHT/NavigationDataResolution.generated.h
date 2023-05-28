// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationDataResolution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationDataResolution_generated_h
#error "NavigationDataResolution.generated.h already included, missing '#pragma once' in NavigationDataResolution.h"
#endif
#define ENGINE_NavigationDataResolution_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h


#define FOREACH_ENUM_ENAVIGATIONDATARESOLUTION(op) \
	op(ENavigationDataResolution::Low) \
	op(ENavigationDataResolution::Default) \
	op(ENavigationDataResolution::High) 

enum class ENavigationDataResolution : uint8;
template<> struct TIsUEnumClass<ENavigationDataResolution> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavigationDataResolution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
