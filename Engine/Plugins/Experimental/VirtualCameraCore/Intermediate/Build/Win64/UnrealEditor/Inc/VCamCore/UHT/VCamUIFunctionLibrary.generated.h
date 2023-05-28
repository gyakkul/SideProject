// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VCamUIFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UVCamModifier;
class UVCamWidget;
struct FVCamConnection;
#ifdef VCAMCORE_VCamUIFunctionLibrary_generated_h
#error "VCamUIFunctionLibrary.generated.h already included, missing '#pragma once' in VCamUIFunctionLibrary.h"
#endif
#define VCAMCORE_VCamUIFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConnectedInputAction_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectedModifier_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectionPointName_VCamWidget); \
	DECLARE_FUNCTION(execIsConnected_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectionByName_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectedInputAction_VCamConnection); \
	DECLARE_FUNCTION(execGetConnectedModifier_VCamConnection); \
	DECLARE_FUNCTION(execGetConnectionPointName_VCamConnection); \
	DECLARE_FUNCTION(execIsConnected_VCamConnection);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConnectedInputAction_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectedModifier_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectionPointName_VCamWidget); \
	DECLARE_FUNCTION(execIsConnected_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectionByName_VCamWidget); \
	DECLARE_FUNCTION(execGetConnectedInputAction_VCamConnection); \
	DECLARE_FUNCTION(execGetConnectedModifier_VCamConnection); \
	DECLARE_FUNCTION(execGetConnectionPointName_VCamConnection); \
	DECLARE_FUNCTION(execIsConnected_VCamConnection);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamUIFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVCamUIFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVCamUIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamUIFunctionLibrary)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVCamUIFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVCamUIFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVCamUIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamUIFunctionLibrary)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamUIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamUIFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamUIFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamUIFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamUIFunctionLibrary(UVCamUIFunctionLibrary&&); \
	NO_API UVCamUIFunctionLibrary(const UVCamUIFunctionLibrary&); \
public: \
	NO_API virtual ~UVCamUIFunctionLibrary();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamUIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamUIFunctionLibrary(UVCamUIFunctionLibrary&&); \
	NO_API UVCamUIFunctionLibrary(const UVCamUIFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamUIFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamUIFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamUIFunctionLibrary) \
	NO_API virtual ~UVCamUIFunctionLibrary();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamUIFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
