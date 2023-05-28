// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkCameraTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkCameraTypes_generated_h
#error "LiveLinkCameraTypes.generated.h already included, missing '#pragma once' in LiveLinkCameraTypes.h"
#endif
#define LIVELINKINTERFACE_LiveLinkCameraTypes_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformStaticData Super;


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCameraStaticData>();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformFrameData Super;


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCameraFrameData>();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkBaseBlueprintData Super;


template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<struct FLiveLinkCameraBlueprintData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h


#define FOREACH_ENUM_ELIVELINKCAMERAPROJECTIONMODE(op) \
	op(ELiveLinkCameraProjectionMode::Perspective) \
	op(ELiveLinkCameraProjectionMode::Orthographic) 

enum class ELiveLinkCameraProjectionMode : uint8;
template<> struct TIsUEnumClass<ELiveLinkCameraProjectionMode> { enum { Value = true }; };
template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkCameraProjectionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
