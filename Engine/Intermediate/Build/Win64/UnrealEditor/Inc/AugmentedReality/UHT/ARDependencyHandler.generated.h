// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARDependencyHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARDependencyHandler;
class UARSessionConfig;
class UObject;
enum class EARServiceAvailability : uint8;
enum class EARServiceInstallRequestResult : uint8;
enum class EARServicePermissionRequestResult : uint8;
struct FLatentActionInfo;
#ifdef AUGMENTEDREALITY_ARDependencyHandler_generated_h
#error "ARDependencyHandler.generated.h already included, missing '#pragma once' in ARDependencyHandler.h"
#endif
#define AUGMENTEDREALITY_ARDependencyHandler_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartARSessionLatent); \
	DECLARE_FUNCTION(execRequestARSessionPermission); \
	DECLARE_FUNCTION(execInstallARService); \
	DECLARE_FUNCTION(execCheckARServiceAvailability); \
	DECLARE_FUNCTION(execGetARDependencyHandler);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartARSessionLatent); \
	DECLARE_FUNCTION(execRequestARSessionPermission); \
	DECLARE_FUNCTION(execInstallARService); \
	DECLARE_FUNCTION(execCheckARServiceAvailability); \
	DECLARE_FUNCTION(execGetARDependencyHandler);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARDependencyHandler(); \
	friend struct Z_Construct_UClass_UARDependencyHandler_Statics; \
public: \
	DECLARE_CLASS(UARDependencyHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARDependencyHandler)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUARDependencyHandler(); \
	friend struct Z_Construct_UClass_UARDependencyHandler_Statics; \
public: \
	DECLARE_CLASS(UARDependencyHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARDependencyHandler)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARDependencyHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDependencyHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARDependencyHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDependencyHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARDependencyHandler(UARDependencyHandler&&); \
	NO_API UARDependencyHandler(const UARDependencyHandler&); \
public: \
	NO_API virtual ~UARDependencyHandler();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARDependencyHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARDependencyHandler(UARDependencyHandler&&); \
	NO_API UARDependencyHandler(const UARDependencyHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARDependencyHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARDependencyHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARDependencyHandler) \
	NO_API virtual ~UARDependencyHandler();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_80_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARDependencyHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h


#define FOREACH_ENUM_EARSERVICEAVAILABILITY(op) \
	op(EARServiceAvailability::UnknownError) \
	op(EARServiceAvailability::UnknownChecking) \
	op(EARServiceAvailability::UnknownTimedOut) \
	op(EARServiceAvailability::UnsupportedDeviceNotCapable) \
	op(EARServiceAvailability::SupportedNotInstalled) \
	op(EARServiceAvailability::SupportedVersionTooOld) \
	op(EARServiceAvailability::SupportedInstalled) 

enum class EARServiceAvailability : uint8;
template<> struct TIsUEnumClass<EARServiceAvailability> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceAvailability>();

#define FOREACH_ENUM_EARSERVICEINSTALLREQUESTRESULT(op) \
	op(EARServiceInstallRequestResult::Installed) \
	op(EARServiceInstallRequestResult::DeviceNotCompatible) \
	op(EARServiceInstallRequestResult::UserDeclinedInstallation) \
	op(EARServiceInstallRequestResult::FatalError) 

enum class EARServiceInstallRequestResult : uint8;
template<> struct TIsUEnumClass<EARServiceInstallRequestResult> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceInstallRequestResult>();

#define FOREACH_ENUM_EARSERVICEPERMISSIONREQUESTRESULT(op) \
	op(EARServicePermissionRequestResult::Granted) \
	op(EARServicePermissionRequestResult::Denied) 

enum class EARServicePermissionRequestResult : uint8;
template<> struct TIsUEnumClass<EARServicePermissionRequestResult> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServicePermissionRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
