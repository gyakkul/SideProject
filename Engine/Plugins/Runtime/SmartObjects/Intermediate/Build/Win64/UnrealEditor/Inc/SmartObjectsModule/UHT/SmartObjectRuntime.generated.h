// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectRuntime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMARTOBJECTSMODULE_SmartObjectRuntime_generated_h
#error "SmartObjectRuntime.generated.h already included, missing '#pragma once' in SmartObjectRuntime.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectRuntime_generated_h

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectClaimHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectClaimHandle>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectSlotTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSlotStateData Super;


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectSlotTransform>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRuntimeSlot>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRuntime_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRuntime>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectSlotView_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectSlotView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRuntime_h


#define FOREACH_ENUM_ESMARTOBJECTSLOTSTATE(op) \
	op(ESmartObjectSlotState::Invalid) \
	op(ESmartObjectSlotState::Free) \
	op(ESmartObjectSlotState::Claimed) \
	op(ESmartObjectSlotState::Occupied) \
	op(ESmartObjectSlotState::Disabled) 

enum class ESmartObjectSlotState : uint8;
template<> struct TIsUEnumClass<ESmartObjectSlotState> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectSlotState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
