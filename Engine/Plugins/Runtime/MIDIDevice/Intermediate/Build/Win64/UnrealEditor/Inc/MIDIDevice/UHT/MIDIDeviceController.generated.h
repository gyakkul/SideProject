// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMIDIDeviceController;
enum class EMIDIEventType : uint8;
#ifdef MIDIDEVICE_MIDIDeviceController_generated_h
#error "MIDIDeviceController.generated.h already included, missing '#pragma once' in MIDIDeviceController.h"
#endif
#define MIDIDEVICE_MIDIDeviceController_generated_h

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_45_DELEGATE \
MIDIDEVICE_API void FOnMIDIEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIEvent, UMIDIDeviceController* MIDIDeviceController, int32 Timestamp, EMIDIEventType EventType, int32 Channel, int32 ControlID, int32 Velocity, int32 RawEventType);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_ACCESSORS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceController(); \
	friend struct Z_Construct_UClass_UMIDIDeviceController_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUMIDIDeviceController(); \
	friend struct Z_Construct_UClass_UMIDIDeviceController_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceController, UMIDIDeviceControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceController(UMIDIDeviceController&&); \
	NO_API UMIDIDeviceController(const UMIDIDeviceController&); \
public:


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceController(UMIDIDeviceController&&); \
	NO_API UMIDIDeviceController(const UMIDIDeviceController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceController)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_48_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_INCLASS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIDIDEVICE_API UClass* StaticClass<class UMIDIDeviceController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h


#define FOREACH_ENUM_EMIDIEVENTTYPE(op) \
	op(EMIDIEventType::Unknown) \
	op(EMIDIEventType::NoteOff) \
	op(EMIDIEventType::NoteOn) \
	op(EMIDIEventType::NoteAfterTouch) \
	op(EMIDIEventType::ControlChange) \
	op(EMIDIEventType::ProgramChange) \
	op(EMIDIEventType::ChannelAfterTouch) \
	op(EMIDIEventType::PitchBend) 

enum class EMIDIEventType : uint8;
template<> struct TIsUEnumClass<EMIDIEventType> { enum { Value = true }; };
template<> MIDIDEVICE_API UEnum* StaticEnum<EMIDIEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
