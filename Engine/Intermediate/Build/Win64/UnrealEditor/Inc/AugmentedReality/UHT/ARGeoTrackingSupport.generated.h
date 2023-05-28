// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARGeoTrackingSupport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARGeoTrackingSupport;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
class UGetGeoLocationAsyncTaskBlueprintProxy;
class UObject;
enum class EARGeoTrackingAccuracy : uint8;
enum class EARGeoTrackingState : uint8;
enum class EARGeoTrackingStateReason : uint8;
#ifdef AUGMENTEDREALITY_ARGeoTrackingSupport_generated_h
#error "ARGeoTrackingSupport.generated.h already included, missing '#pragma once' in ARGeoTrackingSupport.h"
#endif
#define AUGMENTEDREALITY_ARGeoTrackingSupport_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocationWithAltitude); \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocation); \
	DECLARE_FUNCTION(execGetGeoTrackingAccuracy); \
	DECLARE_FUNCTION(execGetGeoTrackingStateReason); \
	DECLARE_FUNCTION(execGetGeoTrackingState); \
	DECLARE_FUNCTION(execGetGeoTrackingSupport);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocationWithAltitude); \
	DECLARE_FUNCTION(execAddGeoAnchorAtLocation); \
	DECLARE_FUNCTION(execGetGeoTrackingAccuracy); \
	DECLARE_FUNCTION(execGetGeoTrackingStateReason); \
	DECLARE_FUNCTION(execGetGeoTrackingState); \
	DECLARE_FUNCTION(execGetGeoTrackingSupport);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoTrackingSupport(); \
	friend struct Z_Construct_UClass_UARGeoTrackingSupport_Statics; \
public: \
	DECLARE_CLASS(UARGeoTrackingSupport, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoTrackingSupport)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUARGeoTrackingSupport(); \
	friend struct Z_Construct_UClass_UARGeoTrackingSupport_Statics; \
public: \
	DECLARE_CLASS(UARGeoTrackingSupport, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoTrackingSupport)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoTrackingSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoTrackingSupport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoTrackingSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoTrackingSupport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoTrackingSupport(UARGeoTrackingSupport&&); \
	NO_API UARGeoTrackingSupport(const UARGeoTrackingSupport&); \
public: \
	NO_API virtual ~UARGeoTrackingSupport();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoTrackingSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoTrackingSupport(UARGeoTrackingSupport&&); \
	NO_API UARGeoTrackingSupport(const UARGeoTrackingSupport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoTrackingSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoTrackingSupport); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoTrackingSupport) \
	NO_API virtual ~UARGeoTrackingSupport();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_86_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGeoTrackingSupport>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_184_DELEGATE \
static void FGeoTrackingAvailabilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& GeoTrackingAvailabilityDelegate, bool bIsAvailable, const FString& Error);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailabilityAtLocation); \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailability);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailabilityAtLocation); \
	DECLARE_FUNCTION(execCheckGeoTrackingAvailability);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&&); \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&); \
public: \
	NO_API virtual ~UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&&); \
	NO_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(const UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) \
	NO_API virtual ~UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_178_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_268_DELEGATE \
static void FGetGeoLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetGeoLocationDelegate, float Longitude, float Latitude, float Altitude, const FString& Error);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeoLocationAtWorldPosition);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeoLocationAtWorldPosition);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UGetGeoLocationAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UGetGeoLocationAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS \
private: \
	static void StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UGetGeoLocationAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UGetGeoLocationAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGeoLocationAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetGeoLocationAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGeoLocationAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(UGetGeoLocationAsyncTaskBlueprintProxy&&); \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const UGetGeoLocationAsyncTaskBlueprintProxy&); \
public: \
	NO_API virtual ~UGetGeoLocationAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(UGetGeoLocationAsyncTaskBlueprintProxy&&); \
	NO_API UGetGeoLocationAsyncTaskBlueprintProxy(const UGetGeoLocationAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetGeoLocationAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGeoLocationAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGeoLocationAsyncTaskBlueprintProxy) \
	NO_API virtual ~UGetGeoLocationAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_262_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UGetGeoLocationAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h


#define FOREACH_ENUM_EARGEOTRACKINGSTATE(op) \
	op(EARGeoTrackingState::Initializing) \
	op(EARGeoTrackingState::Localized) \
	op(EARGeoTrackingState::Localizing) \
	op(EARGeoTrackingState::NotAvailable) 

enum class EARGeoTrackingState : uint8;
template<> struct TIsUEnumClass<EARGeoTrackingState> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingState>();

#define FOREACH_ENUM_EARGEOTRACKINGSTATEREASON(op) \
	op(EARGeoTrackingStateReason::None) \
	op(EARGeoTrackingStateReason::NotAvailableAtLocation) \
	op(EARGeoTrackingStateReason::NeedLocationPermissions) \
	op(EARGeoTrackingStateReason::DevicePointedTooLow) \
	op(EARGeoTrackingStateReason::WorldTrackingUnstable) \
	op(EARGeoTrackingStateReason::WaitingForLocation) \
	op(EARGeoTrackingStateReason::GeoDataNotLoaded) \
	op(EARGeoTrackingStateReason::VisualLocalizationFailed) \
	op(EARGeoTrackingStateReason::WaitingForAvailabilityCheck) 

enum class EARGeoTrackingStateReason : uint8;
template<> struct TIsUEnumClass<EARGeoTrackingStateReason> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingStateReason>();

#define FOREACH_ENUM_EARGEOTRACKINGACCURACY(op) \
	op(EARGeoTrackingAccuracy::Undetermined) \
	op(EARGeoTrackingAccuracy::Low) \
	op(EARGeoTrackingAccuracy::Medium) \
	op(EARGeoTrackingAccuracy::High) 

enum class EARGeoTrackingAccuracy : uint8;
template<> struct TIsUEnumClass<EARGeoTrackingAccuracy> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARGeoTrackingAccuracy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
