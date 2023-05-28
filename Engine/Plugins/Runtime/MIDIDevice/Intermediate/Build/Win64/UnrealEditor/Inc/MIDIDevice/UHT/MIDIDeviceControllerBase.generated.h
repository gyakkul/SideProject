// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIDIDeviceControllerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIDIDEVICE_MIDIDeviceControllerBase_generated_h
#error "MIDIDeviceControllerBase.generated.h already included, missing '#pragma once' in MIDIDeviceControllerBase.h"
#endif
#define MIDIDEVICE_MIDIDeviceControllerBase_generated_h

#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_ACCESSORS
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDeviceControllerBase(); \
	friend struct Z_Construct_UClass_UMIDIDeviceControllerBase_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceControllerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceControllerBase)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMIDIDeviceControllerBase(); \
	friend struct Z_Construct_UClass_UMIDIDeviceControllerBase_Statics; \
public: \
	DECLARE_CLASS(UMIDIDeviceControllerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MIDIDevice"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDeviceControllerBase)


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceControllerBase(UMIDIDeviceControllerBase&&); \
	NO_API UMIDIDeviceControllerBase(const UMIDIDeviceControllerBase&); \
public: \
	NO_API virtual ~UMIDIDeviceControllerBase();


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDeviceControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIDIDeviceControllerBase(UMIDIDeviceControllerBase&&); \
	NO_API UMIDIDeviceControllerBase(const UMIDIDeviceControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDeviceControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDeviceControllerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDeviceControllerBase) \
	NO_API virtual ~UMIDIDeviceControllerBase();


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_ACCESSORS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIDIDEVICE_API UClass* StaticClass<class UMIDIDeviceControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
