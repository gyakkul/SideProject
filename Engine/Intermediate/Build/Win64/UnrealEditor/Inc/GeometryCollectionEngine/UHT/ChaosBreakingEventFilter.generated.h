// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosBreakingEventFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosBreakingEventFilter_generated_h
#error "ChaosBreakingEventFilter.generated.h already included, missing '#pragma once' in ChaosBreakingEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosBreakingEventFilter_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosBreakingEventData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosBreakingEventRequestSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h


#define FOREACH_ENUM_ECHAOSBREAKINGSORTMETHOD(op) \
	op(EChaosBreakingSortMethod::SortNone) \
	op(EChaosBreakingSortMethod::SortByHighestMass) \
	op(EChaosBreakingSortMethod::SortByHighestSpeed) \
	op(EChaosBreakingSortMethod::SortByNearestFirst) \
	op(EChaosBreakingSortMethod::Count) 

enum class EChaosBreakingSortMethod : uint8;
template<> struct TIsUEnumClass<EChaosBreakingSortMethod> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosBreakingSortMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
