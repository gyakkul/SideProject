// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyAccess.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PropertyAccess_generated_h
#error "PropertyAccess.generated.h already included, missing '#pragma once' in PropertyAccess.h"
#endif
#define ENGINE_PropertyAccess_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessIndirection>();

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessIndirectionChain>();

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessSegment>();

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessPath_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessPath>();

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessCopy>();

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_384_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessCopyBatch>();

#define FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPropertyAccessLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h


#define FOREACH_ENUM_EPROPERTYACCESSCOPYBATCH(op) \
	op(EPropertyAccessCopyBatch::InternalUnbatched) \
	op(EPropertyAccessCopyBatch::ExternalUnbatched) \
	op(EPropertyAccessCopyBatch::InternalBatched) \
	op(EPropertyAccessCopyBatch::ExternalBatched) \
	op(EPropertyAccessCopyBatch::Count) 

enum class EPropertyAccessCopyBatch : uint8;
template<> struct TIsUEnumClass<EPropertyAccessCopyBatch> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessCopyBatch>();

#define FOREACH_ENUM_EPROPERTYACCESSINDIRECTIONTYPE(op) \
	op(EPropertyAccessIndirectionType::Offset) \
	op(EPropertyAccessIndirectionType::Object) \
	op(EPropertyAccessIndirectionType::Array) \
	op(EPropertyAccessIndirectionType::ScriptFunction) \
	op(EPropertyAccessIndirectionType::NativeFunction) 

enum class EPropertyAccessIndirectionType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessIndirectionType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessIndirectionType>();

#define FOREACH_ENUM_EPROPERTYACCESSOBJECTTYPE(op) \
	op(EPropertyAccessObjectType::None) \
	op(EPropertyAccessObjectType::Object) \
	op(EPropertyAccessObjectType::WeakObject) \
	op(EPropertyAccessObjectType::SoftObject) 

enum class EPropertyAccessObjectType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessObjectType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessObjectType>();

#define FOREACH_ENUM_EPROPERTYACCESSCOPYTYPE(op) \
	op(EPropertyAccessCopyType::None) \
	op(EPropertyAccessCopyType::Plain) \
	op(EPropertyAccessCopyType::Complex) \
	op(EPropertyAccessCopyType::Bool) \
	op(EPropertyAccessCopyType::Struct) \
	op(EPropertyAccessCopyType::Object) \
	op(EPropertyAccessCopyType::Name) \
	op(EPropertyAccessCopyType::Array) \
	op(EPropertyAccessCopyType::PromoteBoolToByte) \
	op(EPropertyAccessCopyType::PromoteBoolToInt32) \
	op(EPropertyAccessCopyType::PromoteBoolToInt64) \
	op(EPropertyAccessCopyType::PromoteBoolToFloat) \
	op(EPropertyAccessCopyType::PromoteBoolToDouble) \
	op(EPropertyAccessCopyType::PromoteByteToInt32) \
	op(EPropertyAccessCopyType::PromoteByteToInt64) \
	op(EPropertyAccessCopyType::PromoteByteToFloat) \
	op(EPropertyAccessCopyType::PromoteByteToDouble) \
	op(EPropertyAccessCopyType::PromoteInt32ToInt64) \
	op(EPropertyAccessCopyType::PromoteInt32ToFloat) \
	op(EPropertyAccessCopyType::PromoteInt32ToDouble) \
	op(EPropertyAccessCopyType::PromoteFloatToDouble) \
	op(EPropertyAccessCopyType::DemoteDoubleToFloat) \
	op(EPropertyAccessCopyType::PromoteArrayFloatToDouble) \
	op(EPropertyAccessCopyType::DemoteArrayDoubleToFloat) \
	op(EPropertyAccessCopyType::PromoteMapValueFloatToDouble) \
	op(EPropertyAccessCopyType::DemoteMapValueDoubleToFloat) 

enum class EPropertyAccessCopyType : uint8;
template<> struct TIsUEnumClass<EPropertyAccessCopyType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessCopyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
