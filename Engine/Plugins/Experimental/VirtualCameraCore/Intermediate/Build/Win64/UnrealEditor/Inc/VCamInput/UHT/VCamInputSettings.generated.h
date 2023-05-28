// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamInputSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FVCamInputProfile;
class UVCamInputSettings;
#ifdef VCAMINPUT_VCamInputSettings_generated_h
#error "VCamInputSettings.generated.h already included, missing '#pragma once' in VCamInputSettings.h"
#endif
#define VCAMINPUT_VCamInputSettings_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVCamInputProfile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VCAMINPUT_API UScriptStruct* StaticStruct<struct FVCamInputProfile>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputProfileNames); \
	DECLARE_FUNCTION(execSetInputProfiles); \
	DECLARE_FUNCTION(execSetDefaultInputProfile); \
	DECLARE_FUNCTION(execGetVCamInputSettings);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputProfileNames); \
	DECLARE_FUNCTION(execSetInputProfiles); \
	DECLARE_FUNCTION(execSetDefaultInputProfile); \
	DECLARE_FUNCTION(execGetVCamInputSettings);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamInputSettings(); \
	friend struct Z_Construct_UClass_UVCamInputSettings_Statics; \
public: \
	DECLARE_CLASS(UVCamInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamInput"), NO_API) \
	DECLARE_SERIALIZER(UVCamInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUVCamInputSettings(); \
	friend struct Z_Construct_UClass_UVCamInputSettings_Statics; \
public: \
	DECLARE_CLASS(UVCamInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamInput"), NO_API) \
	DECLARE_SERIALIZER(UVCamInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamInputSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamInputSettings(UVCamInputSettings&&); \
	NO_API UVCamInputSettings(const UVCamInputSettings&); \
public: \
	NO_API virtual ~UVCamInputSettings();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamInputSettings(UVCamInputSettings&&); \
	NO_API UVCamInputSettings(const UVCamInputSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamInputSettings) \
	NO_API virtual ~UVCamInputSettings();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMINPUT_API UClass* StaticClass<class UVCamInputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
