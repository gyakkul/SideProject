// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpNetworkReplayStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTTPNETWORKREPLAYSTREAMING_HttpNetworkReplayStreaming_generated_h
#error "HttpNetworkReplayStreaming.generated.h already included, missing '#pragma once' in HttpNetworkReplayStreaming.h"
#endif
#define HTTPNETWORKREPLAYSTREAMING_HttpNetworkReplayStreaming_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NetworkReplayStreaming_HttpNetworkReplayStreaming_Public_HttpNetworkReplayStreaming_h


#define FOREACH_ENUM_EHTTPREPLAYRESULT(op) \
	op(EHttpReplayResult::Success) \
	op(EHttpReplayResult::FailedJsonParse) \
	op(EHttpReplayResult::DataUnavailable) \
	op(EHttpReplayResult::InvalidHttpResponse) \
	op(EHttpReplayResult::CompressionFailed) \
	op(EHttpReplayResult::DecompressionFailed) \
	op(EHttpReplayResult::InvalidPayload) \
	op(EHttpReplayResult::Unknown) 

enum class EHttpReplayResult : uint32;
template<> struct TIsUEnumClass<EHttpReplayResult> { enum { Value = true }; };
template<> HTTPNETWORKREPLAYSTREAMING_API UEnum* StaticEnum<EHttpReplayResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
