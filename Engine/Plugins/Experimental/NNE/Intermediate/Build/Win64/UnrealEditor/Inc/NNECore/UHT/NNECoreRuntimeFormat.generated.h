// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNECoreRuntimeFormat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNECORE_NNECoreRuntimeFormat_generated_h
#error "NNECoreRuntimeFormat.generated.h already included, missing '#pragma once' in NNECoreRuntimeFormat.h"
#endif
#define NNECORE_NNECoreRuntimeFormat_generated_h

#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNNEModelRaw_Statics; \
	NNECORE_API static class UScriptStruct* StaticStruct();


template<> NNECORE_API UScriptStruct* StaticStruct<struct FNNEModelRaw>();

#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics; \
	NNECORE_API static class UScriptStruct* StaticStruct();


template<> NNECORE_API UScriptStruct* StaticStruct<struct FNNEFormatAttributeDesc>();

#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics; \
	NNECORE_API static class UScriptStruct* StaticStruct();


template<> NNECORE_API UScriptStruct* StaticStruct<struct FNNEFormatOperatorDesc>();

#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics; \
	NNECORE_API static class UScriptStruct* StaticStruct();


template<> NNECORE_API UScriptStruct* StaticStruct<struct FNNEFormatTensorDesc>();

#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics; \
	NNECORE_API static class UScriptStruct* StaticStruct();


template<> NNECORE_API UScriptStruct* StaticStruct<struct FNNERuntimeFormat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h


#define FOREACH_ENUM_ENNEFORMATTENSORTYPE(op) \
	op(ENNEFormatTensorType::None) \
	op(ENNEFormatTensorType::Input) \
	op(ENNEFormatTensorType::Output) \
	op(ENNEFormatTensorType::Intermediate) \
	op(ENNEFormatTensorType::Initializer) \
	op(ENNEFormatTensorType::NUM) 

enum class ENNEFormatTensorType : uint8;
template<> struct TIsUEnumClass<ENNEFormatTensorType> { enum { Value = true }; };
template<> NNECORE_API UEnum* StaticEnum<ENNEFormatTensorType>();

#define FOREACH_ENUM_ENNEINFERENCEFORMAT(op) \
	op(ENNEInferenceFormat::Invalid) \
	op(ENNEInferenceFormat::ONNX) \
	op(ENNEInferenceFormat::ORT) \
	op(ENNEInferenceFormat::NNERT) 

enum class ENNEInferenceFormat : uint8;
template<> struct TIsUEnumClass<ENNEInferenceFormat> { enum { Value = true }; };
template<> NNECORE_API UEnum* StaticEnum<ENNEInferenceFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
