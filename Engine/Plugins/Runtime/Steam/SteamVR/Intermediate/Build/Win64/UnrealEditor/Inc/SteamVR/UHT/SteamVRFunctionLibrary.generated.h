// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
enum class ESteamVRTrackedDeviceType : uint8;
#ifdef STEAMVR_SteamVRFunctionLibrary_generated_h
#error "SteamVRFunctionLibrary.generated.h already included, missing '#pragma once' in SteamVRFunctionLibrary.h"
#endif
#define STEAMVR_SteamVRFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandPositionAndOrientation); \
	DECLARE_FUNCTION(execGetTrackedDevicePositionAndOrientation); \
	DECLARE_FUNCTION(execGetValidTrackedDeviceIds);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandPositionAndOrientation); \
	DECLARE_FUNCTION(execGetTrackedDevicePositionAndOrientation); \
	DECLARE_FUNCTION(execGetValidTrackedDeviceIds);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_ACCESSORS
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRFunctionLibrary(); \
	friend struct Z_Construct_UClass_USteamVRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamVRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamVR"), NO_API) \
	DECLARE_SERIALIZER(USteamVRFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRFunctionLibrary(); \
	friend struct Z_Construct_UClass_USteamVRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamVRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamVR"), NO_API) \
	DECLARE_SERIALIZER(USteamVRFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRFunctionLibrary(USteamVRFunctionLibrary&&); \
	NO_API USteamVRFunctionLibrary(const USteamVRFunctionLibrary&); \
public: \
	NO_API virtual ~USteamVRFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRFunctionLibrary(USteamVRFunctionLibrary&&); \
	NO_API USteamVRFunctionLibrary(const USteamVRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRFunctionLibrary) \
	NO_API virtual ~USteamVRFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_INCLASS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SteamVRFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMVR_API UClass* StaticClass<class USteamVRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRFunctionLibrary_h


#define FOREACH_ENUM_ESTEAMVRTRACKEDDEVICETYPE(op) \
	op(ESteamVRTrackedDeviceType::Controller) \
	op(ESteamVRTrackedDeviceType::TrackingReference) \
	op(ESteamVRTrackedDeviceType::Other) \
	op(ESteamVRTrackedDeviceType::Invalid) 

enum class ESteamVRTrackedDeviceType : uint8;
template<> struct TIsUEnumClass<ESteamVRTrackedDeviceType> { enum { Value = true }; };
template<> STEAMVR_API UEnum* StaticEnum<ESteamVRTrackedDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
