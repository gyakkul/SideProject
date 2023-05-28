// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OodleNetworkFaultHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OODLENETWORKHANDLERCOMPONENT_OodleNetworkFaultHandler_generated_h
#error "OodleNetworkFaultHandler.generated.h already included, missing '#pragma once' in OodleNetworkFaultHandler.h"
#endif
#define OODLENETWORKHANDLERCOMPONENT_OodleNetworkFaultHandler_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkFaultHandler_h


#define FOREACH_ENUM_EOODLENETRESULT(op) \
	op(EOodleNetResult::Unknown) \
	op(EOodleNetResult::Success) \
	op(EOodleNetResult::OodleDecodeFailed) \
	op(EOodleNetResult::OodleSerializePayloadFail) \
	op(EOodleNetResult::OodleBadDecompressedLength) \
	op(EOodleNetResult::OodleNoDictionary) 

enum class EOodleNetResult : uint8;
template<> struct TIsUEnumClass<EOodleNetResult> { enum { Value = true }; };
template<> OODLENETWORKHANDLERCOMPONENT_API UEnum* StaticEnum<EOodleNetResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
