// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SynthSlateStyle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SYNTHESIS_SynthSlateStyle_generated_h
#error "SynthSlateStyle.generated.h already included, missing '#pragma once' in SynthSlateStyle.h"
#endif
#define SYNTHESIS_SynthSlateStyle_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSynthSlateStyle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSynthSlateStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthSlateStyle_h


#define FOREACH_ENUM_ESYNTHSLATESIZETYPE(op) \
	op(ESynthSlateSizeType::Small) \
	op(ESynthSlateSizeType::Medium) \
	op(ESynthSlateSizeType::Large) \
	op(ESynthSlateSizeType::Count) 

enum class ESynthSlateSizeType : uint8;
template<> struct TIsUEnumClass<ESynthSlateSizeType> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESynthSlateSizeType>();

#define FOREACH_ENUM_ESYNTHSLATECOLORSTYLE(op) \
	op(ESynthSlateColorStyle::Light) \
	op(ESynthSlateColorStyle::Dark) \
	op(ESynthSlateColorStyle::Count) 

enum class ESynthSlateColorStyle : uint8;
template<> struct TIsUEnumClass<ESynthSlateColorStyle> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESynthSlateColorStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
