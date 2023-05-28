// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOP/CustomizableObjectPopulationConstraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulationConstraint_generated_h
#error "CustomizableObjectPopulationConstraint.generated.h already included, missing '#pragma once' in CustomizableObjectPopulationConstraint.h"
#endif
#define CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulationConstraint_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintRanges_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<struct FConstraintRanges>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<struct FCustomizableObjectPopulationConstraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h


#define FOREACH_ENUM_EPOPULATIONCONSTRAINTTYPE(op) \
	op(EPopulationConstraintType::NONE) \
	op(EPopulationConstraintType::BOOL) \
	op(EPopulationConstraintType::DISCRETE) \
	op(EPopulationConstraintType::DISCRETE_FLOAT) \
	op(EPopulationConstraintType::DISCRETE_COLOR) \
	op(EPopulationConstraintType::TAG) \
	op(EPopulationConstraintType::RANGE) \
	op(EPopulationConstraintType::CURVE) \
	op(EPopulationConstraintType::CURVE_COLOR) 

enum class EPopulationConstraintType : uint8;
template<> struct TIsUEnumClass<EPopulationConstraintType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTPOPULATION_API UEnum* StaticEnum<EPopulationConstraintType>();

#define FOREACH_ENUM_ECURVECOLOR(op) \
	op(ECurveColor::RED) \
	op(ECurveColor::GREEN) \
	op(ECurveColor::BLUE) \
	op(ECurveColor::ALPHA) 

enum class ECurveColor : uint8;
template<> struct TIsUEnumClass<ECurveColor> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTPOPULATION_API UEnum* StaticEnum<ECurveColor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
