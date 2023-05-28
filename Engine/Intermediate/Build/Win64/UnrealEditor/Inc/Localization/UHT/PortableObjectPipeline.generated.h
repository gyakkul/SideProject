// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortableObjectPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCALIZATION_PortableObjectPipeline_generated_h
#error "PortableObjectPipeline.generated.h already included, missing '#pragma once' in PortableObjectPipeline.h"
#endif
#define LOCALIZATION_PortableObjectPipeline_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Localization_Public_PortableObjectPipeline_h


#define FOREACH_ENUM_ELOCALIZEDTEXTCOLLAPSEMODE(op) \
	op(ELocalizedTextCollapseMode::IdenticalTextIdAndSource) \
	op(ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource) \
	op(ELocalizedTextCollapseMode::IdenticalNamespaceAndSource) 

enum class ELocalizedTextCollapseMode : uint8;
template<> struct TIsUEnumClass<ELocalizedTextCollapseMode> { enum { Value = true }; };
template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizedTextCollapseMode>();

#define FOREACH_ENUM_EPORTABLEOBJECTFORMAT(op) \
	op(EPortableObjectFormat::Unreal) \
	op(EPortableObjectFormat::Crowdin) 

enum class EPortableObjectFormat : uint8;
template<> struct TIsUEnumClass<EPortableObjectFormat> { enum { Value = true }; };
template<> LOCALIZATION_API UEnum* StaticEnum<EPortableObjectFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
