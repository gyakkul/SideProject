// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamInputSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef VCAMINPUT_VCamInputSubsystem_generated_h
#error "VCamInputSubsystem.generated.h already included, missing '#pragma once' in VCamInputSubsystem.h"
#endif
#define VCAMINPUT_VCamInputSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindMouseWheelEvent); \
	DECLARE_FUNCTION(execBindMouseDoubleClickEvent); \
	DECLARE_FUNCTION(execBindMouseButtonUpEvent); \
	DECLARE_FUNCTION(execBindMouseButtonDownEvent); \
	DECLARE_FUNCTION(execBindMouseMoveEvent); \
	DECLARE_FUNCTION(execBindAnalogEvent); \
	DECLARE_FUNCTION(execBindKeyUpEvent); \
	DECLARE_FUNCTION(execBindKeyDownEvent); \
	DECLARE_FUNCTION(execGetShouldConsumeGamepadInput); \
	DECLARE_FUNCTION(execSetShouldConsumeGamepadInput);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindMouseWheelEvent); \
	DECLARE_FUNCTION(execBindMouseDoubleClickEvent); \
	DECLARE_FUNCTION(execBindMouseButtonUpEvent); \
	DECLARE_FUNCTION(execBindMouseButtonDownEvent); \
	DECLARE_FUNCTION(execBindMouseMoveEvent); \
	DECLARE_FUNCTION(execBindAnalogEvent); \
	DECLARE_FUNCTION(execBindKeyUpEvent); \
	DECLARE_FUNCTION(execBindKeyDownEvent); \
	DECLARE_FUNCTION(execGetShouldConsumeGamepadInput); \
	DECLARE_FUNCTION(execSetShouldConsumeGamepadInput);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_VCamInputSubsystem(); \
	friend struct Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_VCamInputSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/VCamInput"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_VCamInputSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_VCamInputSubsystem(); \
	friend struct Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_VCamInputSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/VCamInput"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_VCamInputSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_VCamInputSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_VCamInputSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_VCamInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_VCamInputSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_VCamInputSubsystem(UDEPRECATED_VCamInputSubsystem&&); \
	NO_API UDEPRECATED_VCamInputSubsystem(const UDEPRECATED_VCamInputSubsystem&); \
public:


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_VCamInputSubsystem(UDEPRECATED_VCamInputSubsystem&&); \
	NO_API UDEPRECATED_VCamInputSubsystem(const UDEPRECATED_VCamInputSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_VCamInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_VCamInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_VCamInputSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMINPUT_API UClass* StaticClass<class UDEPRECATED_VCamInputSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
