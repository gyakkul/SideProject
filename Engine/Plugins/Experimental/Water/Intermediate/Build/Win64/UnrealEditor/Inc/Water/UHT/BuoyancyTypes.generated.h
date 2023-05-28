// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_BuoyancyTypes_generated_h
#error "BuoyancyTypes.generated.h already included, missing '#pragma once' in BuoyancyTypes.h"
#endif
#define WATER_BuoyancyTypes_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalPontoon_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FSphericalPontoon>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuoyancyData_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FBuoyancyData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyTypes_h


#define FOREACH_ENUM_EBUOYANCYEVENT(op) \
	op(EBuoyancyEvent::EnteredWaterBody) \
	op(EBuoyancyEvent::ExitedWaterBody) 

enum class EBuoyancyEvent : uint8;
template<> struct TIsUEnumClass<EBuoyancyEvent> { enum { Value = true }; };
template<> WATER_API UEnum* StaticEnum<EBuoyancyEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
