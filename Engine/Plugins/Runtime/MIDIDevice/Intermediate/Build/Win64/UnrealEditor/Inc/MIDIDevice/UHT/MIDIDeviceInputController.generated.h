// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceInputController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMIDIDeviceInputController;
#ifdef MIDIDEVICE_MIDIDeviceInputController_generated_h
#error "MIDIDeviceInputController.generated.h already included, missing '#pragma once' in MIDIDeviceInputController.h"
#endif
#define MIDIDEVICE_MIDIDeviceInputController_generated_h

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_15_DELEGATE \
MIDIDEVICE_API void FOnMIDINoteOn_DelegateWrapper(const FMulticastScriptDelegate& OnMIDINoteOn, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_18_DELEGATE \
MIDIDEVICE_API void FOnMIDINoteOff_DelegateWrapper(const FMulticastScriptDelegate& OnMIDINoteOff, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_21_DELEGATE \
MIDIDEVICE_API void FOnMIDIPitchBend_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIPitchBend, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Pitch);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_24_DELEGATE \
MIDIDEVICE_API void FOnMIDIAftertouch_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIAftertouch, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Amount);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_27_DELEGATE \
MIDIDEVICE_API void FOnMIDIControlChange_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIControlChange, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Type, int32 Value);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_30_DELEGATE \
MIDIDEVICE_API void FOnMIDIProgramChange_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIProgramChange, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 ControlID, int32 Velocity);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_33_DELEGATE \
MIDIDEVICE_API void FOnMIDIChannelAftertouch_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIChannelAftertouch, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Amount);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_ACCESSORS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceInputController(); \
	friend struct Z_Construct_UClass_UMIDIDeviceInputController_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceInputController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceInputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUMIDIDeviceInputController(); \
	friend struct Z_Construct_UClass_UMIDIDeviceInputController_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceInputController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceInputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceInputController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceInputController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceInputController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceInputController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceInputController(UMIDIDeviceInputController&&); \
	NO_API UMIDIDeviceInputController(const UMIDIDeviceInputController&); \
public:


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceInputController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceInputController(UMIDIDeviceInputController&&); \
	NO_API UMIDIDeviceInputController(const UMIDIDeviceInputController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceInputController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceInputController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceInputController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_INCLASS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIDIDEVICE_API UClass* StaticClass<class UMIDIDeviceInputController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
