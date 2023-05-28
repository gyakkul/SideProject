// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionConvexUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_GeometryCollectionConvexUtility_generated_h
#error "GeometryCollectionConvexUtility.generated.h already included, missing '#pragma once' in GeometryCollectionConvexUtility.h"
#endif
#define CHAOS_GeometryCollectionConvexUtility_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h


#define FOREACH_ENUM_ECONVEXOVERLAPREMOVAL(op) \
	op(EConvexOverlapRemoval::None) \
	op(EConvexOverlapRemoval::All) \
	op(EConvexOverlapRemoval::OnlyClusters) \
	op(EConvexOverlapRemoval::OnlyClustersVsClusters) 

enum class EConvexOverlapRemoval : int32;
template<> struct TIsUEnumClass<EConvexOverlapRemoval> { enum { Value = true }; };
template<> CHAOS_API UEnum* StaticEnum<EConvexOverlapRemoval>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
