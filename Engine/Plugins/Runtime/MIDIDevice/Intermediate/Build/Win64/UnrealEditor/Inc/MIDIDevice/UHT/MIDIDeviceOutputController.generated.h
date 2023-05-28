// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceOutputController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMIDIEventType : uint8;
#ifdef MIDIDEVICE_MIDIDeviceOutputController_generated_h
#error "MIDIDeviceOutputController.generated.h already included, missing '#pragma once' in MIDIDeviceOutputController.h"
#endif
#define MIDIDEVICE_MIDIDeviceOutputController_generated_h

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMIDIChannelAftertouch); \
	DECLARE_FUNCTION(execSendMIDIProgramChange); \
	DECLARE_FUNCTION(execSendMIDIControlChange); \
	DECLARE_FUNCTION(execSendMIDINoteAftertouch); \
	DECLARE_FUNCTION(execSendMIDIPitchBend); \
	DECLARE_FUNCTION(execSendMIDINoteOff); \
	DECLARE_FUNCTION(execSendMIDINoteOn); \
	DECLARE_FUNCTION(execSendMIDIEvent);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMIDIChannelAftertouch); \
	DECLARE_FUNCTION(execSendMIDIProgramChange); \
	DECLARE_FUNCTION(execSendMIDIControlChange); \
	DECLARE_FUNCTION(execSendMIDINoteAftertouch); \
	DECLARE_FUNCTION(execSendMIDIPitchBend); \
	DECLARE_FUNCTION(execSendMIDINoteOff); \
	DECLARE_FUNCTION(execSendMIDINoteOn); \
	DECLARE_FUNCTION(execSendMIDIEvent);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_ACCESSORS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceOutputController(); \
	friend struct Z_Construct_UClass_UMIDIDeviceOutputController_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceOutputController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceOutputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMIDIDeviceOutputController(); \
	friend struct Z_Construct_UClass_UMIDIDeviceOutputController_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceOutputController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceOutputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceOutputController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceOutputController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceOutputController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceOutputController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceOutputController(UMIDIDeviceOutputController&&); \
	NO_API UMIDIDeviceOutputController(const UMIDIDeviceOutputController&); \
public:


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceOutputController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceOutputController(UMIDIDeviceOutputController&&); \
	NO_API UMIDIDeviceOutputController(const UMIDIDeviceOutputController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceOutputController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceOutputController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceOutputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIDIDEVICE_API UClass* StaticClass<class UMIDIDeviceOutputController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
