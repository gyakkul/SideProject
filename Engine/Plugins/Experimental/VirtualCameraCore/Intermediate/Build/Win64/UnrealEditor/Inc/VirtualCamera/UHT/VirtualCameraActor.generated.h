// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualCameraActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALCAMERA_VirtualCameraActor_generated_h
#error "VirtualCameraActor.generated.h already included, missing '#pragma once' in VirtualCameraActor.h"
#endif
#define VIRTUALCAMERA_VirtualCameraActor_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVirtualCameraActor(); \
	friend struct Z_Construct_UClass_AVirtualCameraActor_Statics; \
public: \
	DECLARE_CLASS(AVirtualCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(AVirtualCameraActor) \
	virtual UObject* _getUObject() const override { return const_cast<AVirtualCameraActor*>(this); }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAVirtualCameraActor(); \
	friend struct Z_Construct_UClass_AVirtualCameraActor_Statics; \
public: \
	DECLARE_CLASS(AVirtualCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(AVirtualCameraActor) \
	virtual UObject* _getUObject() const override { return const_cast<AVirtualCameraActor*>(this); }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVirtualCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualCameraActor) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualCameraActor(AVirtualCameraActor&&); \
	NO_API AVirtualCameraActor(const AVirtualCameraActor&); \
public:


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualCameraActor(AVirtualCameraActor&&); \
	NO_API AVirtualCameraActor(const AVirtualCameraActor&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualCameraActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualCameraActor)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class AVirtualCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
