// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_ViewportInteractableInterface_generated_h
#error "ViewportInteractableInterface.generated.h already included, missing '#pragma once' in ViewportInteractableInterface.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractableInterface_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_SPARSE_DATA
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_ACCESSORS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(UViewportInteractableInterface&&); \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(const UViewportInteractableInterface&); \
public: \
	VIEWPORTINTERACTION_API virtual ~UViewportInteractableInterface();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(UViewportInteractableInterface&&); \
	VIEWPORTINTERACTION_API UViewportInteractableInterface(const UViewportInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractableInterface) \
	VIEWPORTINTERACTION_API virtual ~UViewportInteractableInterface();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUViewportInteractableInterface(); \
	friend struct Z_Construct_UClass_UViewportInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UViewportInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), VIEWPORTINTERACTION_API) \
	DECLARE_SERIALIZER(UViewportInteractableInterface)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IViewportInteractableInterface() {} \
public: \
	typedef UViewportInteractableInterface UClassType; \
	typedef IViewportInteractableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IViewportInteractableInterface() {} \
public: \
	typedef UViewportInteractableInterface UClassType; \
	typedef IViewportInteractableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_19_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
