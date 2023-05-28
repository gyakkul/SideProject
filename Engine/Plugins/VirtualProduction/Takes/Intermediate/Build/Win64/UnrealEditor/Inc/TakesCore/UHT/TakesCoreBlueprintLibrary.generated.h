// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakesCoreBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
#ifdef TAKESCORE_TakesCoreBlueprintLibrary_generated_h
#error "TakesCoreBlueprintLibrary.generated.h already included, missing '#pragma once' in TakesCoreBlueprintLibrary.h"
#endif
#define TAKESCORE_TakesCoreBlueprintLibrary_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_35_DELEGATE \
static void FOnTakeRecorderSlateChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderSlateChanged, const FString& Slate);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_36_DELEGATE \
static void FOnTakeRecorderTakeNumberChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderTakeNumberChanged, int32 TakeNumber);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOnTakeRecorderTakeNumberChanged); \
	DECLARE_FUNCTION(execSetOnTakeRecorderSlateChanged); \
	DECLARE_FUNCTION(execFindTakes); \
	DECLARE_FUNCTION(execComputeNextTakeNumber);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOnTakeRecorderTakeNumberChanged); \
	DECLARE_FUNCTION(execSetOnTakeRecorderSlateChanged); \
	DECLARE_FUNCTION(execFindTakes); \
	DECLARE_FUNCTION(execComputeNextTakeNumber);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakesCoreBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTakesCoreBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), NO_API) \
	DECLARE_SERIALIZER(UTakesCoreBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTakesCoreBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTakesCoreBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakesCore"), NO_API) \
	DECLARE_SERIALIZER(UTakesCoreBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakesCoreBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakesCoreBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakesCoreBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakesCoreBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakesCoreBlueprintLibrary(UTakesCoreBlueprintLibrary&&); \
	NO_API UTakesCoreBlueprintLibrary(const UTakesCoreBlueprintLibrary&); \
public: \
	NO_API virtual ~UTakesCoreBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakesCoreBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakesCoreBlueprintLibrary(UTakesCoreBlueprintLibrary&&); \
	NO_API UTakesCoreBlueprintLibrary(const UTakesCoreBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakesCoreBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakesCoreBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakesCoreBlueprintLibrary) \
	NO_API virtual ~UTakesCoreBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKESCORE_API UClass* StaticClass<class UTakesCoreBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
