// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraGenerateMips.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASHADER_NiagaraGenerateMips_generated_h
#error "NiagaraGenerateMips.generated.h already included, missing '#pragma once' in NiagaraGenerateMips.h"
#endif
#define NIAGARASHADER_NiagaraGenerateMips_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraGenerateMips_h


#define FOREACH_ENUM_ENIAGARAMIPMAPGENERATIONTYPE(op) \
	op(ENiagaraMipMapGenerationType::Unfiltered) \
	op(ENiagaraMipMapGenerationType::Linear) \
	op(ENiagaraMipMapGenerationType::Blur1) \
	op(ENiagaraMipMapGenerationType::Blur2) \
	op(ENiagaraMipMapGenerationType::Blur3) \
	op(ENiagaraMipMapGenerationType::Blur4) 

enum class ENiagaraMipMapGenerationType : uint8;
template<> struct TIsUEnumClass<ENiagaraMipMapGenerationType> { enum { Value = true }; };
template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraMipMapGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
