// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef AIMODULE_AIAsyncTaskBlueprintProxy_generated_h
#error "AIAsyncTaskBlueprintProxy.generated.h already included, missing '#pragma once' in AIAsyncTaskBlueprintProxy.h"
#endif
#define AIMODULE_AIAsyncTaskBlueprintProxy_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_14_DELEGATE \
AIMODULE_API void FOAISimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& OAISimpleDelegate, EPathFollowingResult::Type MovementResult);


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted);


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoveCompleted);


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAIAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAIAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAIAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(UAIAsyncTaskBlueprintProxy&&); \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const UAIAsyncTaskBlueprintProxy&); \
public: \
	AIMODULE_API virtual ~UAIAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(UAIAsyncTaskBlueprintProxy&&); \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const UAIAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAsyncTaskBlueprintProxy) \
	AIMODULE_API virtual ~UAIAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIAsyncTaskBlueprintProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
