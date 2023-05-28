// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSUTILITIES_PhysicsAssetUtils_generated_h
#error "PhysicsAssetUtils.generated.h already included, missing '#pragma once' in PhysicsAssetUtils.h"
#endif
#define PHYSICSUTILITIES_PhysicsAssetUtils_generated_h

#define FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics; \
	PHYSICSUTILITIES_API static class UScriptStruct* StaticStruct();


template<> PHYSICSUTILITIES_API UScriptStruct* StaticStruct<struct FPhysAssetCreateParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h


#define FOREACH_ENUM_EPHYSASSETFITGEOMTYPE(op) \
	op(EFG_Box) \
	op(EFG_Sphyl) \
	op(EFG_Sphere) \
	op(EFG_TaperedCapsule) \
	op(EFG_SingleConvexHull) \
	op(EFG_MultiConvexHull) \
	op(EFG_LevelSet) 

enum EPhysAssetFitGeomType : int;
template<> PHYSICSUTILITIES_API UEnum* StaticEnum<EPhysAssetFitGeomType>();

#define FOREACH_ENUM_EPHYSASSETFITVERTWEIGHT(op) \
	op(EVW_AnyWeight) \
	op(EVW_DominantWeight) 

enum EPhysAssetFitVertWeight : int;
template<> PHYSICSUTILITIES_API UEnum* StaticEnum<EPhysAssetFitVertWeight>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
