// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BevelType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEXT3D_BevelType_generated_h
#error "BevelType.generated.h already included, missing '#pragma once' in BevelType.h"
#endif
#define TEXT3D_BevelType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_BevelType_h


#define FOREACH_ENUM_ETEXT3DBEVELTYPE(op) \
	op(EText3DBevelType::Linear) \
	op(EText3DBevelType::HalfCircle) \
	op(EText3DBevelType::Convex) \
	op(EText3DBevelType::Concave) \
	op(EText3DBevelType::OneStep) \
	op(EText3DBevelType::TwoSteps) \
	op(EText3DBevelType::Engraved) 

enum class EText3DBevelType : uint8;
template<> struct TIsUEnumClass<EText3DBevelType> { enum { Value = true }; };
template<> TEXT3D_API UEnum* StaticEnum<EText3DBevelType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
