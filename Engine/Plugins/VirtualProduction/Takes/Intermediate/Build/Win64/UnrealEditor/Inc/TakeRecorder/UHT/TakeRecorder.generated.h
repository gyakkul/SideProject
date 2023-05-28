// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
enum class ETakeRecorderState : uint8;
#ifdef TAKERECORDER_TakeRecorder_generated_h
#error "TakeRecorder.generated.h already included, missing '#pragma once' in TakeRecorder.h"
#endif
#define TAKERECORDER_TakeRecorder_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetCountdownSeconds);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetCountdownSeconds);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorder(); \
	friend struct Z_Construct_UClass_UTakeRecorder_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUTakeRecorder(); \
	friend struct Z_Construct_UClass_UTakeRecorder_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorder)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorder(UTakeRecorder&&); \
	NO_API UTakeRecorder(const UTakeRecorder&); \
public: \
	NO_API virtual ~UTakeRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorder(UTakeRecorder&&); \
	NO_API UTakeRecorder(const UTakeRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorder) \
	NO_API virtual ~UTakeRecorder();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_54_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_59_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKERECORDER_API UClass* StaticClass<class UTakeRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h


#define FOREACH_ENUM_ETAKERECORDERSTATE(op) \
	op(ETakeRecorderState::CountingDown) \
	op(ETakeRecorderState::PreRecord) \
	op(ETakeRecorderState::TickingAfterPre) \
	op(ETakeRecorderState::Started) \
	op(ETakeRecorderState::Stopped) \
	op(ETakeRecorderState::Cancelled) 

enum class ETakeRecorderState : uint8;
template<> struct TIsUEnumClass<ETakeRecorderState> { enum { Value = true }; };
template<> TAKERECORDER_API UEnum* StaticEnum<ETakeRecorderState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
