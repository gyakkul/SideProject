// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLAdapterSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLADAPTER_MLAdapterSpace_generated_h
#error "MLAdapterSpace.generated.h already included, missing '#pragma once' in MLAdapterSpace.h"
#endif
#define MLADAPTER_MLAdapterSpace_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSpace_h


#define FOREACH_ENUM_EMLADAPTERSPACETYPE(op) \
	op(EMLAdapterSpaceType::Discrete) \
	op(EMLAdapterSpaceType::MultiDiscrete) \
	op(EMLAdapterSpaceType::Box) \
	op(EMLAdapterSpaceType::Tuple) 

enum class EMLAdapterSpaceType : uint8;
template<> struct TIsUEnumClass<EMLAdapterSpaceType> { enum { Value = true }; };
template<> MLADAPTER_API UEnum* StaticEnum<EMLAdapterSpaceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
