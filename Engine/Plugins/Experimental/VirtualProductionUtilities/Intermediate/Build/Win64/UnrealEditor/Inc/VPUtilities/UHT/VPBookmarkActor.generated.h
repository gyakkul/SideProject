// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmarkActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVPBookmark;
struct FLinearColor;
#ifdef VPUTILITIES_VPBookmarkActor_generated_h
#error "VPBookmarkActor.generated.h already included, missing '#pragma once' in VPBookmarkActor.h"
#endif
#define VPUTILITIES_VPBookmarkActor_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorDroppedFromTransform_Implementation); \
	DECLARE_FUNCTION(execOnActorSelectedForTransform_Implementation); \
	DECLARE_FUNCTION(execOnActorDroppedFromCarry_Implementation); \
	DECLARE_FUNCTION(execGenerateBookmarkName_Implementation); \
	DECLARE_FUNCTION(execHideBookmarkSplineMeshIndicator_Implementation); \
	DECLARE_FUNCTION(execUpdateBookmarkSplineMeshIndicator_Implementation); \
	DECLARE_FUNCTION(execOnBookmarkChanged_Implementation); \
	DECLARE_FUNCTION(execOnBookmarkActivation_Implementation); \
	DECLARE_FUNCTION(execUpdateBookmarkColor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorDroppedFromTransform_Implementation); \
	DECLARE_FUNCTION(execOnActorSelectedForTransform_Implementation); \
	DECLARE_FUNCTION(execOnActorDroppedFromCarry_Implementation); \
	DECLARE_FUNCTION(execGenerateBookmarkName_Implementation); \
	DECLARE_FUNCTION(execHideBookmarkSplineMeshIndicator_Implementation); \
	DECLARE_FUNCTION(execUpdateBookmarkSplineMeshIndicator_Implementation); \
	DECLARE_FUNCTION(execOnBookmarkChanged_Implementation); \
	DECLARE_FUNCTION(execOnBookmarkActivation_Implementation); \
	DECLARE_FUNCTION(execUpdateBookmarkColor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPBookmarkActor(); \
	friend struct Z_Construct_UClass_AVPBookmarkActor_Statics; \
public: \
	DECLARE_CLASS(AVPBookmarkActor, AVPViewportTickableActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(AVPBookmarkActor) \
	virtual UObject* _getUObject() const override { return const_cast<AVPBookmarkActor*>(this); }


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAVPBookmarkActor(); \
	friend struct Z_Construct_UClass_AVPBookmarkActor_Statics; \
public: \
	DECLARE_CLASS(AVPBookmarkActor, AVPViewportTickableActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(AVPBookmarkActor) \
	virtual UObject* _getUObject() const override { return const_cast<AVPBookmarkActor*>(this); }


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPBookmarkActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPBookmarkActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPBookmarkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPBookmarkActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPBookmarkActor(AVPBookmarkActor&&); \
	NO_API AVPBookmarkActor(const AVPBookmarkActor&); \
public: \
	NO_API virtual ~AVPBookmarkActor();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPBookmarkActor(AVPBookmarkActor&&); \
	NO_API AVPBookmarkActor(const AVPBookmarkActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPBookmarkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPBookmarkActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPBookmarkActor) \
	NO_API virtual ~AVPBookmarkActor();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class AVPBookmarkActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
