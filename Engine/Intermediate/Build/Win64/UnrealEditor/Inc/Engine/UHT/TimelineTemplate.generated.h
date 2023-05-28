// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TimelineTemplate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TimelineTemplate_generated_h
#error "TimelineTemplate.generated.h already included, missing '#pragma once' in TimelineTemplate.h"
#endif
#define ENGINE_TimelineTemplate_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTTrackBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTTrackBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTTrackId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTTrackId>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTEventTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTTrackBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTEventTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTPropertyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTTrackBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTPropertyTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTFloatTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTVectorTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTTPropertyTrack Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTTLinearColorTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTimelineTemplate, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimelineTemplate(); \
	friend struct Z_Construct_UClass_UTimelineTemplate_Statics; \
public: \
	DECLARE_CLASS(UTimelineTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineTemplate) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineTemplate(); \
	friend struct Z_Construct_UClass_UTimelineTemplate_Statics; \
public: \
	DECLARE_CLASS(UTimelineTemplate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineTemplate) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineTemplate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineTemplate(UTimelineTemplate&&); \
	ENGINE_API UTimelineTemplate(const UTimelineTemplate&); \
public: \
	ENGINE_API virtual ~UTimelineTemplate();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineTemplate(UTimelineTemplate&&); \
	ENGINE_API UTimelineTemplate(const UTimelineTemplate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineTemplate) \
	ENGINE_API virtual ~UTimelineTemplate();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_185_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_188_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimelineTemplate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimelineTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
