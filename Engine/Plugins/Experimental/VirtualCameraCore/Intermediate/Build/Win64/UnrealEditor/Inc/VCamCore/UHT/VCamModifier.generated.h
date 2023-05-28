// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifier/VCamModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
class UVCamComponent;
class UVCamModifierContext;
struct FLiveLinkCameraBlueprintData;
#ifdef VCAMCORE_VCamModifier_generated_h
#error "VCamModifier.generated.h already included, missing '#pragma once' in VCamModifier.h"
#endif
#define VCAMCORE_VCamModifier_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VCAMCORE_API UScriptStruct* StaticStruct<struct FVCamModifierConnectionPoint>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStackEntryName); \
	DECLARE_FUNCTION(execSetStackEntryName); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetCurrentLiveLinkDataFromOwningComponent); \
	DECLARE_FUNCTION(execGetOwningVCamComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStackEntryName); \
	DECLARE_FUNCTION(execSetStackEntryName); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetCurrentLiveLinkDataFromOwningComponent); \
	DECLARE_FUNCTION(execGetOwningVCamComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamModifier(); \
	friend struct Z_Construct_UClass_UVCamModifier_Statics; \
public: \
	DECLARE_CLASS(UVCamModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamModifier)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUVCamModifier(); \
	friend struct Z_Construct_UClass_UVCamModifier_Statics; \
public: \
	DECLARE_CLASS(UVCamModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamModifier)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamModifier(UVCamModifier&&); \
	NO_API UVCamModifier(const UVCamModifier&); \
public: \
	NO_API virtual ~UVCamModifier();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamModifier(UVCamModifier&&); \
	NO_API UVCamModifier(const UVCamModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamModifier) \
	NO_API virtual ~UVCamModifier();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamModifier>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamBlueprintModifier(); \
	friend struct Z_Construct_UClass_UVCamBlueprintModifier_Statics; \
public: \
	DECLARE_CLASS(UVCamBlueprintModifier, UVCamModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamBlueprintModifier)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUVCamBlueprintModifier(); \
	friend struct Z_Construct_UClass_UVCamBlueprintModifier_Statics; \
public: \
	DECLARE_CLASS(UVCamBlueprintModifier, UVCamModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamBlueprintModifier)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamBlueprintModifier(UVCamBlueprintModifier&&); \
	NO_API UVCamBlueprintModifier(const UVCamBlueprintModifier&); \
public: \
	NO_API virtual ~UVCamBlueprintModifier();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamBlueprintModifier(UVCamBlueprintModifier&&); \
	NO_API UVCamBlueprintModifier(const UVCamBlueprintModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintModifier) \
	NO_API virtual ~UVCamBlueprintModifier();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_85_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamBlueprintModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
