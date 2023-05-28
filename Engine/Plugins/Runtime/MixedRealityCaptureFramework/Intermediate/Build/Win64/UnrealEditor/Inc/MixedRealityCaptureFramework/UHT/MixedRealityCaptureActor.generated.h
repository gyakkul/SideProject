// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MixedRealityCaptureActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture;
#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MixedRealityCaptureActor_generated_h
#error "MixedRealityCaptureActor.generated.h already included, missing '#pragma once' in MixedRealityCaptureActor.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MixedRealityCaptureActor_generated_h

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTargetDestroyed); \
	DECLARE_FUNCTION(execGetCaptureTexture); \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execSetAutoBroadcast);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTargetDestroyed); \
	DECLARE_FUNCTION(execGetCaptureTexture); \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execSetAutoBroadcast);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMixedRealityCaptureActor(); \
	friend struct Z_Construct_UClass_AMixedRealityCaptureActor_Statics; \
public: \
	DECLARE_CLASS(AMixedRealityCaptureActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(AMixedRealityCaptureActor)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMixedRealityCaptureActor(); \
	friend struct Z_Construct_UClass_AMixedRealityCaptureActor_Statics; \
public: \
	DECLARE_CLASS(AMixedRealityCaptureActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(AMixedRealityCaptureActor)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMixedRealityCaptureActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMixedRealityCaptureActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMixedRealityCaptureActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMixedRealityCaptureActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMixedRealityCaptureActor(AMixedRealityCaptureActor&&); \
	NO_API AMixedRealityCaptureActor(const AMixedRealityCaptureActor&); \
public: \
	NO_API virtual ~AMixedRealityCaptureActor();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMixedRealityCaptureActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMixedRealityCaptureActor(AMixedRealityCaptureActor&&); \
	NO_API AMixedRealityCaptureActor(const AMixedRealityCaptureActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMixedRealityCaptureActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMixedRealityCaptureActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMixedRealityCaptureActor) \
	NO_API virtual ~AMixedRealityCaptureActor();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MixedRealityCaptureActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<class AMixedRealityCaptureActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
