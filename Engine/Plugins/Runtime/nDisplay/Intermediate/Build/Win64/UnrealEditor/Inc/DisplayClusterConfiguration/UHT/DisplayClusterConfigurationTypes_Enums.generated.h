// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterConfigurationTypes_Enums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISPLAYCLUSTERCONFIGURATION_DisplayClusterConfigurationTypes_Enums_generated_h
#error "DisplayClusterConfigurationTypes_Enums.generated.h already included, missing '#pragma once' in DisplayClusterConfigurationTypes_Enums.h"
#endif
#define DISPLAYCLUSTERCONFIGURATION_DisplayClusterConfigurationTypes_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h


#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONDATASOURCE(op) \
	op(EDisplayClusterConfigurationDataSource::Text) \
	op(EDisplayClusterConfigurationDataSource::Json) 

enum class EDisplayClusterConfigurationDataSource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationDataSource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationDataSource>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONFAILOVERPOLICY(op) \
	op(EDisplayClusterConfigurationFailoverPolicy::Disabled) \
	op(EDisplayClusterConfigurationFailoverPolicy::DropSecondaryNodesOnly) 

enum class EDisplayClusterConfigurationFailoverPolicy : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationFailoverPolicy> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationFailoverPolicy>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONEYESTEREOOFFSET(op) \
	op(EDisplayClusterConfigurationEyeStereoOffset::None) \
	op(EDisplayClusterConfigurationEyeStereoOffset::Left) \
	op(EDisplayClusterConfigurationEyeStereoOffset::Right) 

enum class EDisplayClusterConfigurationEyeStereoOffset : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationEyeStereoOffset> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationEyeStereoOffset>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATION_POSTRENDERBLUR(op) \
	op(EDisplayClusterConfiguration_PostRenderBlur::None) \
	op(EDisplayClusterConfiguration_PostRenderBlur::Gaussian) \
	op(EDisplayClusterConfiguration_PostRenderBlur::Dilate) 

enum class EDisplayClusterConfiguration_PostRenderBlur : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfiguration_PostRenderBlur> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfiguration_PostRenderBlur>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_CHROMAKEYSOURCE(op) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySource::None) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySource::FrameColor) \
	op(EDisplayClusterConfigurationICVFX_ChromakeySource::ChromakeyRenderTexture) 

enum class EDisplayClusterConfigurationICVFX_ChromakeySource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_ChromakeySource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_ChromakeySource>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_LIGHTCARDRENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_LightcardRenderMode::Over) \
	op(EDisplayClusterConfigurationICVFX_LightcardRenderMode::Under) 

enum class EDisplayClusterConfigurationICVFX_LightcardRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_LightcardRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_LightcardRenderMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_OVERRIDELIGHTCARDRENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Default) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Disabled) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Over) \
	op(EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Under) 

enum class EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONICVFX_OVERRIDECAMERARENDERMODE(op) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Default) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Disabled) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakey) \
	op(EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakeyMarkers) 

enum class EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORT_STEREOMODE(op) \
	op(EDisplayClusterConfigurationViewport_StereoMode::Default) \
	op(EDisplayClusterConfigurationViewport_StereoMode::ForceMono) 

enum class EDisplayClusterConfigurationViewport_StereoMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewport_StereoMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewport_StereoMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONRENDERFAMILYMODE(op) \
	op(EDisplayClusterConfigurationRenderFamilyMode::None) \
	op(EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroups) \
	op(EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroupsAndStereo) \
	op(EDisplayClusterConfigurationRenderFamilyMode::MergeAnyPossible) 

enum class EDisplayClusterConfigurationRenderFamilyMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationRenderFamilyMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationRenderFamilyMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONCAMERAMOTIONBLURMODE(op) \
	op(EDisplayClusterConfigurationCameraMotionBlurMode::Off) \
	op(EDisplayClusterConfigurationCameraMotionBlurMode::On) \
	op(EDisplayClusterConfigurationCameraMotionBlurMode::Override) 

enum class EDisplayClusterConfigurationCameraMotionBlurMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationCameraMotionBlurMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationCameraMotionBlurMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTOVERSCANMODE(op) \
	op(EDisplayClusterConfigurationViewportOverscanMode::Pixels) \
	op(EDisplayClusterConfigurationViewportOverscanMode::Percent) 

enum class EDisplayClusterConfigurationViewportOverscanMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportOverscanMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportOverscanMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONRENDERMODE(op) \
	op(EDisplayClusterConfigurationRenderMode::Mono) \
	op(EDisplayClusterConfigurationRenderMode::SideBySide) \
	op(EDisplayClusterConfigurationRenderMode::TopBottom) 

enum class EDisplayClusterConfigurationRenderMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationRenderMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationRenderMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTCUSTOMFRUSTUMMODE(op) \
	op(EDisplayClusterConfigurationViewportCustomFrustumMode::Percent) \
	op(EDisplayClusterConfigurationViewportCustomFrustumMode::Pixels) 

enum class EDisplayClusterConfigurationViewportCustomFrustumMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportCustomFrustumMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportCustomFrustumMode>();

#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONVIEWPORTLIGHTCARDOCIOMODE(op) \
	op(EDisplayClusterConfigurationViewportLightcardOCIOMode::nDisplay) \
	op(EDisplayClusterConfigurationViewportLightcardOCIOMode::Custom) \
	op(EDisplayClusterConfigurationViewportLightcardOCIOMode::None) 

enum class EDisplayClusterConfigurationViewportLightcardOCIOMode : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationViewportLightcardOCIOMode> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportLightcardOCIOMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
