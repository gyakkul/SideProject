// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIOColorSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENCOLORIO_OpenColorIOColorSpace_generated_h
#error "OpenColorIOColorSpace.generated.h already included, missing '#pragma once' in OpenColorIOColorSpace.h"
#endif
#define OPENCOLORIO_OpenColorIOColorSpace_generated_h

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENCOLORIO_API UScriptStruct* StaticStruct<struct FOpenColorIOColorSpace>();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENCOLORIO_API UScriptStruct* StaticStruct<struct FOpenColorIODisplayView>();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENCOLORIO_API UScriptStruct* StaticStruct<struct FOpenColorIOColorConversionSettings>();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPENCOLORIO_API UScriptStruct* StaticStruct<struct FOpenColorIODisplayConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h


#define FOREACH_ENUM_EOPENCOLORIOVIEWTRANSFORMDIRECTION(op) \
	op(EOpenColorIOViewTransformDirection::Forward) \
	op(EOpenColorIOViewTransformDirection::Inverse) 

enum class EOpenColorIOViewTransformDirection : uint8;
template<> struct TIsUEnumClass<EOpenColorIOViewTransformDirection> { enum { Value = true }; };
template<> OPENCOLORIO_API UEnum* StaticEnum<EOpenColorIOViewTransformDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
