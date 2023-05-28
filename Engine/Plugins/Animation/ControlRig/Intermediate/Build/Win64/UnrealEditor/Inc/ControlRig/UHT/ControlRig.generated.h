// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UControlRig;
class UObject;
class URigHierarchy;
class UTransformableControlHandle;
struct FRigControlElement;
#ifdef CONTROLRIG_ControlRig_generated_h
#error "ControlRig.generated.h already included, missing '#pragma once' in ControlRig.h"
#endif
#define CONTROLRIG_ControlRig_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_73_DELEGATE \
static void FOnControlSelectedBP_DelegateWrapper(const FMulticastScriptDelegate& OnControlSelectedBP, UControlRig* Rig, FRigControlElement const& Control, bool bSelected);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInteractionRigClass); \
	DECLARE_FUNCTION(execGetInteractionRigClass); \
	DECLARE_FUNCTION(execSetInteractionRig); \
	DECLARE_FUNCTION(execGetInteractionRig); \
	DECLARE_FUNCTION(execIsControlSelected); \
	DECLARE_FUNCTION(execCurrentControlSelection); \
	DECLARE_FUNCTION(execClearControlSelection); \
	DECLARE_FUNCTION(execSelectControl); \
	DECLARE_FUNCTION(execRequestConstruction); \
	DECLARE_FUNCTION(execGetHierarchy); \
	DECLARE_FUNCTION(execGetHostingActor); \
	DECLARE_FUNCTION(execCreateTransformableControlHandle); \
	DECLARE_FUNCTION(execFindControlRigs);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInteractionRigClass); \
	DECLARE_FUNCTION(execGetInteractionRigClass); \
	DECLARE_FUNCTION(execSetInteractionRig); \
	DECLARE_FUNCTION(execGetInteractionRig); \
	DECLARE_FUNCTION(execIsControlSelected); \
	DECLARE_FUNCTION(execCurrentControlSelection); \
	DECLARE_FUNCTION(execClearControlSelection); \
	DECLARE_FUNCTION(execSelectControl); \
	DECLARE_FUNCTION(execRequestConstruction); \
	DECLARE_FUNCTION(execGetHierarchy); \
	DECLARE_FUNCTION(execGetHostingActor); \
	DECLARE_FUNCTION(execCreateTransformableControlHandle); \
	DECLARE_FUNCTION(execFindControlRigs);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRig, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRig(); \
	friend struct Z_Construct_UClass_UControlRig_Statics; \
public: \
	DECLARE_CLASS(UControlRig, URigVMHost, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRig) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRig*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUControlRig(); \
	friend struct Z_Construct_UClass_UControlRig_Statics; \
public: \
	DECLARE_CLASS(UControlRig, URigVMHost, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRig) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRig*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRig(UControlRig&&); \
	NO_API UControlRig(const UControlRig&); \
public: \
	NO_API virtual ~UControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRig(UControlRig&&); \
	NO_API UControlRig(const UControlRig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRig); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRig) \
	NO_API virtual ~UControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_50_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ControlRig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
