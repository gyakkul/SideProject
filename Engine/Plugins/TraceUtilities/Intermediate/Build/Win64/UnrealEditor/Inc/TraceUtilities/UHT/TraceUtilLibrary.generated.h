// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceUtilLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRACEUTILITIES_TraceUtilLibrary_generated_h
#error "TraceUtilLibrary.generated.h already included, missing '#pragma once' in TraceUtilLibrary.h"
#endif
#define TRACEUTILITIES_TraceUtilLibrary_generated_h

#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_SPARSE_DATA
#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTraceMarkRegionEnd); \
	DECLARE_FUNCTION(execTraceMarkRegionStart); \
	DECLARE_FUNCTION(execTraceBookmark); \
	DECLARE_FUNCTION(execGetAllChannels); \
	DECLARE_FUNCTION(execGetEnabledChannels); \
	DECLARE_FUNCTION(execIsChannelEnabled); \
	DECLARE_FUNCTION(execToggleChannel); \
	DECLARE_FUNCTION(execIsTracing); \
	DECLARE_FUNCTION(execResumeTracing); \
	DECLARE_FUNCTION(execPauseTracing); \
	DECLARE_FUNCTION(execStopTracing); \
	DECLARE_FUNCTION(execStartTraceSendTo); \
	DECLARE_FUNCTION(execStartTraceToFile);


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceMarkRegionEnd); \
	DECLARE_FUNCTION(execTraceMarkRegionStart); \
	DECLARE_FUNCTION(execTraceBookmark); \
	DECLARE_FUNCTION(execGetAllChannels); \
	DECLARE_FUNCTION(execGetEnabledChannels); \
	DECLARE_FUNCTION(execIsChannelEnabled); \
	DECLARE_FUNCTION(execToggleChannel); \
	DECLARE_FUNCTION(execIsTracing); \
	DECLARE_FUNCTION(execResumeTracing); \
	DECLARE_FUNCTION(execPauseTracing); \
	DECLARE_FUNCTION(execStopTracing); \
	DECLARE_FUNCTION(execStartTraceSendTo); \
	DECLARE_FUNCTION(execStartTraceToFile);


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_ACCESSORS
#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceUtilLibrary(); \
	friend struct Z_Construct_UClass_UTraceUtilLibrary_Statics; \
public: \
	DECLARE_CLASS(UTraceUtilLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TraceUtilities"), NO_API) \
	DECLARE_SERIALIZER(UTraceUtilLibrary)


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTraceUtilLibrary(); \
	friend struct Z_Construct_UClass_UTraceUtilLibrary_Statics; \
public: \
	DECLARE_CLASS(UTraceUtilLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TraceUtilities"), NO_API) \
	DECLARE_SERIALIZER(UTraceUtilLibrary)


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTraceUtilLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceUtilLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceUtilLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceUtilLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTraceUtilLibrary(UTraceUtilLibrary&&); \
	NO_API UTraceUtilLibrary(const UTraceUtilLibrary&); \
public: \
	NO_API virtual ~UTraceUtilLibrary();


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTraceUtilLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTraceUtilLibrary(UTraceUtilLibrary&&); \
	NO_API UTraceUtilLibrary(const UTraceUtilLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceUtilLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceUtilLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceUtilLibrary) \
	NO_API virtual ~UTraceUtilLibrary();


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_7_PROLOG
#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_SPARSE_DATA \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_RPC_WRAPPERS \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_ACCESSORS \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_INCLASS \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_SPARSE_DATA \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_ACCESSORS \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRACEUTILITIES_API UClass* StaticClass<class UTraceUtilLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
