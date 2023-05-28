// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterConfigurationTypes_OutputRemap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISPLAYCLUSTERCONFIGURATION_DisplayClusterConfigurationTypes_OutputRemap_generated_h
#error "DisplayClusterConfigurationTypes_OutputRemap.generated.h already included, missing '#pragma once' in DisplayClusterConfigurationTypes_OutputRemap.h"
#endif
#define DISPLAYCLUSTERCONFIGURATION_DisplayClusterConfigurationTypes_OutputRemap_generated_h

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<struct FDisplayClusterConfigurationFramePostProcess_OutputRemap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h


#define FOREACH_ENUM_EDISPLAYCLUSTERCONFIGURATIONFRAMEPOSTPROCESS_OUTPUTREMAPSOURCE(op) \
	op(EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::StaticMesh) \
	op(EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::ExternalFile) \
	op(EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::MeshComponent) 

enum class EDisplayClusterConfigurationFramePostProcess_OutputRemapSource : uint8;
template<> struct TIsUEnumClass<EDisplayClusterConfigurationFramePostProcess_OutputRemapSource> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationFramePostProcess_OutputRemapSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
