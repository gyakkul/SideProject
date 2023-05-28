// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarPointCloudShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudShared_generated_h
#error "LidarPointCloudShared.generated.h already included, missing '#pragma once' in LidarPointCloudShared.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudShared_generated_h

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FLidarPointCloudNormal>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FLidarPointCloudPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h


#define FOREACH_ENUM_ELIDARPOINTCLOUDASYNCMODE(op) \
	op(ELidarPointCloudAsyncMode::Success) \
	op(ELidarPointCloudAsyncMode::Failure) \
	op(ELidarPointCloudAsyncMode::Progress) 

enum class ELidarPointCloudAsyncMode : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudAsyncMode> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudAsyncMode>();

#define FOREACH_ENUM_ELIDARPOINTCLOUDSCALINGMETHOD(op) \
	op(ELidarPointCloudScalingMethod::PerNode) \
	op(ELidarPointCloudScalingMethod::PerNodeAdaptive) \
	op(ELidarPointCloudScalingMethod::PerPoint) \
	op(ELidarPointCloudScalingMethod::FixedScreenSize) 

enum class ELidarPointCloudScalingMethod : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudScalingMethod> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudScalingMethod>();

#define FOREACH_ENUM_ELIDARCLIPPINGVOLUMEMODE(op) \
	op(ELidarClippingVolumeMode::ClipInside) \
	op(ELidarClippingVolumeMode::ClipOutside) 

enum class ELidarClippingVolumeMode : uint8;
template<> struct TIsUEnumClass<ELidarClippingVolumeMode> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarClippingVolumeMode>();

#define FOREACH_ENUM_ELIDARPOINTCLOUDCOLORATIONMODE(op) \
	op(ELidarPointCloudColorationMode::None) \
	op(ELidarPointCloudColorationMode::Data) \
	op(ELidarPointCloudColorationMode::DataWithClassificationAlpha) \
	op(ELidarPointCloudColorationMode::Elevation) \
	op(ELidarPointCloudColorationMode::Position) \
	op(ELidarPointCloudColorationMode::Classification) 

enum class ELidarPointCloudColorationMode : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudColorationMode> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudColorationMode>();

#define FOREACH_ENUM_ELIDARPOINTCLOUDSPRITESHAPE(op) \
	op(ELidarPointCloudSpriteShape::Square) \
	op(ELidarPointCloudSpriteShape::Circle) 

enum class ELidarPointCloudSpriteShape : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudSpriteShape> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudSpriteShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
