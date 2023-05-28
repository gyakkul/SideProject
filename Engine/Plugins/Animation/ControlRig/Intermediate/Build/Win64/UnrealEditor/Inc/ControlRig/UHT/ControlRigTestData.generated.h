// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigTestData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
class UControlRigTestData;
enum class EControlRigTestDataPlaybackMode : uint8;
#ifdef CONTROLRIG_ControlRigTestData_generated_h
#error "ControlRigTestData.generated.h already included, missing '#pragma once' in ControlRigTestData.h"
#endif
#define CONTROLRIG_ControlRigTestData_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigTestDataVariable>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigTestDataFrame>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execIsReplaying); \
	DECLARE_FUNCTION(execGetPlaybackMode); \
	DECLARE_FUNCTION(execReleaseReplay); \
	DECLARE_FUNCTION(execSetupReplay); \
	DECLARE_FUNCTION(execRecord); \
	DECLARE_FUNCTION(execGetFrameIndexForTime); \
	DECLARE_FUNCTION(execGetTimeRange); \
	DECLARE_FUNCTION(execCreateNewAsset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execIsReplaying); \
	DECLARE_FUNCTION(execGetPlaybackMode); \
	DECLARE_FUNCTION(execReleaseReplay); \
	DECLARE_FUNCTION(execSetupReplay); \
	DECLARE_FUNCTION(execRecord); \
	DECLARE_FUNCTION(execGetFrameIndexForTime); \
	DECLARE_FUNCTION(execGetTimeRange); \
	DECLARE_FUNCTION(execCreateNewAsset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigTestData, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigTestData(); \
	friend struct Z_Construct_UClass_UControlRigTestData_Statics; \
public: \
	DECLARE_CLASS(UControlRigTestData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigTestData) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigTestData(); \
	friend struct Z_Construct_UClass_UControlRigTestData_Statics; \
public: \
	DECLARE_CLASS(UControlRigTestData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigTestData) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigTestData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigTestData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigTestData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigTestData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigTestData(UControlRigTestData&&); \
	NO_API UControlRigTestData(const UControlRigTestData&); \
public: \
	NO_API virtual ~UControlRigTestData();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigTestData(UControlRigTestData&&); \
	NO_API UControlRigTestData(const UControlRigTestData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigTestData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigTestData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigTestData) \
	NO_API virtual ~UControlRigTestData();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_74_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigTestData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h


#define FOREACH_ENUM_ECONTROLRIGTESTDATAPLAYBACKMODE(op) \
	op(EControlRigTestDataPlaybackMode::Live) \
	op(EControlRigTestDataPlaybackMode::ReplayInputs) \
	op(EControlRigTestDataPlaybackMode::GroundTruth) \
	op(EControlRigTestDataPlaybackMode::Max) 

enum class EControlRigTestDataPlaybackMode : uint8;
template<> struct TIsUEnumClass<EControlRigTestDataPlaybackMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigTestDataPlaybackMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
