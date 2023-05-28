// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialLayersFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialLayersFunctions_generated_h
#error "MaterialLayersFunctions.generated.h already included, missing '#pragma once' in MaterialLayersFunctions.h"
#endif
#define ENGINE_MaterialLayersFunctions_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialLayersFunctionsEditorOnlyData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialLayersFunctionsRuntimeData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMaterialLayersFunctionsRuntimeData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialLayersFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h


#define FOREACH_ENUM_EMATERIALLAYERLINKSTATE(op) \
	op(EMaterialLayerLinkState::Uninitialized) \
	op(EMaterialLayerLinkState::LinkedToParent) \
	op(EMaterialLayerLinkState::UnlinkedFromParent) \
	op(EMaterialLayerLinkState::NotFromParent) 

enum class EMaterialLayerLinkState : uint8;
template<> struct TIsUEnumClass<EMaterialLayerLinkState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMaterialLayerLinkState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
