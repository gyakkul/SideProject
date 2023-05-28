// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Output/VCamOutputProviderBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
class UUserWidget;
enum class EVCamTargetViewportID : uint8;
#ifdef VCAMCORE_VCamOutputProviderBase_generated_h
#error "VCamOutputProviderBase.generated.h already included, missing '#pragma once' in VCamOutputProviderBase.h"
#endif
#define VCAMCORE_VCamOutputProviderBase_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_32_DELEGATE \
static void FActivationDelegate_Blueprint_DelegateWrapper(const FMulticastScriptDelegate& ActivationDelegate_Blueprint, bool bNewIsActive);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUMGClass); \
	DECLARE_FUNCTION(execGetUMGClass); \
	DECLARE_FUNCTION(execSetTargetViewport); \
	DECLARE_FUNCTION(execGetTargetViewport); \
	DECLARE_FUNCTION(execSetTargetCamera); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActive);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUMGClass); \
	DECLARE_FUNCTION(execGetUMGClass); \
	DECLARE_FUNCTION(execSetTargetViewport); \
	DECLARE_FUNCTION(execGetTargetViewport); \
	DECLARE_FUNCTION(execSetTargetCamera); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetActive);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVCamOutputProviderBase, NO_API)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamOutputProviderBase(); \
	friend struct Z_Construct_UClass_UVCamOutputProviderBase_Statics; \
public: \
	DECLARE_CLASS(UVCamOutputProviderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamOutputProviderBase) \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUVCamOutputProviderBase(); \
	friend struct Z_Construct_UClass_UVCamOutputProviderBase_Statics; \
public: \
	DECLARE_CLASS(UVCamOutputProviderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamOutputProviderBase) \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamOutputProviderBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamOutputProviderBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputProviderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputProviderBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamOutputProviderBase(UVCamOutputProviderBase&&); \
	NO_API UVCamOutputProviderBase(const UVCamOutputProviderBase&); \
public: \
	NO_API virtual ~UVCamOutputProviderBase();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamOutputProviderBase(UVCamOutputProviderBase&&); \
	NO_API UVCamOutputProviderBase(const UVCamOutputProviderBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamOutputProviderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamOutputProviderBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVCamOutputProviderBase) \
	NO_API virtual ~UVCamOutputProviderBase();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamOutputProviderBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputProviderBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
