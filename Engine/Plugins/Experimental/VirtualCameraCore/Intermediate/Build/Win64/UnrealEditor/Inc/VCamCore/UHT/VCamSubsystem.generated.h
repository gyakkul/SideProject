// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;
#ifdef VCAMCORE_VCamSubsystem_generated_h
#error "VCamSubsystem.generated.h already included, missing '#pragma once' in VCamSubsystem.h"
#endif
#define VCAMCORE_VCamSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVCamComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVCamComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamSubsystem(); \
	friend struct Z_Construct_UClass_UVCamSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVCamSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamSubsystem) \
	DECLARE_WITHIN(UVCamComponent)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVCamSubsystem(); \
	friend struct Z_Construct_UClass_UVCamSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVCamSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamSubsystem) \
	DECLARE_WITHIN(UVCamComponent)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamSubsystem(UVCamSubsystem&&); \
	NO_API UVCamSubsystem(const UVCamSubsystem&); \
public: \
	NO_API virtual ~UVCamSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamSubsystem(UVCamSubsystem&&); \
	NO_API UVCamSubsystem(const UVCamSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVCamSubsystem) \
	NO_API virtual ~UVCamSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
