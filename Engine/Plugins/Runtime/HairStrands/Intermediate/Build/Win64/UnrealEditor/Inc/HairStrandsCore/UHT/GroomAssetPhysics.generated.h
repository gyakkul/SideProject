// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetPhysics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_GroomAssetPhysics_generated_h
#error "GroomAssetPhysics.generated.h already included, missing '#pragma once' in GroomAssetPhysics.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetPhysics_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairSolverSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairSolverSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairExternalForces_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairExternalForces>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairBendConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairBendConstraint>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairStretchConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairStretchConstraint>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairCollisionConstraint>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairMaterialConstraints>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairStrandsParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairStrandsParameters>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupsPhysics>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairSimulationSolver_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairSimulationSolver>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairSimulationForces_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairSimulationForces>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_313_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairSimulationConstraints>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_351_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairSimulationSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairSimulationSetup>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_385_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairSimulationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairSimulationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h


#define FOREACH_ENUM_EGROOMNIAGARASOLVERS(op) \
	op(EGroomNiagaraSolvers::None) \
	op(EGroomNiagaraSolvers::CosseratRods) \
	op(EGroomNiagaraSolvers::AngularSprings) \
	op(EGroomNiagaraSolvers::CustomSolver) 

enum class EGroomNiagaraSolvers : uint8;
template<> struct TIsUEnumClass<EGroomNiagaraSolvers> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomNiagaraSolvers>();

#define FOREACH_ENUM_EGROOMSTRANDSSIZE(op) \
	op(EGroomStrandsSize::None) \
	op(EGroomStrandsSize::Size2) \
	op(EGroomStrandsSize::Size4) \
	op(EGroomStrandsSize::Size8) \
	op(EGroomStrandsSize::Size16) \
	op(EGroomStrandsSize::Size32) 

enum class EGroomStrandsSize : uint8;
template<> struct TIsUEnumClass<EGroomStrandsSize> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomStrandsSize>();

#define FOREACH_ENUM_EGROOMINTERPOLATIONTYPE(op) \
	op(EGroomInterpolationType::None) \
	op(EGroomInterpolationType::RigidTransform) \
	op(EGroomInterpolationType::OffsetTransform) \
	op(EGroomInterpolationType::SmoothTransform) 

enum class EGroomInterpolationType : uint8;
template<> struct TIsUEnumClass<EGroomInterpolationType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
