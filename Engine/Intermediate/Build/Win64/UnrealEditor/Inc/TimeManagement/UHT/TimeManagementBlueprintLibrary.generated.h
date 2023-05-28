// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeManagementBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FQualifiedFrameTime;
struct FTimecode;
#ifdef TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h
#error "TimeManagementBlueprintLibrary.generated.h already included, missing '#pragma once' in TimeManagementBlueprintLibrary.h"
#endif
#define TIMEMANAGEMENT_TimeManagementBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_SPARSE_DATA
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimecodeFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger); \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger); \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger); \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execSnapFrameTimeToRate); \
	DECLARE_FUNCTION(execTransformTime); \
	DECLARE_FUNCTION(execIsValid_MultipleOf); \
	DECLARE_FUNCTION(execIsValid_Framerate); \
	DECLARE_FUNCTION(execConv_TimecodeToString); \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate); \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds); \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds);


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimecodeFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execConv_FrameNumberToInteger); \
	DECLARE_FUNCTION(execDivide_FrameNumberInteger); \
	DECLARE_FUNCTION(execMultiply_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberInteger); \
	DECLARE_FUNCTION(execAdd_FrameNumberInteger); \
	DECLARE_FUNCTION(execSubtract_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execAdd_FrameNumberFrameNumber); \
	DECLARE_FUNCTION(execSnapFrameTimeToRate); \
	DECLARE_FUNCTION(execTransformTime); \
	DECLARE_FUNCTION(execIsValid_MultipleOf); \
	DECLARE_FUNCTION(execIsValid_Framerate); \
	DECLARE_FUNCTION(execConv_TimecodeToString); \
	DECLARE_FUNCTION(execMultiply_SecondsFrameRate); \
	DECLARE_FUNCTION(execConv_QualifiedFrameTimeToSeconds); \
	DECLARE_FUNCTION(execConv_FrameRateToSeconds);


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ACCESSORS
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUTimeManagementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTimeManagementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), NO_API) \
	DECLARE_SERIALIZER(UTimeManagementBlueprintLibrary)


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeManagementBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&); \
	NO_API UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&); \
public: \
	NO_API virtual ~UTimeManagementBlueprintLibrary();


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeManagementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeManagementBlueprintLibrary(UTimeManagementBlueprintLibrary&&); \
	NO_API UTimeManagementBlueprintLibrary(const UTimeManagementBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeManagementBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeManagementBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeManagementBlueprintLibrary) \
	NO_API virtual ~UTimeManagementBlueprintLibrary();


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_26_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UTimeManagementBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_TimeManagementBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
