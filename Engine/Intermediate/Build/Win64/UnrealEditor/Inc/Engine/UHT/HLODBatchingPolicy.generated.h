// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/HLODBatchingPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODBatchingPolicy_generated_h
#error "HLODBatchingPolicy.generated.h already included, missing '#pragma once' in HLODBatchingPolicy.h"
#endif
#define ENGINE_HLODBatchingPolicy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h


#define FOREACH_ENUM_EHLODBATCHINGPOLICY(op) \
	op(EHLODBatchingPolicy::None) \
	op(EHLODBatchingPolicy::MeshSection) \
	op(EHLODBatchingPolicy::Instancing) 

enum class EHLODBatchingPolicy : uint8;
template<> struct TIsUEnumClass<EHLODBatchingPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EHLODBatchingPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
