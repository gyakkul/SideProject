// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
#ifdef VPUTILITIESEDITOR_VRTool_generated_h
#error "VRTool.generated.h already included, missing '#pragma once' in VRTool.h"
#endif
#define VPUTILITIESEDITOR_VRTool_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRTool(); \
	friend struct Z_Construct_UClass_AVRTool_Statics; \
public: \
	DECLARE_CLASS(AVRTool, AVPTransientEditorTickableActorBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), NO_API) \
	DECLARE_SERIALIZER(AVRTool)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVRTool(); \
	friend struct Z_Construct_UClass_AVRTool_Statics; \
public: \
	DECLARE_CLASS(AVRTool, AVPTransientEditorTickableActorBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), NO_API) \
	DECLARE_SERIALIZER(AVRTool)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRTool(AVRTool&&); \
	NO_API AVRTool(const AVRTool&); \
public: \
	NO_API virtual ~AVRTool();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRTool(AVRTool&&); \
	NO_API AVRTool(const AVRTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRTool) \
	NO_API virtual ~AVRTool();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIESEDITOR_API UClass* StaticClass<class AVRTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
