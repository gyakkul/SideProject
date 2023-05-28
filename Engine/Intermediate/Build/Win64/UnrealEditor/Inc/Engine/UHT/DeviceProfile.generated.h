// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeviceProfiles/DeviceProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeviceProfile_generated_h
#error "DeviceProfile.generated.h already included, missing '#pragma once' in DeviceProfile.h"
#endif
#define ENGINE_DeviceProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeviceProfile(); \
	friend struct Z_Construct_UClass_UDeviceProfile_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfile, UTextureLODSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeviceProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceProfile(); \
	friend struct Z_Construct_UClass_UDeviceProfile_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfile, UTextureLODSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeviceProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceProfile(UDeviceProfile&&); \
	NO_API UDeviceProfile(const UDeviceProfile&); \
public: \
	NO_API virtual ~UDeviceProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceProfile(UDeviceProfile&&); \
	NO_API UDeviceProfile(const UDeviceProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfile) \
	NO_API virtual ~UDeviceProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DeviceProfile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeviceProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
