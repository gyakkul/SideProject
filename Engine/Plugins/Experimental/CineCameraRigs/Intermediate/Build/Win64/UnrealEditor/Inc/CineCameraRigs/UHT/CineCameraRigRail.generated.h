// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraRigRail.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineSplineComponent;
class UMaterialInterface;
class UTexture2D;
#ifdef CINECAMERARIGS_CineCameraRigRail_generated_h
#error "CineCameraRigRail.generated.h already included, missing '#pragma once' in CineCameraRigRail.h"
#endif
#define CINECAMERARIGS_CineCameraRigRail_generated_h

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVelocityAtPosition); \
	DECLARE_FUNCTION(execSetSplineMeshTexture); \
	DECLARE_FUNCTION(execSetSplineMeshMaterial); \
	DECLARE_FUNCTION(execGetCineSplineComponent);


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVelocityAtPosition); \
	DECLARE_FUNCTION(execSetSplineMeshTexture); \
	DECLARE_FUNCTION(execSetSplineMeshMaterial); \
	DECLARE_FUNCTION(execGetCineSplineComponent);


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACineCameraRigRail(); \
	friend struct Z_Construct_UClass_ACineCameraRigRail_Statics; \
public: \
	DECLARE_CLASS(ACineCameraRigRail, ACameraRig_Rail, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), NO_API) \
	DECLARE_SERIALIZER(ACineCameraRigRail)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACineCameraRigRail(); \
	friend struct Z_Construct_UClass_ACineCameraRigRail_Statics; \
public: \
	DECLARE_CLASS(ACineCameraRigRail, ACameraRig_Rail, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), NO_API) \
	DECLARE_SERIALIZER(ACineCameraRigRail)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACineCameraRigRail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraRigRail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraRigRail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraRigRail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACineCameraRigRail(ACineCameraRigRail&&); \
	NO_API ACineCameraRigRail(const ACineCameraRigRail&); \
public: \
	NO_API virtual ~ACineCameraRigRail();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACineCameraRigRail(ACineCameraRigRail&&); \
	NO_API ACineCameraRigRail(const ACineCameraRigRail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraRigRail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraRigRail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraRigRail) \
	NO_API virtual ~ACineCameraRigRail();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINECAMERARIGS_API UClass* StaticClass<class ACineCameraRigRail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
