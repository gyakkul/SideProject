// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/CompositingMaterialPass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSURE_CompositingMaterialPass_generated_h
#error "CompositingMaterialPass.generated.h already included, missing '#pragma once' in CompositingMaterialPass.h"
#endif
#define COMPOSURE_CompositingMaterialPass_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositingParamPayload_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPOSURE_API UScriptStruct* StaticStruct<struct FCompositingParamPayload>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPOSURE_API UScriptStruct* StaticStruct<struct FNamedCompMaterialParam>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositingMaterial_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCompositingParamPayload Super;


template<> COMPOSURE_API UScriptStruct* StaticStruct<struct FCompositingMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h


#define FOREACH_ENUM_EPARAMTYPE(op) \
	op(EParamType::UnknownParamType) \
	op(EParamType::ScalarParam) \
	op(EParamType::VectorParam) \
	op(EParamType::TextureParam) \
	op(EParamType::MediaTextureParam) 

enum class EParamType : uint8;
template<> struct TIsUEnumClass<EParamType> { enum { Value = true }; };
template<> COMPOSURE_API UEnum* StaticEnum<EParamType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
