// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifier/VCamModifierInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;
#ifdef VCAMCORE_VCamModifierInterface_generated_h
#error "VCamModifierInterface.generated.h already included, missing '#pragma once' in VCamModifierInterface.h"
#endif
#define VCAMCORE_VCamModifierInterface_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_RPC_WRAPPERS \
	virtual void OnVCamComponentChanged_Implementation(UVCamComponent* VCam) {}; \
 \
	DECLARE_FUNCTION(execOnVCamComponentChanged);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVCamComponentChanged);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VCAMCORE_API UVCamModifierInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamModifierInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VCAMCORE_API, UVCamModifierInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamModifierInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VCAMCORE_API UVCamModifierInterface(UVCamModifierInterface&&); \
	VCAMCORE_API UVCamModifierInterface(const UVCamModifierInterface&); \
public: \
	VCAMCORE_API virtual ~UVCamModifierInterface();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VCAMCORE_API UVCamModifierInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VCAMCORE_API UVCamModifierInterface(UVCamModifierInterface&&); \
	VCAMCORE_API UVCamModifierInterface(const UVCamModifierInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VCAMCORE_API, UVCamModifierInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamModifierInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamModifierInterface) \
	VCAMCORE_API virtual ~UVCamModifierInterface();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVCamModifierInterface(); \
	friend struct Z_Construct_UClass_UVCamModifierInterface_Statics; \
public: \
	DECLARE_CLASS(UVCamModifierInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VCamCore"), VCAMCORE_API) \
	DECLARE_SERIALIZER(UVCamModifierInterface)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVCamModifierInterface() {} \
public: \
	typedef UVCamModifierInterface UClassType; \
	typedef IVCamModifierInterface ThisClass; \
	static void Execute_OnVCamComponentChanged(UObject* O, UVCamComponent* VCam); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IVCamModifierInterface() {} \
public: \
	typedef UVCamModifierInterface UClassType; \
	typedef IVCamModifierInterface ThisClass; \
	static void Execute_OnVCamComponentChanged(UObject* O, UVCamComponent* VCam); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamModifierInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
