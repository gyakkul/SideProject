// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FBIKConstraintOption.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FULLBODYIK_FBIKConstraintOption_generated_h
#error "FBIKConstraintOption.generated.h already included, missing '#pragma once' in FBIKConstraintOption.h"
#endif
#define FULLBODYIK_FBIKConstraintOption_generated_h

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> FULLBODYIK_API UScriptStruct* StaticStruct<struct FFBIKBoneLimit>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> FULLBODYIK_API UScriptStruct* StaticStruct<struct FFBIKConstraintOption>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionProcessInput_Statics; \
	FULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> FULLBODYIK_API UScriptStruct* StaticStruct<struct FMotionProcessInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h


#define FOREACH_ENUM_EFBIKBONELIMITTYPE(op) \
	op(EFBIKBoneLimitType::Free) \
	op(EFBIKBoneLimitType::Limit) \
	op(EFBIKBoneLimitType::Locked) 

enum class EFBIKBoneLimitType : uint8;
template<> struct TIsUEnumClass<EFBIKBoneLimitType> { enum { Value = true }; };
template<> FULLBODYIK_API UEnum* StaticEnum<EFBIKBoneLimitType>();

#define FOREACH_ENUM_EPOLEVECTOROPTION(op) \
	op(EPoleVectorOption::Direction) \
	op(EPoleVectorOption::Location) 

enum class EPoleVectorOption : uint8;
template<> struct TIsUEnumClass<EPoleVectorOption> { enum { Value = true }; };
template<> FULLBODYIK_API UEnum* StaticEnum<EPoleVectorOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
