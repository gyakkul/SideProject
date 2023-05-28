// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalFileNetworkReplayStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCALFILENETWORKREPLAYSTREAMING_LocalFileNetworkReplayStreaming_generated_h
#error "LocalFileNetworkReplayStreaming.generated.h already included, missing '#pragma once' in LocalFileNetworkReplayStreaming.h"
#endif
#define LOCALFILENETWORKREPLAYSTREAMING_LocalFileNetworkReplayStreaming_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h


#define FOREACH_ENUM_ELOCALFILEREPLAYRESULT(op) \
	op(ELocalFileReplayResult::Success) \
	op(ELocalFileReplayResult::InvalidReplayInfo) \
	op(ELocalFileReplayResult::StreamChunkIndexMismatch) \
	op(ELocalFileReplayResult::DecompressBuffer) \
	op(ELocalFileReplayResult::CompressionNotSupported) \
	op(ELocalFileReplayResult::DecryptBuffer) \
	op(ELocalFileReplayResult::EncryptionNotSupported) \
	op(ELocalFileReplayResult::Unknown) 

enum class ELocalFileReplayResult : uint32;
template<> struct TIsUEnumClass<ELocalFileReplayResult> { enum { Value = true }; };
template<> LOCALFILENETWORKREPLAYSTREAMING_API UEnum* StaticEnum<ELocalFileReplayResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
