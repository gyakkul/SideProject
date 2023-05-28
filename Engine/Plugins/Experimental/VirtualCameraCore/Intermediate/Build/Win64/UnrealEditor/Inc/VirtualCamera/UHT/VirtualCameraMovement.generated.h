// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualCameraMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALCAMERA_VirtualCameraMovement_generated_h
#error "VirtualCameraMovement.generated.h already included, missing '#pragma once' in VirtualCameraMovement.h"
#endif
#define VIRTUALCAMERA_VirtualCameraMovement_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRotationScale); \
	DECLARE_FUNCTION(execSetLocationScale); \
	DECLARE_FUNCTION(execResetLocalAxis); \
	DECLARE_FUNCTION(execSetLocalAxis); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execSetLocalTransform); \
	DECLARE_FUNCTION(execGetLocalTransform);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRotationScale); \
	DECLARE_FUNCTION(execSetLocationScale); \
	DECLARE_FUNCTION(execResetLocalAxis); \
	DECLARE_FUNCTION(execSetLocalAxis); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execSetLocalTransform); \
	DECLARE_FUNCTION(execGetLocalTransform);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraMovement(); \
	friend struct Z_Construct_UClass_UVirtualCameraMovement_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraMovement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraMovement)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualCameraMovement(); \
	friend struct Z_Construct_UClass_UVirtualCameraMovement_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraMovement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraMovement)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraMovement(UVirtualCameraMovement&&); \
	NO_API UVirtualCameraMovement(const UVirtualCameraMovement&); \
public: \
	NO_API virtual ~UVirtualCameraMovement();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraMovement(UVirtualCameraMovement&&); \
	NO_API UVirtualCameraMovement(const UVirtualCameraMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualCameraMovement) \
	NO_API virtual ~UVirtualCameraMovement();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
