// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVirtualCameraOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUnit : uint8;
#ifdef VIRTUALCAMERA_IVirtualCameraOptions_generated_h
#error "IVirtualCameraOptions.generated.h already included, missing '#pragma once' in IVirtualCameraOptions.h"
#endif
#define VIRTUALCAMERA_IVirtualCameraOptions_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_RPC_WRAPPERS \
	virtual bool IsFocusVisualizationAllowed_Implementation() { return false; }; \
	virtual EUnit GetDesiredDistanceUnits_Implementation() { return (EUnit)0; }; \
	virtual void SetDesiredDistanceUnits_Implementation(const EUnit DesiredUnits) {}; \
 \
	DECLARE_FUNCTION(execIsFocusVisualizationAllowed); \
	DECLARE_FUNCTION(execGetDesiredDistanceUnits); \
	DECLARE_FUNCTION(execSetDesiredDistanceUnits);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsFocusVisualizationAllowed_Implementation() { return false; }; \
	virtual EUnit GetDesiredDistanceUnits_Implementation() { return (EUnit)0; }; \
	virtual void SetDesiredDistanceUnits_Implementation(const EUnit DesiredUnits) {}; \
 \
	DECLARE_FUNCTION(execIsFocusVisualizationAllowed); \
	DECLARE_FUNCTION(execGetDesiredDistanceUnits); \
	DECLARE_FUNCTION(execSetDesiredDistanceUnits);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraOptions(UVirtualCameraOptions&&); \
	NO_API UVirtualCameraOptions(const UVirtualCameraOptions&); \
public: \
	NO_API virtual ~UVirtualCameraOptions();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraOptions(UVirtualCameraOptions&&); \
	NO_API UVirtualCameraOptions(const UVirtualCameraOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraOptions); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraOptions) \
	NO_API virtual ~UVirtualCameraOptions();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVirtualCameraOptions(); \
	friend struct Z_Construct_UClass_UVirtualCameraOptions_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraOptions, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraOptions)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVirtualCameraOptions() {} \
public: \
	typedef UVirtualCameraOptions UClassType; \
	typedef IVirtualCameraOptions ThisClass; \
	static EUnit Execute_GetDesiredDistanceUnits(UObject* O); \
	static bool Execute_IsFocusVisualizationAllowed(UObject* O); \
	static void Execute_SetDesiredDistanceUnits(UObject* O, const EUnit DesiredUnits); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IVirtualCameraOptions() {} \
public: \
	typedef UVirtualCameraOptions UClassType; \
	typedef IVirtualCameraOptions ThisClass; \
	static EUnit Execute_GetDesiredDistanceUnits(UObject* O); \
	static bool Execute_IsFocusVisualizationAllowed(UObject* O); \
	static void Execute_SetDesiredDistanceUnits(UObject* O, const EUnit DesiredUnits); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
