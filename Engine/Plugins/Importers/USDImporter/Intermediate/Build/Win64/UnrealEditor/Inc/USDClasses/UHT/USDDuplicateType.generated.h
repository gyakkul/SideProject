// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDDuplicateType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USDCLASSES_USDDuplicateType_generated_h
#error "USDDuplicateType.generated.h already included, missing '#pragma once' in USDDuplicateType.h"
#endif
#define USDCLASSES_USDDuplicateType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDDuplicateType_h


#define FOREACH_ENUM_EUSDDUPLICATETYPE(op) \
	op(EUsdDuplicateType::FlattenComposedPrim) \
	op(EUsdDuplicateType::SingleLayerSpecs) \
	op(EUsdDuplicateType::AllLocalLayerSpecs) 

enum class EUsdDuplicateType : uint8;
template<> struct TIsUEnumClass<EUsdDuplicateType> { enum { Value = true }; };
template<> USDCLASSES_API UEnum* StaticEnum<EUsdDuplicateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
