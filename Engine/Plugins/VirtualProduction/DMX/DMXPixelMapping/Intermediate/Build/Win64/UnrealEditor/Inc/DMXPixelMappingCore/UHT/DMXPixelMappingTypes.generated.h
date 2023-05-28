// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXPixelMappingTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMXPIXELMAPPINGCORE_DMXPixelMappingTypes_generated_h
#error "DMXPixelMappingTypes.generated.h already included, missing '#pragma once' in DMXPixelMappingTypes.h"
#endif
#define DMXPIXELMAPPINGCORE_DMXPixelMappingTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingCore_Public_DMXPixelMappingTypes_h


#define FOREACH_ENUM_EDMXPIXELMAPPINGRENDERERTYPE(op) \
	op(EDMXPixelMappingRendererType::Texture) \
	op(EDMXPixelMappingRendererType::Material) \
	op(EDMXPixelMappingRendererType::UMG) 

enum class EDMXPixelMappingRendererType : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingRendererType> { enum { Value = true }; };
template<> DMXPIXELMAPPINGCORE_API UEnum* StaticEnum<EDMXPixelMappingRendererType>();

#define FOREACH_ENUM_EDMXCELLFORMAT(op) \
	op(EDMXCellFormat::PF_R) \
	op(EDMXCellFormat::PF_G) \
	op(EDMXCellFormat::PF_B) \
	op(EDMXCellFormat::PF_RG) \
	op(EDMXCellFormat::PF_RB) \
	op(EDMXCellFormat::PF_GB) \
	op(EDMXCellFormat::PF_GR) \
	op(EDMXCellFormat::PF_BR) \
	op(EDMXCellFormat::PF_BG) \
	op(EDMXCellFormat::PF_RGB) \
	op(EDMXCellFormat::PF_BRG) \
	op(EDMXCellFormat::PF_GRB) \
	op(EDMXCellFormat::PF_GBR) \
	op(EDMXCellFormat::PF_RGBA) \
	op(EDMXCellFormat::PF_GBRA) \
	op(EDMXCellFormat::PF_BRGA) \
	op(EDMXCellFormat::PF_GRBA) 

enum class EDMXCellFormat : uint8;
template<> struct TIsUEnumClass<EDMXCellFormat> { enum { Value = true }; };
template<> DMXPIXELMAPPINGCORE_API UEnum* StaticEnum<EDMXCellFormat>();

#define FOREACH_ENUM_EDMXCOLORMODE(op) \
	op(EDMXColorMode::CM_RGB) \
	op(EDMXColorMode::CM_Monochrome) 

enum class EDMXColorMode : uint8;
template<> struct TIsUEnumClass<EDMXColorMode> { enum { Value = true }; };
template<> DMXPIXELMAPPINGCORE_API UEnum* StaticEnum<EDMXColorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
