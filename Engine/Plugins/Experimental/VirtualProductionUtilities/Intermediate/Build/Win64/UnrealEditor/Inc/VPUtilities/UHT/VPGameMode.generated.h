// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVPRootActor;
#ifdef VPUTILITIES_VPGameMode_generated_h
#error "VPGameMode.generated.h already included, missing '#pragma once' in VPGameMode.h"
#endif
#define VPUTILITIES_VPGameMode_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRootActor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRootActor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPGameMode(); \
	friend struct Z_Construct_UClass_AVPGameMode_Statics; \
public: \
	DECLARE_CLASS(AVPGameMode, AGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(AVPGameMode)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAVPGameMode(); \
	friend struct Z_Construct_UClass_AVPGameMode_Statics; \
public: \
	DECLARE_CLASS(AVPGameMode, AGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(AVPGameMode)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPGameMode(AVPGameMode&&); \
	NO_API AVPGameMode(const AVPGameMode&); \
public: \
	NO_API virtual ~AVPGameMode();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPGameMode(AVPGameMode&&); \
	NO_API AVPGameMode(const AVPGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPGameMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPGameMode) \
	NO_API virtual ~AVPGameMode();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class AVPGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
