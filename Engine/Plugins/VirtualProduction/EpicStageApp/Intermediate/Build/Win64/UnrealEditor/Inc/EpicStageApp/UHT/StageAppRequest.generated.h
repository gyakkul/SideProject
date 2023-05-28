// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageAppRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EPICSTAGEAPP_StageAppRequest_generated_h
#error "StageAppRequest.generated.h already included, missing '#pragma once' in StageAppRequest.h"
#endif
#define EPICSTAGEAPP_StageAppRequest_generated_h

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSettings_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct();


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewRendererSettings>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererCreateBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewRendererCreateBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererSetRootBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewRendererSetRootBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererDestroyBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewRendererDestroyBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRendererConfigureBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewRendererConfigureBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewRenderBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewRenderBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragBeginBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewActorDragBeginBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragMoveBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewActorDragMoveBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorDragEndBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewActorDragEndBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_337_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayPreviewActorCreateBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayPreviewActorCreateBody>();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h_422_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCWebSocketNDisplayActorDuplicateBody_Statics; \
	EPICSTAGEAPP_API static class UScriptStruct* StaticStruct(); \
	typedef FRCRequest Super;


template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<struct FRCWebSocketNDisplayActorDuplicateBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppRequest_h


#define FOREACH_ENUM_ERCWEBSOCKETNDISPLAYPREVIEWRENDERTYPE(op) \
	op(ERCWebSocketNDisplayPreviewRenderType::Color) \
	op(ERCWebSocketNDisplayPreviewRenderType::Normals) 

enum class ERCWebSocketNDisplayPreviewRenderType : uint8;
template<> struct TIsUEnumClass<ERCWebSocketNDisplayPreviewRenderType> { enum { Value = true }; };
template<> EPICSTAGEAPP_API UEnum* StaticEnum<ERCWebSocketNDisplayPreviewRenderType>();

#define FOREACH_ENUM_ERCWEBSOCKETNDISPLAYPREVIEWRENDERPROJECTIONTYPE(op) \
	op(ERCWebSocketNDisplayPreviewRenderProjectionType::Perspective) \
	op(ERCWebSocketNDisplayPreviewRenderProjectionType::Azimuthal) \
	op(ERCWebSocketNDisplayPreviewRenderProjectionType::Orthographic) \
	op(ERCWebSocketNDisplayPreviewRenderProjectionType::UV) 

enum class ERCWebSocketNDisplayPreviewRenderProjectionType : uint8;
template<> struct TIsUEnumClass<ERCWebSocketNDisplayPreviewRenderProjectionType> { enum { Value = true }; };
template<> EPICSTAGEAPP_API UEnum* StaticEnum<ERCWebSocketNDisplayPreviewRenderProjectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
