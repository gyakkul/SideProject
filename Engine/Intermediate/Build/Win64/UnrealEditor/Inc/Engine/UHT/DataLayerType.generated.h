// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataLayerType_generated_h
#error "DataLayerType.generated.h already included, missing '#pragma once' in DataLayerType.h"
#endif
#define ENGINE_DataLayerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerType_h


#define FOREACH_ENUM_EDATALAYERTYPE(op) \
	op(EDataLayerType::Runtime) \
	op(EDataLayerType::Editor) \
	op(EDataLayerType::Unknown) \
	op(EDataLayerType::Size) 

enum class EDataLayerType : uint8;
template<> struct TIsUEnumClass<EDataLayerType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EDataLayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
