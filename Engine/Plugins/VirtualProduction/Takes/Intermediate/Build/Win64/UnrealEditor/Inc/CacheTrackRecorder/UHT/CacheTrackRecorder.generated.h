// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/CacheTrackRecorder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
enum class ECacheTrackRecorderState : uint8;
#ifdef CACHETRACKRECORDER_CacheTrackRecorder_generated_h
#error "CacheTrackRecorder.generated.h already included, missing '#pragma once' in CacheTrackRecorder.h"
#endif
#define CACHETRACKRECORDER_CacheTrackRecorder_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCacheRecorderUserParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<struct FCacheRecorderUserParameters>();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCacheRecorderProjectParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<struct FCacheRecorderProjectParameters>();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCacheRecorderParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<struct FCacheRecorderParameters>();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedTrackSource_Statics; \
	CACHETRACKRECORDER_API static class UScriptStruct* StaticStruct();


template<> CACHETRACKRECORDER_API UScriptStruct* StaticStruct<struct FCachedTrackSource>();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetCountdownSeconds);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetCountdownSeconds);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCacheTrackRecorder(); \
	friend struct Z_Construct_UClass_UCacheTrackRecorder_Statics; \
public: \
	DECLARE_CLASS(UCacheTrackRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CacheTrackRecorder"), NO_API) \
	DECLARE_SERIALIZER(UCacheTrackRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUCacheTrackRecorder(); \
	friend struct Z_Construct_UClass_UCacheTrackRecorder_Statics; \
public: \
	DECLARE_CLASS(UCacheTrackRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CacheTrackRecorder"), NO_API) \
	DECLARE_SERIALIZER(UCacheTrackRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCacheTrackRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCacheTrackRecorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCacheTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCacheTrackRecorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCacheTrackRecorder(UCacheTrackRecorder&&); \
	NO_API UCacheTrackRecorder(const UCacheTrackRecorder&); \
public: \
	NO_API virtual ~UCacheTrackRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCacheTrackRecorder(UCacheTrackRecorder&&); \
	NO_API UCacheTrackRecorder(const UCacheTrackRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCacheTrackRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCacheTrackRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCacheTrackRecorder) \
	NO_API virtual ~UCacheTrackRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_132_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h_137_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CACHETRACKRECORDER_API UClass* StaticClass<class UCacheTrackRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_CacheTrackRecorder_Public_Recorder_CacheTrackRecorder_h


#define FOREACH_ENUM_ECACHETRACKRECORDERSTATE(op) \
	op(ECacheTrackRecorderState::CountingDown) \
	op(ECacheTrackRecorderState::PreRecord) \
	op(ECacheTrackRecorderState::TickingAfterPre) \
	op(ECacheTrackRecorderState::Started) \
	op(ECacheTrackRecorderState::Stopped) \
	op(ECacheTrackRecorderState::Cancelled) 

enum class ECacheTrackRecorderState : uint8;
template<> struct TIsUEnumClass<ECacheTrackRecorderState> { enum { Value = true }; };
template<> CACHETRACKRECORDER_API UEnum* StaticEnum<ECacheTrackRecorderState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
