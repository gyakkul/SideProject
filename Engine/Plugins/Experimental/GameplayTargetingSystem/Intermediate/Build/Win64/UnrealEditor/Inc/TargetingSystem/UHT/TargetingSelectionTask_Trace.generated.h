// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/TargetingSelectionTask_Trace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTargetingRequestHandle;
#ifdef TARGETINGSYSTEM_TargetingSelectionTask_Trace_generated_h
#error "TargetingSelectionTask_Trace.generated.h already included, missing '#pragma once' in TargetingSelectionTask_Trace.h"
#endif
#define TARGETINGSYSTEM_TargetingSelectionTask_Trace_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_RPC_WRAPPERS \
	virtual void GetAdditionalActorsToIgnore_Implementation(FTargetingRequestHandle const& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const; \
	virtual float GetSweptTraceRadius_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual float GetTraceLength_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetTraceDirection_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceOffset_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceLocation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
 \
	DECLARE_FUNCTION(execGetAdditionalActorsToIgnore); \
	DECLARE_FUNCTION(execGetSweptTraceRadius); \
	DECLARE_FUNCTION(execGetTraceLength); \
	DECLARE_FUNCTION(execGetTraceDirection); \
	DECLARE_FUNCTION(execGetSourceOffset); \
	DECLARE_FUNCTION(execGetSourceLocation);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetAdditionalActorsToIgnore_Implementation(FTargetingRequestHandle const& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const; \
	virtual float GetSweptTraceRadius_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual float GetTraceLength_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetTraceDirection_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceOffset_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	virtual FVector GetSourceLocation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
 \
	DECLARE_FUNCTION(execGetAdditionalActorsToIgnore); \
	DECLARE_FUNCTION(execGetSweptTraceRadius); \
	DECLARE_FUNCTION(execGetTraceLength); \
	DECLARE_FUNCTION(execGetTraceDirection); \
	DECLARE_FUNCTION(execGetSourceOffset); \
	DECLARE_FUNCTION(execGetSourceLocation);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingSelectionTask_Trace(); \
	friend struct Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics; \
public: \
	DECLARE_CLASS(UTargetingSelectionTask_Trace, UTargetingTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UTargetingSelectionTask_Trace)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUTargetingSelectionTask_Trace(); \
	friend struct Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics; \
public: \
	DECLARE_CLASS(UTargetingSelectionTask_Trace, UTargetingTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UTargetingSelectionTask_Trace)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingSelectionTask_Trace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingSelectionTask_Trace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingSelectionTask_Trace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingSelectionTask_Trace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingSelectionTask_Trace(UTargetingSelectionTask_Trace&&); \
	NO_API UTargetingSelectionTask_Trace(const UTargetingSelectionTask_Trace&); \
public: \
	NO_API virtual ~UTargetingSelectionTask_Trace();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetingSelectionTask_Trace(UTargetingSelectionTask_Trace&&); \
	NO_API UTargetingSelectionTask_Trace(const UTargetingSelectionTask_Trace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingSelectionTask_Trace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingSelectionTask_Trace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingSelectionTask_Trace) \
	NO_API virtual ~UTargetingSelectionTask_Trace();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_38_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_INCLASS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UTargetingSelectionTask_Trace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h


#define FOREACH_ENUM_ETARGETINGTRACETYPE(op) \
	op(ETargetingTraceType::Line) \
	op(ETargetingTraceType::Sweep) 

enum class ETargetingTraceType : uint8;
template<> struct TIsUEnumClass<ETargetingTraceType> { enum { Value = true }; };
template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingTraceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
