// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralEnumClasses.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURALNETWORKINFERENCE_NeuralEnumClasses_generated_h
#error "NeuralEnumClasses.generated.h already included, missing '#pragma once' in NeuralEnumClasses.h"
#endif
#define NEURALNETWORKINFERENCE_NeuralEnumClasses_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralEnumClasses_h


#define FOREACH_ENUM_ENEURALDATATYPE(op) \
	op(ENeuralDataType::Float) \
	op(ENeuralDataType::Int32) \
	op(ENeuralDataType::Int64) \
	op(ENeuralDataType::UInt32) \
	op(ENeuralDataType::UInt64) \
	op(ENeuralDataType::None) 

enum class ENeuralDataType : uint8;
template<> struct TIsUEnumClass<ENeuralDataType> { enum { Value = true }; };
template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralDataType>();

#define FOREACH_ENUM_ENEURALDEVICETYPE(op) \
	op(ENeuralDeviceType::CPU) \
	op(ENeuralDeviceType::GPU) 

enum class ENeuralDeviceType : uint8;
template<> struct TIsUEnumClass<ENeuralDeviceType> { enum { Value = true }; };
template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralDeviceType>();

#define FOREACH_ENUM_ENEURALSYNCHRONOUSMODE(op) \
	op(ENeuralSynchronousMode::Synchronous) \
	op(ENeuralSynchronousMode::Asynchronous) 

enum class ENeuralSynchronousMode : uint8;
template<> struct TIsUEnumClass<ENeuralSynchronousMode> { enum { Value = true }; };
template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralSynchronousMode>();

#define FOREACH_ENUM_ENEURALTENSORTYPE(op) \
	op(ENeuralTensorType::Generic) \
	op(ENeuralTensorType::Input) \
	op(ENeuralTensorType::IntermediateNotInitialized) \
	op(ENeuralTensorType::IntermediateInitialized) \
	op(ENeuralTensorType::Output) \
	op(ENeuralTensorType::Weight) 

enum class ENeuralTensorType : uint8;
template<> struct TIsUEnumClass<ENeuralTensorType> { enum { Value = true }; };
template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralTensorType>();

#define FOREACH_ENUM_ENEURALTHREADMODE(op) \
	op(ENeuralThreadMode::GameThread) \
	op(ENeuralThreadMode::AnyThread) 

enum class ENeuralThreadMode : uint8;
template<> struct TIsUEnumClass<ENeuralThreadMode> { enum { Value = true }; };
template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralThreadMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
