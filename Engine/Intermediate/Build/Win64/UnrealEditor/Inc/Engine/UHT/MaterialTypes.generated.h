// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialTypes_generated_h
#error "MaterialTypes.generated.h already included, missing '#pragma once' in MaterialTypes.h"
#endif
#define ENGINE_MaterialTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialParameterInfo>();

#define FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameterChannelNames_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParameterChannelNames>();

#define FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_287_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticComponentMaskValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h


#define FOREACH_ENUM_EMATERIALPARAMETERASSOCIATION(op) \
	op(LayerParameter) \
	op(BlendParameter) \
	op(GlobalParameter) 

enum EMaterialParameterAssociation : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialParameterAssociation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
