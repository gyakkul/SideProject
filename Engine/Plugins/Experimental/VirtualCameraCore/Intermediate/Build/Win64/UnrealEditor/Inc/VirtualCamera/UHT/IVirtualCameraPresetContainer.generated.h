// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVirtualCameraPresetContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FVirtualCameraSettingsPreset;
#ifdef VIRTUALCAMERA_IVirtualCameraPresetContainer_generated_h
#error "IVirtualCameraPresetContainer.generated.h already included, missing '#pragma once' in IVirtualCameraPresetContainer.h"
#endif
#define VIRTUALCAMERA_IVirtualCameraPresetContainer_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_RPC_WRAPPERS \
	virtual TMap<FString,FVirtualCameraSettingsPreset> GetSettingsPresets_Implementation() { return TMap<FString,FVirtualCameraSettingsPreset>(); }; \
	virtual int32 DeletePreset_Implementation(const FString& PresetName) { return 0; }; \
	virtual bool LoadPreset_Implementation(const FString& PresetName) { return false; }; \
	virtual FString SavePreset_Implementation(bool bSaveCameraSettings, bool bSaveStabilization, bool bSaveAxisLocking, bool bSaveMotionScale) { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetSettingsPresets); \
	DECLARE_FUNCTION(execDeletePreset); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execSavePreset);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TMap<FString,FVirtualCameraSettingsPreset> GetSettingsPresets_Implementation() { return TMap<FString,FVirtualCameraSettingsPreset>(); }; \
	virtual int32 DeletePreset_Implementation(const FString& PresetName) { return 0; }; \
	virtual bool LoadPreset_Implementation(const FString& PresetName) { return false; }; \
	virtual FString SavePreset_Implementation(bool bSaveCameraSettings, bool bSaveStabilization, bool bSaveAxisLocking, bool bSaveMotionScale) { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetSettingsPresets); \
	DECLARE_FUNCTION(execDeletePreset); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execSavePreset);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraPresetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraPresetContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraPresetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraPresetContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraPresetContainer(UVirtualCameraPresetContainer&&); \
	NO_API UVirtualCameraPresetContainer(const UVirtualCameraPresetContainer&); \
public: \
	NO_API virtual ~UVirtualCameraPresetContainer();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraPresetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraPresetContainer(UVirtualCameraPresetContainer&&); \
	NO_API UVirtualCameraPresetContainer(const UVirtualCameraPresetContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraPresetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraPresetContainer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraPresetContainer) \
	NO_API virtual ~UVirtualCameraPresetContainer();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVirtualCameraPresetContainer(); \
	friend struct Z_Construct_UClass_UVirtualCameraPresetContainer_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraPresetContainer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraPresetContainer)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVirtualCameraPresetContainer() {} \
public: \
	typedef UVirtualCameraPresetContainer UClassType; \
	typedef IVirtualCameraPresetContainer ThisClass; \
	static int32 Execute_DeletePreset(UObject* O, const FString& PresetName); \
	static TMap<FString,FVirtualCameraSettingsPreset> Execute_GetSettingsPresets(UObject* O); \
	static bool Execute_LoadPreset(UObject* O, const FString& PresetName); \
	static FString Execute_SavePreset(UObject* O, bool bSaveCameraSettings, bool bSaveStabilization, bool bSaveAxisLocking, bool bSaveMotionScale); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVirtualCameraPresetContainer() {} \
public: \
	typedef UVirtualCameraPresetContainer UClassType; \
	typedef IVirtualCameraPresetContainer ThisClass; \
	static int32 Execute_DeletePreset(UObject* O, const FString& PresetName); \
	static TMap<FString,FVirtualCameraSettingsPreset> Execute_GetSettingsPresets(UObject* O); \
	static bool Execute_LoadPreset(UObject* O, const FString& PresetName); \
	static FString Execute_SavePreset(UObject* O, bool bSaveCameraSettings, bool bSaveStabilization, bool bSaveAxisLocking, bool bSaveMotionScale); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraPresetContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
