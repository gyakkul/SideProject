// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosRemovalEventFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosRemovalEventFilter_generated_h
#error "ChaosRemovalEventFilter.generated.h already included, missing '#pragma once' in ChaosRemovalEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosRemovalEventFilter_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosRemovalEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosRemovalEventData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosRemovalEventRequestSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosRemovalEventFilter_h


#define FOREACH_ENUM_ECHAOSREMOVALSORTMETHOD(op) \
	op(EChaosRemovalSortMethod::SortNone) \
	op(EChaosRemovalSortMethod::SortByHighestMass) \
	op(EChaosRemovalSortMethod::SortByNearestFirst) \
	op(EChaosRemovalSortMethod::Count) 

enum class EChaosRemovalSortMethod : uint8;
template<> struct TIsUEnumClass<EChaosRemovalSortMethod> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosRemovalSortMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
