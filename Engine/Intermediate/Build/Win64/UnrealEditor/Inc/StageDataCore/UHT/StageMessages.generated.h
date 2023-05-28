// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STAGEDATACORE_StageMessages_generated_h
#error "StageMessages.generated.h already included, missing '#pragma once' in StageMessages.h"
#endif
#define STAGEDATACORE_StageMessages_generated_h

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageInstanceDescriptor>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageDataBaseMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageDataBaseMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageMonitorBaseMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageMonitorBaseMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageProviderDiscoveryMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageMonitorBaseMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageMonitorCloseMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageDataBaseMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageProviderMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageProviderEventMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageProviderPeriodicMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageProviderCloseMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FStageProviderDiscoveryResponseMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FCriticalStateProviderMessage>();

#define FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderEventMessage Super;


template<> STAGEDATACORE_API UScriptStruct* StaticStruct<struct FAssetLoadingStateProviderMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h


#define FOREACH_ENUM_ESTAGEMESSAGEFLAGS(op) \
	op(EStageMessageFlags::None) \
	op(EStageMessageFlags::Reliable) 

enum class EStageMessageFlags : uint8;
template<> struct TIsUEnumClass<EStageMessageFlags> { enum { Value = true }; };
template<> STAGEDATACORE_API UEnum* StaticEnum<EStageMessageFlags>();

#define FOREACH_ENUM_ESTAGEDATAPROVIDERSTATE(op) \
	op(EStageDataProviderState::Active) \
	op(EStageDataProviderState::Inactive) \
	op(EStageDataProviderState::Closed) 

enum class EStageDataProviderState : uint8;
template<> struct TIsUEnumClass<EStageDataProviderState> { enum { Value = true }; };
template<> STAGEDATACORE_API UEnum* StaticEnum<EStageDataProviderState>();

#define FOREACH_ENUM_ESTAGECRITICALSTATEEVENT(op) \
	op(EStageCriticalStateEvent::Enter) \
	op(EStageCriticalStateEvent::Exit) 

enum class EStageCriticalStateEvent : uint8;
template<> struct TIsUEnumClass<EStageCriticalStateEvent> { enum { Value = true }; };
template<> STAGEDATACORE_API UEnum* StaticEnum<EStageCriticalStateEvent>();

#define FOREACH_ENUM_ESTAGELOADINGSTATE(op) \
	op(EStageLoadingState::PreLoad) \
	op(EStageLoadingState::PostLoad) 

enum class EStageLoadingState : uint8;
template<> struct TIsUEnumClass<EStageLoadingState> { enum { Value = true }; };
template<> STAGEDATACORE_API UEnum* StaticEnum<EStageLoadingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
