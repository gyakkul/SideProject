// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ShaderParamTypeDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPUTEFRAMEWORK_ShaderParamTypeDefinition_generated_h
#error "ShaderParamTypeDefinition.generated.h already included, missing '#pragma once' in ShaderParamTypeDefinition.h"
#endif
#define COMPUTEFRAMEWORK_ShaderParamTypeDefinition_generated_h

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<struct FShaderValueTypeHandle>();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShaderValueType_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<struct FShaderValueType>();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<struct FShaderParamTypeDefinition>();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_370_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<struct FShaderFunctionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h


#define FOREACH_ENUM_ESHADERFUNDAMENTALTYPE(op) \
	op(EShaderFundamentalType::Bool) \
	op(EShaderFundamentalType::Int) \
	op(EShaderFundamentalType::Uint) \
	op(EShaderFundamentalType::Float) \
	op(EShaderFundamentalType::Struct) \
	op(EShaderFundamentalType::None) 

enum class EShaderFundamentalType : uint8;
template<> struct TIsUEnumClass<EShaderFundamentalType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderFundamentalType>();

#define FOREACH_ENUM_ESHADERFUNDAMENTALDIMENSIONTYPE(op) \
	op(EShaderFundamentalDimensionType::Scalar) \
	op(EShaderFundamentalDimensionType::Vector) \
	op(EShaderFundamentalDimensionType::Matrix) 

enum class EShaderFundamentalDimensionType : uint8;
template<> struct TIsUEnumClass<EShaderFundamentalDimensionType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderFundamentalDimensionType>();

#define FOREACH_ENUM_ESHADERPARAMBINDINGTYPE(op) \
	op(EShaderParamBindingType::None) \
	op(EShaderParamBindingType::ConstantParameter) \
	op(EShaderParamBindingType::ReadOnlyResource) \
	op(EShaderParamBindingType::ReadWriteResource) 

enum class EShaderParamBindingType : uint8;
template<> struct TIsUEnumClass<EShaderParamBindingType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderParamBindingType>();

#define FOREACH_ENUM_ESHADERRESOURCETYPE(op) \
	op(EShaderResourceType::None) \
	op(EShaderResourceType::Texture1D) \
	op(EShaderResourceType::Texture2D) \
	op(EShaderResourceType::Texture3D) \
	op(EShaderResourceType::TextureCube) \
	op(EShaderResourceType::Buffer) \
	op(EShaderResourceType::StructuredBuffer) \
	op(EShaderResourceType::ByteAddressBuffer) 

enum class EShaderResourceType : uint8;
template<> struct TIsUEnumClass<EShaderResourceType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderResourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
