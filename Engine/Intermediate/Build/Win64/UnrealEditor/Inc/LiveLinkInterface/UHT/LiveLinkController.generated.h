// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkController_generated_h
#error "LiveLinkController.generated.h already included, missing '#pragma once' in LiveLinkController.h"
#endif
#define LIVELINKINTERFACE_LiveLinkController_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkController(); \
	friend struct Z_Construct_UClass_ULiveLinkController_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkController, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkController)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkController(); \
	friend struct Z_Construct_UClass_ULiveLinkController_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkController, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkController)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkController(ULiveLinkController&&); \
	NO_API ULiveLinkController(const ULiveLinkController&); \
public: \
	NO_API virtual ~ULiveLinkController();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkController(ULiveLinkController&&); \
	NO_API ULiveLinkController(const ULiveLinkController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkController) \
	NO_API virtual ~ULiveLinkController();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_20_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_INCLASS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
