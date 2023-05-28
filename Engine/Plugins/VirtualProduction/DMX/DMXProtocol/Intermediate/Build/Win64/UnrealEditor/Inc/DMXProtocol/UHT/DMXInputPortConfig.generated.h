// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IO/DMXInputPortConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMXPROTOCOL_DMXInputPortConfig_generated_h
#error "DMXInputPortConfig.generated.h already included, missing '#pragma once' in DMXInputPortConfig.h"
#endif
#define DMXPROTOCOL_DMXInputPortConfig_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<struct FDMXInputPortConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h


#define FOREACH_ENUM_EDMXPORTPRIORITYSTRATEGY(op) \
	op(EDMXPortPriorityStrategy::None) \
	op(EDMXPortPriorityStrategy::Equal) \
	op(EDMXPortPriorityStrategy::HigherThan) \
	op(EDMXPortPriorityStrategy::LowerThan) \
	op(EDMXPortPriorityStrategy::Highest) \
	op(EDMXPortPriorityStrategy::Lowest) 

enum class EDMXPortPriorityStrategy : uint8;
template<> struct TIsUEnumClass<EDMXPortPriorityStrategy> { enum { Value = true }; };
template<> DMXPROTOCOL_API UEnum* StaticEnum<EDMXPortPriorityStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
