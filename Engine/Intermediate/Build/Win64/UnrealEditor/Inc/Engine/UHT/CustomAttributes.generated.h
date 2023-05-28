// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CustomAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CustomAttributes_generated_h
#error "CustomAttributes.generated.h already included, missing '#pragma once' in CustomAttributes.h"
#endif
#define ENGINE_CustomAttributes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomAttributeSetting>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimecodeCustomAttributeNameSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomAttributePerBoneData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedStringCustomAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedIntegerCustomAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedFloatCustomAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedCustomAttributePerBoneData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h


#define FOREACH_ENUM_ECUSTOMATTRIBUTEBLENDTYPE(op) \
	op(ECustomAttributeBlendType::Override) \
	op(ECustomAttributeBlendType::Blend) 

enum class ECustomAttributeBlendType : uint8;
template<> struct TIsUEnumClass<ECustomAttributeBlendType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECustomAttributeBlendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
