// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMIDIDeviceController;
class UMIDIDeviceInputController;
class UMIDIDeviceOutputController;
struct FFoundMIDIDevice;
struct FMIDIDeviceInfo;
#ifdef MIDIDEVICE_MIDIDeviceManager_generated_h
#error "MIDIDeviceManager.generated.h already included, missing '#pragma once' in MIDIDeviceManager.h"
#endif
#define MIDIDEVICE_MIDIDeviceManager_generated_h

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MIDIDEVICE_API UScriptStruct* StaticStruct<struct FFoundMIDIDevice>();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MIDIDEVICE_API UScriptStruct* StaticStruct<struct FMIDIDeviceInfo>();

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateMIDIDeviceOutputController); \
	DECLARE_FUNCTION(execCreateMIDIDeviceInputController); \
	DECLARE_FUNCTION(execCreateMIDIDeviceController); \
	DECLARE_FUNCTION(execGetDefaultMIDIOutputDeviceID); \
	DECLARE_FUNCTION(execGetMIDIOutputDeviceIDByName); \
	DECLARE_FUNCTION(execGetDefaultMIDIInputDeviceID); \
	DECLARE_FUNCTION(execGetMIDIInputDeviceIDByName); \
	DECLARE_FUNCTION(execFindAllMIDIDeviceInfo); \
	DECLARE_FUNCTION(execFindMIDIDevices);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateMIDIDeviceOutputController); \
	DECLARE_FUNCTION(execCreateMIDIDeviceInputController); \
	DECLARE_FUNCTION(execCreateMIDIDeviceController); \
	DECLARE_FUNCTION(execGetDefaultMIDIOutputDeviceID); \
	DECLARE_FUNCTION(execGetMIDIOutputDeviceIDByName); \
	DECLARE_FUNCTION(execGetDefaultMIDIInputDeviceID); \
	DECLARE_FUNCTION(execGetMIDIInputDeviceIDByName); \
	DECLARE_FUNCTION(execFindAllMIDIDeviceInfo); \
	DECLARE_FUNCTION(execFindMIDIDevices);


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_ACCESSORS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceManager(); \
	friend struct Z_Construct_UClass_UMIDIDeviceManager_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceManager)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUMIDIDeviceManager(); \
	friend struct Z_Construct_UClass_UMIDIDeviceManager_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceManager)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceManager(UMIDIDeviceManager&&); \
	NO_API UMIDIDeviceManager(const UMIDIDeviceManager&); \
public: \
	NO_API virtual ~UMIDIDeviceManager();


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceManager(UMIDIDeviceManager&&); \
	NO_API UMIDIDeviceManager(const UMIDIDeviceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceManager) \
	NO_API virtual ~UMIDIDeviceManager();


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_69_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_INCLASS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIDIDEVICE_API UClass* StaticClass<class UMIDIDeviceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
