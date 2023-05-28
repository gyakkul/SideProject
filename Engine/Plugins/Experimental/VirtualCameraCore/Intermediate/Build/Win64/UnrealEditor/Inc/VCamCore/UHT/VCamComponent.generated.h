// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
class UInputAction;
class UInputModifier;
class UInputTrigger;
class UInputVCamSubsystem;
class UInterface;
class UObject;
class UObject; class UObject;
class UVCamComponent;
class UVCamModifier;
class UVCamModifierContext;
class UVCamOutputProviderBase;
class UVCamSubsystem;
struct FEnhancedActionKeyMapping;
struct FGameplayTag;
struct FInputActionValue;
struct FKey;
struct FLiveLinkCameraBlueprintData;
struct FLiveLinkSubjectName;
struct FVCamInputDeviceConfig;
struct FVCamInputProfile;
#ifdef VCAMCORE_VCamComponent_generated_h
#error "VCamComponent.generated.h already included, missing '#pragma once' in VCamComponent.h"
#endif
#define VCAMCORE_VCamComponent_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_44_DELEGATE \
VCAMCORE_API void FOnComponentReplaced_DelegateWrapper(const FMulticastScriptDelegate& OnComponentReplaced, UVCamComponent* NewComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputVCamSubsystem); \
	DECLARE_FUNCTION(execGetSubsystemArray); \
	DECLARE_FUNCTION(execSetInputDeviceSettings); \
	DECLARE_FUNCTION(execGetInputDeviceSettings); \
	DECLARE_FUNCTION(execSetInputProfile); \
	DECLARE_FUNCTION(execGetInputProfile); \
	DECLARE_FUNCTION(execSetDisableOutputOnMultiUserReceiver); \
	DECLARE_FUNCTION(execGetDisableOutputOnMultiUserReceiver); \
	DECLARE_FUNCTION(execSetDisableComponentWhenSpawnedBySequencer); \
	DECLARE_FUNCTION(execGetDisableComponentWhenSpawnedBySequencer); \
	DECLARE_FUNCTION(execSetLiveLinkSubobject); \
	DECLARE_FUNCTION(execGetLiveLinkSubobject); \
	DECLARE_FUNCTION(execSetRole); \
	DECLARE_FUNCTION(execGetRole); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction); \
	DECLARE_FUNCTION(execGetPlayerMappableKeys); \
	DECLARE_FUNCTION(execUnregisterObjectForInput); \
	DECLARE_FUNCTION(execRegisterObjectForInput); \
	DECLARE_FUNCTION(execGetLiveLinkDataForCurrentFrame); \
	DECLARE_FUNCTION(execGetOutputProvidersByClass); \
	DECLARE_FUNCTION(execGetOutputProviderByIndex); \
	DECLARE_FUNCTION(execGetAllOutputProviders); \
	DECLARE_FUNCTION(execGetNumberOfOutputProviders); \
	DECLARE_FUNCTION(execRemoveOutputProviderByIndex); \
	DECLARE_FUNCTION(execRemoveOutputProvider); \
	DECLARE_FUNCTION(execRemoveAllOutputProviders); \
	DECLARE_FUNCTION(execSetOutputProviderIndex); \
	DECLARE_FUNCTION(execInsertOutputProvider); \
	DECLARE_FUNCTION(execAddOutputProvider); \
	DECLARE_FUNCTION(execGetModifierContext); \
	DECLARE_FUNCTION(execSetModifierContextClass); \
	DECLARE_FUNCTION(execGetModifiersByInterface); \
	DECLARE_FUNCTION(execGetModifiersByClass); \
	DECLARE_FUNCTION(execGetModifierByName); \
	DECLARE_FUNCTION(execGetModifierByIndex); \
	DECLARE_FUNCTION(execGetAllModifierNames); \
	DECLARE_FUNCTION(execGetAllModifiers); \
	DECLARE_FUNCTION(execGetNumberOfModifiers); \
	DECLARE_FUNCTION(execRemoveModifierByName); \
	DECLARE_FUNCTION(execRemoveModifierByIndex); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execRemoveAllModifiers); \
	DECLARE_FUNCTION(execSetModifierIndex); \
	DECLARE_FUNCTION(execInsertModifier); \
	DECLARE_FUNCTION(execAddModifier); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetPlayerMappedKey); \
	DECLARE_FUNCTION(execGetAllPlayerMappableActionKeyMappings); \
	DECLARE_FUNCTION(execSaveCurrentInputProfileToSettings); \
	DECLARE_FUNCTION(execAddInputProfileWithCurrentlyActiveMappings); \
	DECLARE_FUNCTION(execSetInputProfileFromName); \
	DECLARE_FUNCTION(execHandleObjectReplaced);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputVCamSubsystem); \
	DECLARE_FUNCTION(execGetSubsystemArray); \
	DECLARE_FUNCTION(execSetInputDeviceSettings); \
	DECLARE_FUNCTION(execGetInputDeviceSettings); \
	DECLARE_FUNCTION(execSetInputProfile); \
	DECLARE_FUNCTION(execGetInputProfile); \
	DECLARE_FUNCTION(execSetDisableOutputOnMultiUserReceiver); \
	DECLARE_FUNCTION(execGetDisableOutputOnMultiUserReceiver); \
	DECLARE_FUNCTION(execSetDisableComponentWhenSpawnedBySequencer); \
	DECLARE_FUNCTION(execGetDisableComponentWhenSpawnedBySequencer); \
	DECLARE_FUNCTION(execSetLiveLinkSubobject); \
	DECLARE_FUNCTION(execGetLiveLinkSubobject); \
	DECLARE_FUNCTION(execSetRole); \
	DECLARE_FUNCTION(execGetRole); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction); \
	DECLARE_FUNCTION(execGetPlayerMappableKeys); \
	DECLARE_FUNCTION(execUnregisterObjectForInput); \
	DECLARE_FUNCTION(execRegisterObjectForInput); \
	DECLARE_FUNCTION(execGetLiveLinkDataForCurrentFrame); \
	DECLARE_FUNCTION(execGetOutputProvidersByClass); \
	DECLARE_FUNCTION(execGetOutputProviderByIndex); \
	DECLARE_FUNCTION(execGetAllOutputProviders); \
	DECLARE_FUNCTION(execGetNumberOfOutputProviders); \
	DECLARE_FUNCTION(execRemoveOutputProviderByIndex); \
	DECLARE_FUNCTION(execRemoveOutputProvider); \
	DECLARE_FUNCTION(execRemoveAllOutputProviders); \
	DECLARE_FUNCTION(execSetOutputProviderIndex); \
	DECLARE_FUNCTION(execInsertOutputProvider); \
	DECLARE_FUNCTION(execAddOutputProvider); \
	DECLARE_FUNCTION(execGetModifierContext); \
	DECLARE_FUNCTION(execSetModifierContextClass); \
	DECLARE_FUNCTION(execGetModifiersByInterface); \
	DECLARE_FUNCTION(execGetModifiersByClass); \
	DECLARE_FUNCTION(execGetModifierByName); \
	DECLARE_FUNCTION(execGetModifierByIndex); \
	DECLARE_FUNCTION(execGetAllModifierNames); \
	DECLARE_FUNCTION(execGetAllModifiers); \
	DECLARE_FUNCTION(execGetNumberOfModifiers); \
	DECLARE_FUNCTION(execRemoveModifierByName); \
	DECLARE_FUNCTION(execRemoveModifierByIndex); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execRemoveAllModifiers); \
	DECLARE_FUNCTION(execSetModifierIndex); \
	DECLARE_FUNCTION(execInsertModifier); \
	DECLARE_FUNCTION(execAddModifier); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetPlayerMappedKey); \
	DECLARE_FUNCTION(execGetAllPlayerMappableActionKeyMappings); \
	DECLARE_FUNCTION(execSaveCurrentInputProfileToSettings); \
	DECLARE_FUNCTION(execAddInputProfileWithCurrentlyActiveMappings); \
	DECLARE_FUNCTION(execSetInputProfileFromName); \
	DECLARE_FUNCTION(execHandleObjectReplaced);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVCamComponent, NO_API)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamComponent(); \
	friend struct Z_Construct_UClass_UVCamComponent_Statics; \
public: \
	DECLARE_CLASS(UVCamComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamComponent) \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUVCamComponent(); \
	friend struct Z_Construct_UClass_UVCamComponent_Statics; \
public: \
	DECLARE_CLASS(UVCamComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamComponent) \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamComponent(UVCamComponent&&); \
	NO_API UVCamComponent(const UVCamComponent&); \
public: \
	NO_API virtual ~UVCamComponent();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamComponent(UVCamComponent&&); \
	NO_API UVCamComponent(const UVCamComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamComponent) \
	NO_API virtual ~UVCamComponent();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_65_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
