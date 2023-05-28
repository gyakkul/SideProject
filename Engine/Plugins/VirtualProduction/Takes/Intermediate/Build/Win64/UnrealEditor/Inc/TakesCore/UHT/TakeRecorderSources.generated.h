// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderSources.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTakeRecorderSource;
struct FQualifiedFrameTime;
#ifdef TAKESCORE_TakeRecorderSources_generated_h
#error "TakeRecorderSources.generated.h already included, missing '#pragma once' in TakeRecorderSources.h"
#endif
#define TAKESCORE_TakeRecorderSources_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartRecordingSource); \
	DECLARE_FUNCTION(execGetSourcesCopy); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execAddSource);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartRecordingSource); \
	DECLARE_FUNCTION(execGetSourcesCopy); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execAddSource);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderSources(); \
	friend struct Z_Construct_UClass_UTakeRecorderSources_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorderSources, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorderSources)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTakeRecorderSources(); \
	friend struct Z_Construct_UClass_UTakeRecorderSources_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorderSources, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorderSources)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorderSources(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderSources) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderSources); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSources); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorderSources(UTakeRecorderSources&&); \
	NO_API UTakeRecorderSources(const UTakeRecorderSources&); \
public: \
	NO_API virtual ~UTakeRecorderSources();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorderSources(UTakeRecorderSources&&); \
	NO_API UTakeRecorderSources(const UTakeRecorderSources&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderSources); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderSources); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderSources) \
	NO_API virtual ~UTakeRecorderSources();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_32_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h_36_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKESCORE_API UClass* StaticClass<class UTakeRecorderSources>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSources_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
