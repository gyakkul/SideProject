// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARPin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARTrackedGeometry;
class USceneComponent;
class UWorld;
enum class EARTrackingState : uint8;
struct FLinearColor;
#ifdef AUGMENTEDREALITY_ARPin_generated_h
#error "ARPin.generated.h already included, missing '#pragma once' in ARPin.h"
#endif
#define AUGMENTEDREALITY_ARPin_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execDebugDraw); \
	DECLARE_FUNCTION(execGetPinnedComponent); \
	DECLARE_FUNCTION(execGetTrackedGeometry); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugName); \
	DECLARE_FUNCTION(execDebugDraw); \
	DECLARE_FUNCTION(execGetPinnedComponent); \
	DECLARE_FUNCTION(execGetTrackedGeometry); \
	DECLARE_FUNCTION(execGetTrackingState); \
	DECLARE_FUNCTION(execGetLocalToWorldTransform); \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct Z_Construct_UClass_UARPin_Statics; \
public: \
	DECLARE_CLASS(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPin)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUARPin(); \
	friend struct Z_Construct_UClass_UARPin_Statics; \
public: \
	DECLARE_CLASS(UARPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPin)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPin(UARPin&&); \
	NO_API UARPin(const UARPin&); \
public: \
	NO_API virtual ~UARPin();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPin(UARPin&&); \
	NO_API UARPin(const UARPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPin) \
	NO_API virtual ~UARPin();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_11_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
