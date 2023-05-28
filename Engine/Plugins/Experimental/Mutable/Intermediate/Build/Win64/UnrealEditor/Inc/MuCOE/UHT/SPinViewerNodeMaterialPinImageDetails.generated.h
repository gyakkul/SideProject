// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/SPinViewerNodeMaterialPinImageDetails.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECTEDITOR_SPinViewerNodeMaterialPinImageDetails_generated_h
#error "SPinViewerNodeMaterialPinImageDetails.generated.h already included, missing '#pragma once' in SPinViewerNodeMaterialPinImageDetails.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_SPinViewerNodeMaterialPinImageDetails_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_SPinViewerNodeMaterialPinImageDetails_h


#define FOREACH_ENUM_EUVLAYOUTMODE(op) \
	op(EUVLayoutMode::Default) \
	op(EUVLayoutMode::Ignore) \
	op(EUVLayoutMode::Index) 

enum class EUVLayoutMode;
template<> struct TIsUEnumClass<EUVLayoutMode> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EUVLayoutMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
