// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;
#ifdef VCAMCORE_VCamBaseActor_generated_h
#error "VCamBaseActor.generated.h already included, missing '#pragma once' in VCamBaseActor.h"
#endif
#define VCAMCORE_VCamBaseActor_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVCamComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVCamComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVCamBaseActor(); \
	friend struct Z_Construct_UClass_AVCamBaseActor_Statics; \
public: \
	DECLARE_CLASS(AVCamBaseActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(AVCamBaseActor)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAVCamBaseActor(); \
	friend struct Z_Construct_UClass_AVCamBaseActor_Statics; \
public: \
	DECLARE_CLASS(AVCamBaseActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(AVCamBaseActor)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVCamBaseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVCamBaseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVCamBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVCamBaseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVCamBaseActor(AVCamBaseActor&&); \
	NO_API AVCamBaseActor(const AVCamBaseActor&); \
public: \
	NO_API virtual ~AVCamBaseActor();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVCamBaseActor(AVCamBaseActor&&); \
	NO_API AVCamBaseActor(const AVCamBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVCamBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVCamBaseActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVCamBaseActor) \
	NO_API virtual ~AVCamBaseActor();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class AVCamBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
